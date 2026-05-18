
// Address: 0x1935b0
// Original: j__ZN13CWaterCannons6RenderEv
// Demangled: CWaterCannons::Render(void)
// attributes: thunk
int __fastcall CWaterCannons::Render(CWaterCannons *this)
{
  return _ZN13CWaterCannons6RenderEv(this);
}


// ============================================================

// Address: 0x194af4
// Original: j__ZN13CWaterCannons6UpdateEv
// Demangled: CWaterCannons::Update(void)
// attributes: thunk
int __fastcall CWaterCannons::Update(CWaterCannons *this)
{
  return _ZN13CWaterCannons6UpdateEv(this);
}


// ============================================================

// Address: 0x194f48
// Original: j__ZN13CWaterCannons9UpdateOneEjP7CVectorS1_
// Demangled: CWaterCannons::UpdateOne(uint,CVector *,CVector *)
// attributes: thunk
int __fastcall CWaterCannons::UpdateOne(CWaterCannons *this, unsigned int a2, CVector *a3, CVector *a4)
{
  return _ZN13CWaterCannons9UpdateOneEjP7CVectorS1_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x196530
// Original: j__ZN13CWaterCannons4InitEv
// Demangled: CWaterCannons::Init(void)
// attributes: thunk
int __fastcall CWaterCannons::Init(CWaterCannons *this)
{
  return _ZN13CWaterCannons4InitEv(this);
}


// ============================================================

// Address: 0x5cb7c0
// Original: _ZN13CWaterCannons4InitEv
// Demangled: CWaterCannons::Init(void)
int __fastcall CWaterCannons::Init(CWaterCannons *this)
{
  word_A7C364 = 0;
  unk_A7C67C = 0LL;
  unk_A7C684 = 0LL;
  dword_A7D0A0 = 655371;
  CWaterCannons::aCannons = 0;
  dword_A7C368 = CTimer::m_snTimeInMilliseconds;
  unk_A7D080 = 0x1000200010000LL;
  unk_A7D088 = 0x5000400020003LL;
  unk_A7C66C = 0LL;
  unk_A7C674 = 0LL;
  *(_QWORD *)&dword_A7D090 = 0x6000700050006LL;
  *(_QWORD *)&dword_A7D098 = 0x9000A00090008LL;
  CAEWaterCannonAudioEntity::Initialise(
    (CAEWaterCannonAudioEntity *)dword_A7C68C,
    (CWaterCannon *)&CWaterCannons::aCannons);
  unk_A7CA48 = 0LL;
  unk_A7CA50 = 0LL;
  unk_A7CA38 = 0LL;
  unk_A7CA40 = 0LL;
  word_A7C730 = 0;
  dword_A7C72C = 0;
  dword_A7C734 = CTimer::m_snTimeInMilliseconds;
  unk_A7D080 = 0x1000200010000LL;
  unk_A7D088 = 0x5000400020003LL;
  dword_A7D094 = (int)&stru_5FFF8.st_shndx + 1;
  dword_A7D098 = 589832;
  dword_A7D09C = (int)"eek_frame";
  dword_A7D0A0 = 655371;
  dword_A7D090 = (int)&stru_4FFF8.st_shndx;
  CAEWaterCannonAudioEntity::Initialise((CAEWaterCannonAudioEntity *)dword_A7CA58, (CWaterCannon *)&dword_A7C72C);
  unk_A7D080 = 0x1000200010000LL;
  unk_A7D088 = 0x5000400020003LL;
  unk_A7CE14 = 0LL;
  unk_A7CE1C = 0LL;
  unk_A7CE04 = 0LL;
  unk_A7CE0C = 0LL;
  word_A7CAFC = 0;
  dword_A7CAF8 = 0;
  dword_A7CB00 = CTimer::m_snTimeInMilliseconds;
  dword_A7D094 = 393223;
  dword_A7D098 = 589832;
  dword_A7D09C = (int)"eek_frame";
  dword_A7D0A0 = 655371;
  dword_A7D090 = (int)&stru_4FFF8.st_shndx;
  return sub_193CA8((CAEWaterCannonAudioEntity *)dword_A7CE24, (CWaterCannon *)&dword_A7CAF8);
}


// ============================================================

// Address: 0x5cb920
// Original: _ZN13CWaterCannons9UpdateOneEjP7CVectorS1_
// Demangled: CWaterCannons::UpdateOne(uint,CVector *,CVector *)
int *__fastcall CWaterCannons::UpdateOne(CWaterCannons *this, __int64 *a2, CVector *a3, CVector *a4)
{
  __int16 v7; // r4
  int *result; // r0
  __int64 v9; // d16
  int *v10; // r0
  __int16 *v11; // r5
  int *v12; // r1
  int v13; // r2
  int *v14; // r0
  int *v15; // r8
  int v16; // r0
  int v17; // r0
  int *v18; // r0
  __int64 v19; // d16
  __int64 v20; // d16
  int *v21; // r0

  if ( (CWaterCannons *)CWaterCannons::aCannons[0] == this )
  {
    v7 = 0;
LABEL_7:
    v9 = *a2;
    v10 = &CWaterCannons::aCannons[243 * v7];
    v11 = (__int16 *)(v10 + 1);
    v12 = &v10[3 * *((__int16 *)v10 + 2)];
    v12[5] = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v12 + 3) = v9;
    v13 = *((_DWORD *)a3 + 2);
    v14 = &v10[3 * *((__int16 *)v10 + 2)];
    *(_QWORD *)(v14 + 99) = *(_QWORD *)a3;
    v14[101] = v13;
LABEL_8:
    result = (int *)((char *)&CWaterCannons::aCannons[243 * v7] + *v11);
    *((_BYTE *)result + 780) = 1;
    return result;
  }
  if ( (CWaterCannons *)dword_A7C72C == this )
  {
    v7 = 1;
    goto LABEL_7;
  }
  result = CWaterCannons::aCannons;
  if ( (CWaterCannons *)dword_A7CAF8 == this )
  {
    v7 = 2;
    goto LABEL_7;
  }
  if ( !CWaterCannons::aCannons[0] )
  {
    v7 = 0;
    goto LABEL_16;
  }
  if ( !dword_A7C72C )
  {
    v7 = 1;
    goto LABEL_16;
  }
  if ( !dword_A7CAF8 )
  {
    v7 = 2;
LABEL_16:
    v15 = &CWaterCannons::aCannons[243 * v7];
    *v15 = 0;
    v16 = CTimer::m_snTimeInMilliseconds;
    *((_WORD *)v15 + 2) = 0;
    v11 = (__int16 *)(v15 + 1);
    *(_QWORD *)(v15 + 199) = 0LL;
    *(_QWORD *)(v15 + 201) = 0LL;
    *(_QWORD *)(v15 + 195) = 0LL;
    *(_QWORD *)(v15 + 197) = 0LL;
    v15[2] = v16;
    dword_A7D0A0 = 655371;
    unk_A7D080 = 0x1000200010000LL;
    unk_A7D088 = 0x5000400020003LL;
    *(_QWORD *)&dword_A7D090 = 0x6000700050006LL;
    *(_QWORD *)&dword_A7D098 = 0x9000A00090008LL;
    CAEWaterCannonAudioEntity::Initialise((CAEWaterCannonAudioEntity *)(v15 + 203), (CWaterCannon *)v15);
    v17 = 3 * *((__int16 *)v15 + 2);
    *v15 = (int)this;
    v18 = &v15[v17];
    v19 = *a2;
    v18[5] = *((_DWORD *)a2 + 2);
    *(_QWORD *)(v18 + 3) = v19;
    v20 = *(_QWORD *)a3;
    v21 = &v15[3 * *((__int16 *)v15 + 2)];
    v21[101] = *((_DWORD *)a3 + 2);
    *(_QWORD *)(v21 + 99) = v20;
    goto LABEL_8;
  }
  return result;
}


