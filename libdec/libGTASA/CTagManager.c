
// Address: 0x18c5e0
// Original: j__ZN11CTagManager4SaveEv
// Demangled: CTagManager::Save(void)
// attributes: thunk
int __fastcall CTagManager::Save(CTagManager *this)
{
  return _ZN11CTagManager4SaveEv(this);
}


// ============================================================

// Address: 0x18cfc4
// Original: j__ZN11CTagManager8GetAlphaEP7CEntity
// Demangled: CTagManager::GetAlpha(CEntity *)
// attributes: thunk
int __fastcall CTagManager::GetAlpha(CTagManager *this, CEntity *a2)
{
  return _ZN11CTagManager8GetAlphaEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x190890
// Original: j__ZN11CTagManager4LoadEv
// Demangled: CTagManager::Load(void)
// attributes: thunk
int __fastcall CTagManager::Load(CTagManager *this)
{
  return _ZN11CTagManager4LoadEv(this);
}


// ============================================================

// Address: 0x192ec0
// Original: j__ZN11CTagManager8SetAlphaEP7CEntityh
// Demangled: CTagManager::SetAlpha(CEntity *,uchar)
// attributes: thunk
int __fastcall CTagManager::SetAlpha(CTagManager *this, CEntity *a2, unsigned __int8 a3)
{
  return _ZN11CTagManager8SetAlphaEP7CEntityh(this, a2, a3);
}


// ============================================================

// Address: 0x195988
// Original: j__ZN11CTagManager15UpdateNumTaggedEv
// Demangled: CTagManager::UpdateNumTagged(void)
// attributes: thunk
int __fastcall CTagManager::UpdateNumTagged(CTagManager *this)
{
  return _ZN11CTagManager15UpdateNumTaggedEv(this);
}


// ============================================================

// Address: 0x195c8c
// Original: j__ZN11CTagManager18ShutdownForRestartEv
// Demangled: CTagManager::ShutdownForRestart(void)
// attributes: thunk
int __fastcall CTagManager::ShutdownForRestart(CTagManager *this)
{
  return _ZN11CTagManager18ShutdownForRestartEv(this);
}


// ============================================================

// Address: 0x1972c8
// Original: j__ZN11CTagManager5IsTagEPK7CEntity
// Demangled: CTagManager::IsTag(CEntity const*)
// attributes: thunk
int __fastcall CTagManager::IsTag(CTagManager *this, const CEntity *a2)
{
  return _ZN11CTagManager5IsTagEPK7CEntity(this, a2);
}


// ============================================================

// Address: 0x198430
// Original: j__ZN11CTagManager25GetPercentageTaggedInAreaER5CRect
// Demangled: CTagManager::GetPercentageTaggedInArea(CRect &)
// attributes: thunk
int CTagManager::GetPercentageTaggedInArea()
{
  return _ZN11CTagManager25GetPercentageTaggedInAreaER5CRect();
}


// ============================================================

// Address: 0x19a238
// Original: j__ZN11CTagManager10ResetAlphaEP7CEntity
// Demangled: CTagManager::ResetAlpha(CEntity *)
// attributes: thunk
int __fastcall CTagManager::ResetAlpha(CTagManager *this, CEntity *a2)
{
  return _ZN11CTagManager10ResetAlphaEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x19b71c
// Original: j__ZN11CTagManager6AddTagEP7CEntity
// Demangled: CTagManager::AddTag(CEntity *)
// attributes: thunk
int __fastcall CTagManager::AddTag(CTagManager *this, CEntity *a2)
{
  return _ZN11CTagManager6AddTagEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x19bf5c
// Original: j__ZN11CTagManager19GetPercentageTaggedEv
// Demangled: CTagManager::GetPercentageTagged(void)
// attributes: thunk
int __fastcall CTagManager::GetPercentageTagged(CTagManager *this)
{
  return _ZN11CTagManager19GetPercentageTaggedEv(this);
}


// ============================================================

// Address: 0x19c708
// Original: j__ZN11CTagManager4InitEv
// Demangled: CTagManager::Init(void)
// attributes: thunk
int __fastcall CTagManager::Init(CTagManager *this)
{
  return _ZN11CTagManager4InitEv(this);
}


// ============================================================

// Address: 0x19d9f8
// Original: j__ZN11CTagManager14SetAlphaInAreaER5CRecth
// Demangled: CTagManager::SetAlphaInArea(CRect &,uchar)
// attributes: thunk
int CTagManager::SetAlphaInArea()
{
  return _ZN11CTagManager14SetAlphaInAreaER5CRecth();
}


// ============================================================

// Address: 0x19de50
// Original: j__ZN11CTagManager11SetupAtomicEP8RpAtomic
// Demangled: CTagManager::SetupAtomic(RpAtomic *)
// attributes: thunk
int CTagManager::SetupAtomic()
{
  return _ZN11CTagManager11SetupAtomicEP8RpAtomic();
}


// ============================================================

// Address: 0x1a0160
// Original: j__ZN11CTagManager13GetNearestTagERK7CVector
// Demangled: CTagManager::GetNearestTag(CVector const&)
// attributes: thunk
int __fastcall CTagManager::GetNearestTag(CTagManager *this, const CVector *a2)
{
  return _ZN11CTagManager13GetNearestTagERK7CVector(this, a2);
}


// ============================================================

// Address: 0x1a0c14
// Original: j__ZN11CTagManager14RenderTagForPCEP8RpAtomic
// Demangled: CTagManager::RenderTagForPC(RpAtomic *)
// attributes: thunk
int CTagManager::RenderTagForPC(void)
{
  return _ZN11CTagManager14RenderTagForPCEP8RpAtomic();
}


// ============================================================

// Address: 0x361d58
// Original: _ZN11CTagManager4InitEv
// Demangled: CTagManager::Init(void)
int *__fastcall CTagManager::Init(CTagManager *this)
{
  int *result; // r0

  result = &CTagManager::ms_numTagged;
  CTagManager::ms_numTagged = 0;
  CTagManager::ms_numTags = 0;
  return result;
}


// ============================================================

// Address: 0x361d74
// Original: _ZN11CTagManager18ShutdownForRestartEv
// Demangled: CTagManager::ShutdownForRestart(void)
int *__fastcall CTagManager::ShutdownForRestart(CTagManager *this)
{
  int i; // r0
  char *v2; // r3
  int *result; // r0

  for ( i = CTagManager::ms_numTags; i; *(v2 - 4) = 0 )
    v2 = (char *)&CTagManager::ms_tagDesc + 8 * i--;
  result = &CTagManager::ms_numTagged;
  CTagManager::ms_numTagged = 0;
  return result;
}


// ============================================================

// Address: 0x361dac
// Original: _ZN11CTagManager9GetTagPosEi
// Demangled: CTagManager::GetTagPos(int)
int __fastcall CTagManager::GetTagPos(CTagManager *this, int a2)
{
  int v2; // r1
  int v3; // r2
  int result; // r0

  v2 = CTagManager::ms_tagDesc[2 * (_DWORD)this];
  v3 = *(_DWORD *)(v2 + 20);
  result = v3 + 48;
  if ( !v3 )
    return v2 + 4;
  return result;
}


// ============================================================

// Address: 0x361dc8
// Original: _ZN11CTagManager6AddTagEP7CEntity
// Demangled: CTagManager::AddTag(CEntity *)
int __fastcall CTagManager::AddTag(CTagManager *this, CEntity *a2)
{
  int v2; // r3
  int result; // r0

  v2 = CTagManager::ms_numTags;
  CTagManager::ms_tagDesc[2 * CTagManager::ms_numTags] = this;
  LOBYTE(CTagManager::ms_tagDesc[2 * v2 + 1]) = 0;
  result = v2 + 1;
  CTagManager::ms_numTags = v2 + 1;
  return result;
}


// ============================================================

// Address: 0x361df0
// Original: _ZN11CTagManager11FindTagDescEP7CEntity
// Demangled: CTagManager::FindTagDesc(CEntity *)
_DWORD *__fastcall CTagManager::FindTagDesc(CTagManager *this, CEntity *a2)
{
  int v3; // r2
  _DWORD *result; // r0
  CTagManager *v5; // t1

  v3 = CTagManager::ms_numTags;
  result = &CTagManager::ms_tagDesc[2 * CTagManager::ms_numTags];
  while ( v3 )
  {
    v5 = (CTagManager *)*(result - 2);
    result -= 2;
    --v3;
    if ( v5 == this )
      return result;
  }
  return 0;
}


// ============================================================

// Address: 0x361e24
// Original: _ZN11CTagManager5IsTagEPK7CEntity
// Demangled: CTagManager::IsTag(CEntity const*)
bool __fastcall CTagManager::IsTag(CTagManager *this, const CEntity *a2)
{
  float v2; // r5
  int v3; // r4

  v2 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  if ( (*(int (__fastcall **)(float))(*(_DWORD *)LODWORD(v2) + 40))(COERCE_FLOAT(LODWORD(v2))) != 1 )
    return 0;
  v3 = 0;
  if ( (*(_WORD *)(LODWORD(v2) + 40) & 0x7800) == 0x3000 )
    return *(__int16 *)((*(int (__fastcall **)(float))(*(_DWORD *)LODWORD(v2) + 8))(COERCE_FLOAT(LODWORD(v2))) + 40) > -1;
  return v3;
}


// ============================================================

// Address: 0x361e74
// Original: _ZN11CTagManager8SetAlphaEP7CEntityh
// Demangled: CTagManager::SetAlpha(CEntity *,uchar)
unsigned int __fastcall CTagManager::SetAlpha(CTagManager *this, CEntity *a2, unsigned __int8 a3, int a4, __int16 a5)
{
  int v7; // r0
  int v8; // r4
  _DWORD *v9; // r1
  int v10; // r0
  CTagManager *v11; // t1
  unsigned int v12; // r2
  int v13; // r1
  unsigned int result; // r0
  _DWORD *v15; // r6
  char *v16; // r0
  unsigned __int16 v17; // r3
  int v18; // r1
  _DWORD *v19; // r0

  v7 = *((_DWORD *)this + 6);
  if ( v7 )
    CVisibilityPlugins::SetUserValue(v7, a2, a3);
  v8 = CTagManager::ms_numTags;
  v9 = &CTagManager::ms_tagDesc[2 * CTagManager::ms_numTags];
  v10 = CTagManager::ms_numTags;
  do
  {
    if ( !v10 )
    {
      v9 = 0;
      if ( (unsigned int)a2 >= 0xE5 )
        goto LABEL_7;
      goto LABEL_17;
    }
    v11 = (CTagManager *)*(v9 - 2);
    v9 -= 2;
    --v10;
  }
  while ( v11 != this );
  if ( (unsigned int)a2 >= 0xE5 )
  {
LABEL_7:
    v12 = *((unsigned __int8 *)v9 + 4);
    *((_BYTE *)v9 + 4) = (_BYTE)a2;
    v13 = 0;
    result = (unsigned int)&CTagManager::ms_numTagged;
    CTagManager::ms_numTagged = 0;
    if ( v8 )
    {
      v13 = 0;
      result = v8;
      do
      {
        v15 = &CTagManager::ms_tagDesc[2 * result--];
        if ( *((unsigned __int8 *)v15 - 4) >= 0xE5u )
          CTagManager::ms_numTagged = ++v13;
      }
      while ( result );
    }
    if ( v12 <= 0xE4 )
    {
      result = (unsigned __int8)byte_951FE3;
      if ( !byte_951FE3 )
      {
        if ( v13 == v8 )
        {
          v16 = "TAG_ALL";
          v13 = -1;
          v17 = -1;
        }
        else
        {
          v13 = (__int16)v13;
          v17 = v8;
          v16 = "TAG_ONE";
        }
        return sub_19BFAC((CGarages *)v16, (char *)v13, 5000, v17, a5);
      }
    }
    return result;
  }
LABEL_17:
  *((_BYTE *)v9 + 4) = (_BYTE)a2;
  result = (unsigned int)&CTagManager::ms_numTagged;
  CTagManager::ms_numTagged = 0;
  if ( v8 )
  {
    v18 = 0;
    do
    {
      v19 = &CTagManager::ms_tagDesc[2 * v8--];
      result = *((unsigned __int8 *)v19 - 4);
      if ( result >= 0xE5 )
        CTagManager::ms_numTagged = ++v18;
    }
    while ( v8 );
  }
  return result;
}


// ============================================================

// Address: 0x361f9c
// Original: _ZN11CTagManager8SetAlphaEP8RpAtomich
// Demangled: CTagManager::SetAlpha(RpAtomic *,uchar)
// attributes: thunk
int CTagManager::SetAlpha()
{
  return j_CVisibilityPlugins::SetUserValue();
}


// ============================================================

// Address: 0x361fa0
// Original: _ZN11CTagManager15UpdateNumTaggedEv
// Demangled: CTagManager::UpdateNumTagged(void)
int __fastcall CTagManager::UpdateNumTagged(CTagManager *this)
{
  int result; // r0
  int v2; // r1
  _DWORD *v3; // r3

  result = CTagManager::ms_numTags;
  CTagManager::ms_numTagged = 0;
  if ( CTagManager::ms_numTags )
  {
    v2 = 0;
    do
    {
      v3 = &CTagManager::ms_tagDesc[2 * result--];
      if ( *((unsigned __int8 *)v3 - 4) >= 0xE5u )
        CTagManager::ms_numTagged = ++v2;
    }
    while ( result );
  }
  return result;
}


// ============================================================

// Address: 0x361ff4
// Original: _ZN11CTagManager8GetAlphaEP7CEntity
// Demangled: CTagManager::GetAlpha(CEntity *)
int __fastcall CTagManager::GetAlpha(CTagManager *this, CEntity *a2)
{
  unsigned __int8 *v3; // r1
  CTagManager *v4; // r2

  if ( *((_DWORD *)this + 6) )
    return (unsigned __int8)CVisibilityPlugins::GetUserValue();
  v3 = (unsigned __int8 *)&CTagManager::ms_tagDesc[2 * CTagManager::ms_numTags + 1];
  do
  {
    v4 = (CTagManager *)*((_DWORD *)v3 - 3);
    v3 -= 8;
  }
  while ( v4 != this );
  return *v3;
}


// ============================================================

// Address: 0x362038
// Original: _ZN11CTagManager8GetAlphaEP8RpAtomic
// Demangled: CTagManager::GetAlpha(RpAtomic *)
int CTagManager::GetAlpha()
{
  return (unsigned __int8)CVisibilityPlugins::GetUserValue();
}


// ============================================================

// Address: 0x362044
// Original: _ZN11CTagManager10ResetAlphaEP7CEntity
// Demangled: CTagManager::ResetAlpha(CEntity *)
int __fastcall CTagManager::ResetAlpha(CTagManager *this, CEntity *a2)
{
  int result; // r0
  _DWORD *v4; // r2
  CTagManager *v5; // r3

  result = *((_DWORD *)this + 6);
  if ( result )
  {
    v4 = &CTagManager::ms_tagDesc[2 * CTagManager::ms_numTags + 1];
    do
    {
      v5 = (CTagManager *)*(v4 - 3);
      v4 -= 2;
    }
    while ( v5 != this );
    return j_CVisibilityPlugins::SetUserValue();
  }
  return result;
}


// ============================================================

// Address: 0x36207c
// Original: _ZN11CTagManager14SetAlphaInAreaER5CRecth
// Demangled: CTagManager::SetAlphaInArea(CRect &,uchar)
int *__fastcall CTagManager::SetAlphaInArea(float *a1, int a2)
{
  int v4; // r6
  _BYTE *v5; // r4
  int v6; // r0
  int v7; // r2
  float *v8; // r1
  float v9; // s0
  int v10; // r0
  int *result; // r0
  int v12; // r1
  _DWORD *v13; // r6

  v4 = CTagManager::ms_numTags;
  if ( CTagManager::ms_numTags )
  {
    v5 = &CTagManager::ms_tagDesc[2 * CTagManager::ms_numTags - 1];
    do
    {
      v6 = *((_DWORD *)v5 - 1);
      --v4;
      v7 = *(_DWORD *)(v6 + 20);
      v8 = (float *)(v7 + 48);
      if ( !v7 )
        v8 = (float *)(v6 + 4);
      if ( *v8 >= *a1 && *v8 <= a1[2] )
      {
        v9 = v8[1];
        if ( v9 >= a1[3] && v9 <= a1[1] )
        {
          v10 = *(_DWORD *)(v6 + 24);
          if ( v10 )
            CVisibilityPlugins::SetUserValue(v10, a2, v7);
          *v5 = a2;
        }
      }
      v5 -= 8;
    }
    while ( v4 );
    result = (int *)CTagManager::ms_numTags;
    CTagManager::ms_numTagged = 0;
    if ( CTagManager::ms_numTags )
    {
      v12 = 0;
      do
      {
        v13 = &CTagManager::ms_tagDesc[2 * (_DWORD)result];
        result = (int *)((char *)result - 1);
        if ( *((unsigned __int8 *)v13 - 4) >= 0xE5u )
          CTagManager::ms_numTagged = ++v12;
      }
      while ( result );
    }
  }
  else
  {
    result = &CTagManager::ms_numTagged;
    CTagManager::ms_numTagged = 0;
  }
  return result;
}


// ============================================================

// Address: 0x362174
// Original: _ZN11CTagManager25GetPercentageTaggedInAreaER5CRect
// Demangled: CTagManager::GetPercentageTaggedInArea(CRect &)
int __fastcall CTagManager::GetPercentageTaggedInArea(float *a1)
{
  int v1; // r1
  float v2; // s0
  int v3; // lr
  float v4; // s2
  float v5; // s4
  float v6; // s6
  int v7; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r5
  float *v11; // r4
  float v12; // s8

  v1 = CTagManager::ms_numTags;
  if ( CTagManager::ms_numTags )
  {
    v2 = *a1;
    v3 = 0;
    v4 = a1[1];
    v5 = a1[2];
    v6 = a1[3];
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = v1;
        v9 = CTagManager::ms_tagDesc[2 * v1 - 2];
        v10 = *(_DWORD *)(v9 + 20);
        v11 = (float *)(v10 + 48);
        if ( !v10 )
          v11 = (float *)(v9 + 4);
        v1 = v8 - 1;
        if ( *v11 >= v2 && *v11 <= v5 )
        {
          v12 = v11[1];
          if ( v12 >= v6 && v12 <= v4 )
            break;
        }
        if ( v8 == 1 )
          return (int)(float)((float)((float)v3 / (float)v7) * 100.0);
      }
      ++v7;
      if ( LOBYTE(CTagManager::ms_tagDesc[2 * v8 - 1]) > 0xE4u )
        ++v3;
    }
    while ( v8 != 1 );
  }
  else
  {
    v7 = 0;
    v3 = 0;
  }
  return (int)(float)((float)((float)v3 / (float)v7) * 100.0);
}


// ============================================================

// Address: 0x36224c
// Original: _ZN11CTagManager19GetPercentageTaggedEv
// Demangled: CTagManager::GetPercentageTagged(void)
int __fastcall CTagManager::GetPercentageTagged(CTagManager *this)
{
  return (int)(float)((float)((float)(unsigned int)CTagManager::ms_numTagged
                            / (float)(unsigned int)CTagManager::ms_numTags)
                    * 100.0);
}


// ============================================================

// Address: 0x36228c
// Original: _ZN11CTagManager13GetNearestTagERK7CVector
// Demangled: CTagManager::GetNearestTag(CVector const&)
int __fastcall CTagManager::GetNearestTag(unsigned __int64 *a1)
{
  float32x2_t v1; // d0
  int v2; // r1
  int v3; // lr
  float32x2_t v4; // d16
  int v5; // r3
  float32x2_t *v6; // r2
  float32x2_t *v7; // r0
  float32x2_t v8; // d17
  float32x2_t v9; // d1
  bool v10; // nf

  if ( CTagManager::ms_numTags )
  {
    v2 = CTagManager::ms_numTags - 1;
    v1.n64_u32[0] = 2139095039;
    v3 = -1;
    v4.n64_u64[0] = *a1;
    do
    {
      v5 = CTagManager::ms_tagDesc[2 * v2];
      v6 = *(float32x2_t **)(v5 + 20);
      v7 = v6 + 6;
      if ( !v6 )
        v7 = (float32x2_t *)(v5 + 4);
      v8.n64_u64[0] = vsub_f32(v4, (float32x2_t)v7->n64_u64[0]).n64_u64[0];
      v9.n64_u64[0] = vmul_f32(v8, v8).n64_u64[0];
      v9.n64_f32[0] = v9.n64_f32[0] + v9.n64_f32[1];
      v10 = v9.n64_f32[0] < v1.n64_f32[0];
      v1.n64_u64[0] = vmin_f32(v9, v1).n64_u64[0];
      if ( v10 )
        v3 = v2;
      --v2;
    }
    while ( v2 != -1 );
  }
  else
  {
    v3 = -1;
  }
  return CTagManager::ms_tagDesc[2 * v3];
}


// ============================================================

// Address: 0x36230c
// Original: _ZN11CTagManager11SetupAtomicEP8RpAtomic
// Demangled: CTagManager::SetupAtomic(RpAtomic *)
int __fastcall CTagManager::SetupAtomic(int a1)
{
  int v1; // r1

  v1 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 32) + 4) + 8) = 0;
  *(_DWORD *)(v1 + 8) |= 0x40u;
  return j_CVisibilityPlugins::SetUserValue();
}


