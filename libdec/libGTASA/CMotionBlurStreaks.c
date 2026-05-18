
// Address: 0x1982d0
// Original: j__ZN18CMotionBlurStreaks6RenderEv
// Demangled: CMotionBlurStreaks::Render(void)
// attributes: thunk
int __fastcall CMotionBlurStreaks::Render(CMotionBlurStreaks *this)
{
  return _ZN18CMotionBlurStreaks6RenderEv(this);
}


// ============================================================

// Address: 0x19a5e4
// Original: j__ZN18CMotionBlurStreaks14RegisterStreakEjhhhh7CVectorS0_
// Demangled: CMotionBlurStreaks::RegisterStreak(uint,uchar,uchar,uchar,uchar,CVector,CVector)
// attributes: thunk
int CMotionBlurStreaks::RegisterStreak()
{
  return _ZN18CMotionBlurStreaks14RegisterStreakEjhhhh7CVectorS0_();
}


// ============================================================

// Address: 0x19c55c
// Original: j__ZN18CMotionBlurStreaks6UpdateEv
// Demangled: CMotionBlurStreaks::Update(void)
// attributes: thunk
int __fastcall CMotionBlurStreaks::Update(CMotionBlurStreaks *this)
{
  return _ZN18CMotionBlurStreaks6UpdateEv(this);
}


// ============================================================

// Address: 0x5bfad4
// Original: _ZN18CMotionBlurStreaks4InitEv
// Demangled: CMotionBlurStreaks::Init(void)
int *__fastcall CMotionBlurStreaks::Init(CMotionBlurStreaks *this)
{
  int *result; // r0

  result = &CMotionBlurStreaks::aStreaks;
  dword_A56654 = 0;
  CMotionBlurStreaks::aStreaks = 0;
  dword_A566A8 = 0;
  dword_A566FC = 0;
  return result;
}


// ============================================================

// Address: 0x5c0250
// Original: _ZN18CMotionBlurStreaks14RegisterStreakEjhhhh7CVectorS0_
// Demangled: CMotionBlurStreaks::RegisterStreak(uint,uchar,uchar,uchar,uchar,CVector,CVector)
int *__fastcall CMotionBlurStreaks::RegisterStreak(
        int *result,
        char a2,
        char a3,
        char a4,
        char a5,
        arg6_5C0250 a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // r12
  int v11; // lr
  int v12; // r5
  __int16 v13; // r0
  __int16 v14; // r4
  int *v15; // r12
  int *v16; // r6

  v11 = a10;
  v10 = a9;
  v12 = a8;
  if ( (int *)CMotionBlurStreaks::aStreaks[0] == result )
  {
    v13 = 0;
LABEL_10:
    result = &CMotionBlurStreaks::aStreaks[21 * v13];
    *((_BYTE *)result + 5) = a3;
    *((_BYTE *)result + 4) = a2;
    *((_BYTE *)result + 6) = a4;
    *((_BYTE *)result + 7) = a5;
    *((arg6_5C0250 *)result + 1) = a6;
    result[4] = a7;
    result[11] = v12;
    result[12] = v10;
    result[13] = v11;
    *((_BYTE *)result + 80) = 1;
    return result;
  }
  if ( (int *)dword_A56654 == result )
  {
    v13 = 1;
    goto LABEL_10;
  }
  if ( (int *)dword_A566A8 == result )
  {
    v13 = 2;
LABEL_9:
    v10 = a9;
    v12 = a8;
    goto LABEL_10;
  }
  if ( (int *)dword_A566FC == result )
  {
    v13 = 3;
    v11 = a10;
    goto LABEL_9;
  }
  if ( CMotionBlurStreaks::aStreaks[0] )
  {
    if ( dword_A56654 )
    {
      if ( dword_A566A8 )
      {
        if ( dword_A566FC )
          return result;
        v14 = 3;
        v15 = &dword_A566FC;
      }
      else
      {
        v14 = 2;
        v15 = &dword_A566A8;
      }
    }
    else
    {
      v14 = 1;
      v15 = &dword_A56654;
    }
  }
  else
  {
    v14 = 0;
    v15 = CMotionBlurStreaks::aStreaks;
  }
  *v15 = (int)result;
  v16 = &CMotionBlurStreaks::aStreaks[21 * v14];
  *((_BYTE *)v16 + 5) = a3;
  *((_BYTE *)v16 + 4) = a2;
  *((_BYTE *)v16 + 6) = a4;
  *((_BYTE *)v16 + 7) = a5;
  *((arg6_5C0250 *)v16 + 1) = a6;
  v16[4] = a7;
  v16[11] = a8;
  v16[12] = a9;
  v16[13] = a10;
  result = &stderr + 1;
  *(_WORD *)((char *)v16 + 81) = 0;
  *((_BYTE *)v16 + 80) = 1;
  return result;
}


// ============================================================