// ============================================================

// Address: 0x5cbad0
// Original: _ZN13CWaterCannons6UpdateEv
// Demangled: CWaterCannons::Update(void)
int __fastcall CWaterCannons::Update(CWaterCannons *this)
{
  int result; // r0

  CAEWaterCannonAudioEntity::Service((CAEWaterCannonAudioEntity *)dword_A7C68C);
  if ( CWaterCannons::aCannons[0] )
    CWaterCannon::Update_OncePerFrame((CWaterCannon *)CWaterCannons::aCannons, 0);
  CAEWaterCannonAudioEntity::Service((CAEWaterCannonAudioEntity *)dword_A7CA58);
  if ( dword_A7C72C )
    CWaterCannon::Update_OncePerFrame((CWaterCannon *)&dword_A7C72C, 1);
  CAEWaterCannonAudioEntity::Service((CAEWaterCannonAudioEntity *)dword_A7CE24);
  result = dword_A7CAF8;
  if ( dword_A7CAF8 )
    return CWaterCannon::Update_OncePerFrame((CWaterCannon *)&dword_A7CAF8, 2);
  return result;
}


// ============================================================

// Address: 0x5cbb5c
// Original: _ZN13CWaterCannons6RenderEv
// Demangled: CWaterCannons::Render(void)
int __fastcall CWaterCannons::Render(CWaterCannons *this)
{
  int result; // r0

  if ( CWaterCannons::aCannons[0] )
    CWaterCannon::Render((CWaterCannon *)CWaterCannons::aCannons);
  if ( dword_A7C72C )
    CWaterCannon::Render((CWaterCannon *)&dword_A7C72C);
  result = dword_A7CAF8;
  if ( dword_A7CAF8 )
    return CWaterCannon::Render((CWaterCannon *)&dword_A7CAF8);
  return result;
}


// ============================================================