// ============================================================

// Address: 0x362324
// Original: _ZN11CTagManager14RenderTagForPCEP8RpAtomic
// Demangled: CTagManager::RenderTagForPC(RpAtomic *)
int __fastcall CTagManager::RenderTagForPC(int a1)
{
  int v2; // r5
  int v3; // r8
  int UserValue; // r6

  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 32) + 4);
  v3 = *(_DWORD *)(v2 + 4);
  UserValue = (unsigned __int8)CVisibilityPlugins::GetUserValue();
  *(_DWORD *)(v2 + 4) = ((2155905153u * (unsigned __int64)(unsigned int)(CVisibilityPlugins::GetUserValue() * UserValue)) >> 32 << 17) & 0xFF000000 | v3 & 0xFFFFFF;
  return (*(int (__fastcall **)(int))(a1 + 72))(a1);
}


// ============================================================

// Address: 0x48e2d4
// Original: _ZN11CTagManager4SaveEv
// Demangled: CTagManager::Save(void)
int __fastcall CTagManager::Save(CTagManager *this)
{
  CGenericGameStorage *v1; // r4
  int v2; // r2
  int v3; // r2
  unsigned int v4; // r5
  CGenericGameStorage *v5; // r4

  v1 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v1 = CTagManager::ms_numTags;
  CGenericGameStorage::_SaveDataToWorkBuffer(v1, byte_4, v2);
  free(v1);
  if ( CTagManager::ms_numTags )
  {
    v4 = 0;
    v5 = (CGenericGameStorage *)&CTagManager::ms_tagDesc[1];
    do
    {
      CGenericGameStorage::_SaveDataToWorkBuffer(v5, (char *)&stderr + 1, v3);
      ++v4;
      v5 = (CGenericGameStorage *)((char *)v5 + 8);
    }
    while ( v4 < CTagManager::ms_numTags );
  }
  return 1;
}


// ============================================================

// Address: 0x48e338
// Original: _ZN11CTagManager4LoadEv
// Demangled: CTagManager::Load(void)
int __fastcall CTagManager::Load(CTagManager *this, int a2, int a3)
{
  int v3; // r2
  unsigned int v4; // r5
  CGenericGameStorage *v5; // r4

  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&CTagManager::ms_numTags, byte_4, a3);
  if ( CTagManager::ms_numTags )
  {
    v4 = 0;
    v5 = (CGenericGameStorage *)&CTagManager::ms_tagDesc[1];
    do
    {
      CGenericGameStorage::_LoadDataFromWorkBuffer(v5, (char *)&stderr + 1, v3);
      ++v4;
      v5 = (CGenericGameStorage *)((char *)v5 + 8);
    }
    while ( v4 < CTagManager::ms_numTags );
  }
  return 1;
}


// ============================================================