// Address: 0x5c045c
// Original: _ZN18CMotionBlurStreaks6UpdateEv
// Demangled: CMotionBlurStreaks::Update(void)
int __fastcall CMotionBlurStreaks::Update(CMotionBlurStreaks *this)
{
  int v1; // r3
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int result; // r0
  int v8; // r3
  int v9; // r2

  if ( CMotionBlurStreaks::aStreaks[0] )
  {
    v1 = (unsigned __int8)byte_A56651;
    dword_A56628 = dword_A5661C;
    dword_A5664C = dword_A56640;
    byte_A56652 = byte_A56651;
    dword_A5661C = dword_A56610;
    unk_A56620 = unk_A56614;
    unk_A56644 = *(_QWORD *)algn_A56638;
    unk_A56614 = *(_QWORD *)&algn_A56604[4];
    dword_A56640 = dword_A56634;
    *(_QWORD *)algn_A56638 = unk_A5662C;
    v2 = (unsigned __int8)byte_A56650;
    byte_A56651 = byte_A56650;
    byte_A56650 = 0;
    if ( !((v2 | v1) << 24) )
      CMotionBlurStreaks::aStreaks[0] = 0;
  }
  if ( dword_A56654 )
  {
    v3 = (unsigned __int8)byte_A566A5;
    dword_A5667C = dword_A56670;
    dword_A566A0 = dword_A56694;
    byte_A566A6 = byte_A566A5;
    dword_A56670 = dword_A56664;
    unk_A56674 = *(_QWORD *)algn_A56668;
    *(_QWORD *)algn_A56698 = unk_A5668C;
    *(_QWORD *)algn_A56668 = unk_A5665C;
    v4 = (unsigned __int8)byte_A566A4;
    unk_A5668C = unk_A56680;
    dword_A56694 = dword_A56688;
    byte_A566A5 = byte_A566A4;
    byte_A566A4 = 0;
    if ( !((v4 | v3) << 24) )
      dword_A56654 = 0;
  }
  if ( dword_A566A8 )
  {
    v5 = (unsigned __int8)byte_A566F9;
    dword_A566D0 = dword_A566C4;
    dword_A566F4 = dword_A566E8;
    byte_A566FA = byte_A566F9;
    dword_A566C4 = dword_A566B8;
    *(_QWORD *)algn_A566C8 = unk_A566BC;
    unk_A566EC = unk_A566E0;
    unk_A566BC = unk_A566B0;
    v6 = (unsigned __int8)byte_A566F8;
    unk_A566E0 = unk_A566D4;
    dword_A566E8 = dword_A566DC;
    byte_A566F9 = byte_A566F8;
    byte_A566F8 = 0;
    if ( !((v6 | v5) << 24) )
      dword_A566A8 = 0;
  }
  result = dword_A566FC;
  if ( dword_A566FC )
  {
    v8 = (unsigned __int8)byte_A5674D;
    dword_A56724 = dword_A56718;
    dword_A56748 = dword_A5673C;
    byte_A5674E = byte_A5674D;
    dword_A56718 = dword_A5670C;
    unk_A5671C = unk_A56710;
    unk_A56740 = unk_A56734;
    unk_A56710 = unk_A56704;
    v9 = (unsigned __int8)byte_A5674C;
    unk_A56734 = *(_QWORD *)algn_A56728;
    dword_A5673C = dword_A56730;
    result = 0;
    byte_A5674D = byte_A5674C;
    byte_A5674C = 0;
    if ( !((v9 | v8) << 24) )
      dword_A566FC = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5c0b58
// Original: _ZN18CMotionBlurStreaks6RenderEv
// Demangled: CMotionBlurStreaks::Render(void)
int __fastcall CMotionBlurStreaks::Render(CMotionBlurStreaks *this)
{
  int v1; // r5
  int v2; // r0
  int result; // r0

  v1 = 0;
  v2 = 0;
  do
  {
    if ( CMotionBlurStreaks::aStreaks[v1] )
    {
      if ( !(v2 << 31) )
      {
        RwRenderStateSet(8, 0);
        RwRenderStateSet(12, 1);
        RwRenderStateSet(14, 1);
        RwRenderStateSet(
          15,
          (WORD1(qword_966574) << 16) | (WORD2(qword_966574) << 8) | HIWORD(qword_966574) | 0xFF000000);
        RwRenderStateSet(10, 5);
        RwRenderStateSet(11, 6);
        RwRenderStateSet(1, 0);
      }
      CRegisteredMotionBlurStreak::Render((CRegisteredMotionBlurStreak *)&CMotionBlurStreaks::aStreaks[v1]);
      v2 = 1;
    }
    v1 += 21;
  }
  while ( v1 != 84 );
  result = v2 << 31;
  if ( result )
  {
    RwRenderStateSet(8, 1);
    return sub_192888();
  }
  return result;
}


// ============================================================
