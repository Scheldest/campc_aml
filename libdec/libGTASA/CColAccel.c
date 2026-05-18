
// Address: 0x18b344
// Original: j__ZN9CColAccel15cacheIPLSectionEPP7CEntityi
// Demangled: CColAccel::cacheIPLSection(CEntity **,int)
// attributes: thunk
int __fastcall CColAccel::cacheIPLSection(CColAccel *this, CEntity **a2, int a3)
{
  return _ZN9CColAccel15cacheIPLSectionEPP7CEntityi(this, a2, a3);
}


// ============================================================

// Address: 0x18f748
// Original: j__ZN9CColAccel14isCacheLoadingEv
// Demangled: CColAccel::isCacheLoading(void)
// attributes: thunk
int __fastcall CColAccel::isCacheLoading(CColAccel *this)
{
  return _ZN9CColAccel14isCacheLoadingEv(this);
}


// ============================================================

// Address: 0x1926b4
// Original: j__ZN9CColAccel10startCacheEv
// Demangled: CColAccel::startCache(void)
// attributes: thunk
int __fastcall CColAccel::startCache(CColAccel *this)
{
  return _ZN9CColAccel10startCacheEv(this);
}


// ============================================================

// Address: 0x1937f4
// Original: j__ZN9CColAccel11addCacheColEiRK9CColModel
// Demangled: CColAccel::addCacheCol(int,CColModel const&)
// attributes: thunk
int __fastcall CColAccel::addCacheCol(CColAccel *this, int a2, const CColModel *a3)
{
  return _ZN9CColAccel11addCacheColEiRK9CColModel(this, a2, a3);
}


// ============================================================

// Address: 0x1944f4
// Original: j__ZN9CColAccel8endCacheEv
// Demangled: CColAccel::endCache(void)
// attributes: thunk
int __fastcall CColAccel::endCache(CColAccel *this)
{
  return _ZN9CColAccel8endCacheEv(this);
}


// ============================================================

// Address: 0x199504
// Original: j__ZN9CColAccel9getIplDefEi
// Demangled: CColAccel::getIplDef(int)
// attributes: thunk
int __fastcall CColAccel::getIplDef(CColAccel *this, int a2)
{
  return _ZN9CColAccel9getIplDefEi(this, a2);
}


// ============================================================

// Address: 0x1998f8
// Original: j__ZN9CColAccel9addColDefE6ColDef
// Demangled: CColAccel::addColDef(ColDef)
// attributes: thunk
int __fastcall CColAccel::addColDef(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int16 a9,
        int a10,
        int a11)
{
  return _ZN9CColAccel9addColDefE6ColDef(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ============================================================

// Address: 0x19a8ec
// Original: j__ZN9CColAccel12cacheLoadColEv
// Demangled: CColAccel::cacheLoadCol(void)
// attributes: thunk
int __fastcall CColAccel::cacheLoadCol(CColAccel *this)
{
  return _ZN9CColAccel12cacheLoadColEv(this);
}


// ============================================================

// Address: 0x19ced0
// Original: j__ZN9CColAccel9setIplDefEi6IplDef
// Demangled: CColAccel::setIplDef(int,IplDef)
// attributes: thunk
int __fastcall CColAccel::setIplDef(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  return _ZN9CColAccel9setIplDefEi6IplDef(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}


// ============================================================

// Address: 0x19fc38
// Original: j__ZN9CColAccel9getColDefER6ColDef
// Demangled: CColAccel::getColDef(ColDef &)
// attributes: thunk
int CColAccel::getColDef()
{
  return _ZN9CColAccel9getColDefER6ColDef();
}


// ============================================================

// Address: 0x1a0abc
// Original: j__ZN9CColAccel12addIPLEntityEPP7CEntityii
// Demangled: CColAccel::addIPLEntity(CEntity **,int,int)
// attributes: thunk
int __fastcall CColAccel::addIPLEntity(CColAccel *this, CEntity **a2, int a3, int a4)
{
  return _ZN9CColAccel12addIPLEntityEPP7CEntityii(this, a2, a3, a4);
}


// ============================================================

// Address: 0x465f50
// Original: _ZN9CColAccel10startCacheEv
// Demangled: CColAccel::startCache(void)
int *__fastcall CColAccel::startCache(CColAccel *this)
{
  int v1; // r0
  int i; // r1
  _QWORD *v3; // r2
  int v4; // r0
  int j; // r1
  _QWORD *v6; // r2
  AndroidFile *v7; // r4
  int v8; // r6
  __int64 v9; // r0
  CBoundingBox *v10; // r0
  CBoundingBox *v11; // r5
  int v12; // r6
  int v13; // r0
  size_t v14; // r2
  int v15; // r6
  __int64 v16; // r0
  CBoundingBox *v17; // r0
  int v18; // r5
  int v19; // r6
  int v20; // r0
  unsigned int v21; // r0
  int v22; // r2
  int *result; // r0
  int v24; // r0
  size_t v25; // r6
  bool v26; // zf
  unsigned int v27; // r0
  unsigned int v28; // r1

  CColAccel::m_iCachingColSize = *(_DWORD *)(CPools::ms_pColModelPool + 8);
  CColAccel::m_iSectionSize = operator new[](0x100u);
  v1 = operator new[](0x3400u);
  for ( i = 0; i != 13312; i += 52 )
  {
    v3 = (_QWORD *)(v1 + i);
    *v3 = 0xC974240049742400LL;
    v3[1] = 0x49742400C9742400LL;
  }
  CColAccel::m_iplDefs = v1;
  v4 = operator new[](0x1800u);
  for ( j = 0; j != 6144; j += 24 )
  {
    v6 = (_QWORD *)(v4 + j);
    *v6 = 0xC974240049742400LL;
    v6[1] = 0x49742400C9742400LL;
  }
  CColAccel::m_colBounds = v4;
  v7 = (AndroidFile *)CFileMgr::OpenFile(
                        (CFileMgr *)CColAccel::mp_cCacheName,
                        (const char *)&dword_4661D8,
                        CColAccel::mp_cCacheName);
  if ( v7 && bDontBuildPaths )
  {
    OS_FileRead(v7, &CColAccel::m_iNumColItems, 4u);
    v8 = CColAccel::m_iNumColItems;
    v9 = 48LL * (unsigned int)CColAccel::m_iNumColItems;
    if ( !is_mul_ok(0x30u, CColAccel::m_iNumColItems) )
      HIDWORD(v9) = 1;
    if ( HIDWORD(v9) )
      LODWORD(v9) = -1;
    v10 = (CBoundingBox *)operator new[](v9);
    v11 = v10;
    if ( v8 )
    {
      v12 = 48 * v8;
      do
      {
        CBoundingBox::CBoundingBox(v10);
        v12 -= 48;
        v10 = (CBoundingBox *)(v13 + 48);
      }
      while ( v12 );
      v14 = 48 * CColAccel::m_iNumColItems;
    }
    else
    {
      v14 = 0;
    }
    CColAccel::mp_caccColItems = (int)v11;
    OS_FileRead(v7, v11, v14);
    OS_FileRead(v7, &CColAccel::m_iNumSections, 4u);
    OS_FileRead(v7, (void *)CColAccel::m_iSectionSize, 4 * CColAccel::m_iNumSections);
    OS_FileRead(v7, (void *)CColAccel::m_iplDefs, 0x3400u);
    OS_FileRead(v7, &CColAccel::m_iNumColBounds, 4u);
    OS_FileRead(v7, (void *)CColAccel::m_colBounds, 24 * CColAccel::m_iNumColBounds);
    OS_FileRead(v7, &CColAccel::m_iNumIPLItems, 4u);
    v24 = (20 * (unsigned __int64)(unsigned int)CColAccel::m_iNumIPLItems) >> 32;
    v25 = 20 * CColAccel::m_iNumIPLItems;
    if ( !is_mul_ok(0x14u, CColAccel::m_iNumIPLItems) )
      v24 = 1;
    v26 = v24 == 0;
    v27 = 20 * CColAccel::m_iNumIPLItems;
    if ( !v26 )
      v27 = -1;
    CColAccel::mp_caccIPLItems = operator new[](v27);
    OS_FileRead(v7, (void *)CColAccel::mp_caccIPLItems, v25);
    CColAccel::m_iNumSections = 0;
    CColAccel::m_iNumIPLItems = 0;
    CColAccel::m_iNumColBounds = 0;
    CFileMgr::CloseFile(v7, v28);
    result = &CColAccel::m_iCacheState;
    CColAccel::m_iCacheState = 2;
  }
  else
  {
    v15 = CColAccel::m_iCachingColSize;
    v16 = 48LL * (unsigned int)CColAccel::m_iCachingColSize;
    if ( !is_mul_ok(0x30u, CColAccel::m_iCachingColSize) )
      HIDWORD(v16) = 1;
    if ( HIDWORD(v16) )
      LODWORD(v16) = -1;
    v17 = (CBoundingBox *)operator new[](v16);
    v18 = (int)v17;
    if ( v15 )
    {
      v19 = 48 * v15;
      do
      {
        CBoundingBox::CBoundingBox(v17);
        v19 -= 48;
        v17 = (CBoundingBox *)(v20 + 48);
      }
      while ( v19 );
    }
    CColAccel::mp_caccColItems = v18;
    v22 = (20 * (unsigned __int64)(unsigned int)CColAccel::m_iCachingIPLSize) >> 32;
    v21 = 20 * CColAccel::m_iCachingIPLSize;
    if ( !is_mul_ok(0x14u, CColAccel::m_iCachingIPLSize) )
      v22 = 1;
    if ( v22 )
      v21 = -1;
    CColAccel::mp_caccIPLItems = operator new[](v21);
    CColAccel::m_iNumIPLItems = 0;
    result = &stderr + 1;
    CColAccel::m_iCacheState = 1;
    if ( v7 )
      return (int *)j_CFileMgr::CloseFile(v7, (unsigned int)&CColAccel::mp_caccIPLItems);
  }
  return result;
}


// ============================================================

// Address: 0x466224
// Original: _ZN9CColAccel14isCacheLoadingEv
// Demangled: CColAccel::isCacheLoading(void)
bool __fastcall CColAccel::isCacheLoading(CColAccel *this)
{
  return CColAccel::m_iCacheState == 2;
}


// ============================================================

// Address: 0x46623c
// Original: _ZN9CColAccel8endCacheEv
// Demangled: CColAccel::endCache(void)
int *__fastcall CColAccel::endCache(CColAccel *this, const char *a2)
{
  CFileMgr *v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3
  unsigned int v12; // r1
  int *result; // r0

  if ( CColAccel::m_iCacheState == 1 )
  {
    v2 = (CFileMgr *)CFileMgr::OpenFileForWriting((CFileMgr *)CColAccel::mp_cCacheName, a2);
    CFileMgr::Write(v2, (unsigned int)&CColAccel::m_iNumColItems, byte_4, v3);
    CFileMgr::Write(v2, CColAccel::mp_caccColItems, (char *)(48 * CColAccel::m_iNumColItems), v4);
    CFileMgr::Write(v2, (unsigned int)&CColAccel::m_iNumSections, byte_4, v5);
    CFileMgr::Write(v2, CColAccel::m_iSectionSize, (char *)(4 * CColAccel::m_iNumSections), v6);
    CFileMgr::Write(v2, CColAccel::m_iplDefs, (char *)&elf_hash_bucket[3265], v7);
    CFileMgr::Write(v2, (unsigned int)&CColAccel::m_iNumColBounds, byte_4, v8);
    CFileMgr::Write(v2, CColAccel::m_colBounds, (char *)(24 * CColAccel::m_iNumColBounds), v9);
    CFileMgr::Write(v2, (unsigned int)&CColAccel::m_iNumIPLItems, byte_4, v10);
    CFileMgr::Write(v2, CColAccel::mp_caccIPLItems, (char *)(20 * CColAccel::m_iNumIPLItems), v11);
    CFileMgr::CloseFile(v2, v12);
  }
  if ( CColAccel::mp_caccIPLItems )
  {
    operator delete[]((void *)CColAccel::mp_caccIPLItems);
    CColAccel::mp_caccIPLItems = 0;
  }
  if ( CColAccel::mp_caccColItems )
  {
    operator delete[]((void *)CColAccel::mp_caccColItems);
    CColAccel::mp_caccColItems = 0;
  }
  if ( CColAccel::m_iSectionSize )
    operator delete[]((void *)CColAccel::m_iSectionSize);
  CColAccel::m_iSectionSize = 0;
  if ( CColAccel::m_iplDefs )
    operator delete[]((void *)CColAccel::m_iplDefs);
  CColAccel::m_iplDefs = 0;
  if ( CColAccel::m_colBounds )
    operator delete[]((void *)CColAccel::m_colBounds);
  result = &CColAccel::m_iCacheState;
  CColAccel::m_iCacheState = 0;
  CColAccel::m_colBounds = 0;
  return result;
}


// ============================================================

// Address: 0x4663e4
// Original: _ZN9CColAccel11addCacheColEiRK9CColModel
// Demangled: CColAccel::addCacheCol(int,CColModel const&)
int __fastcall CColAccel::addCacheCol(int this, __int64 *a2, const CColModel *a3)
{
  int v3; // lr
  int v4; // r2
  __int64 v5; // d16
  __int64 v6; // d17
  __int64 v7; // d20
  __int64 v8; // d21
  __int16 v9; // r0

  if ( CColAccel::m_iCacheState == 1 )
  {
    v3 = CColAccel::m_iNumColItems;
    v4 = CColAccel::mp_caccColItems + 48 * CColAccel::m_iNumColItems;
    *(_DWORD *)(v4 + 40) = this;
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    v8 = a2[3];
    *(_QWORD *)(v4 + 32) = a2[4];
    *(_QWORD *)v4 = v5;
    *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)(v4 + 16) = v7;
    *(_QWORD *)(v4 + 24) = v8;
    v9 = *((unsigned __int8 *)a2 + 40);
    *(_BYTE *)(v4 + 44) = v9;
    *(_WORD *)(v4 + 44) = v9 | ((*((_BYTE *)a2 + 41) & 1) << 8);
    this = v3 + 1;
    CColAccel::m_iNumColItems = v3 + 1;
  }
  return this;
}


// ============================================================

// Address: 0x466460
// Original: _ZN9CColAccel12cacheLoadColEv
// Demangled: CColAccel::cacheLoadCol(void)
int __fastcall CColAccel::cacheLoadCol(CColAccel *this, unsigned int a2)
{
  int result; // r0
  int v3; // r6
  int v4; // r4
  CBaseModelInfo *v5; // r11
  int v6; // r5
  int v7; // r0
  __int64 v8; // d16
  __int64 v9; // d17
  __int64 v10; // d20
  __int64 v11; // d21
  char v12; // r2
  int v13; // r2

  result = CColAccel::m_iCacheState;
  if ( CColAccel::m_iCacheState == 2 )
  {
    result = CColAccel::m_iNumColItems;
    if ( CColAccel::m_iNumColItems >= 1 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*(_DWORD *)(CColAccel::mp_caccColItems + v3 + 40)]);
        v6 = CColModel::operator new((CColModel *)&word_30, a2);
        CColModel::CColModel((CColModel *)v6);
        v7 = CColAccel::mp_caccColItems + v3;
        v8 = *(_QWORD *)(CColAccel::mp_caccColItems + v3);
        v9 = *(_QWORD *)(CColAccel::mp_caccColItems + v3 + 8);
        v10 = *(_QWORD *)(CColAccel::mp_caccColItems + v3 + 16);
        v11 = *(_QWORD *)(CColAccel::mp_caccColItems + v3 + 24);
        *(_QWORD *)(v6 + 32) = *(_QWORD *)(CColAccel::mp_caccColItems + v3 + 32);
        *(_QWORD *)v6 = v8;
        *(_QWORD *)(v6 + 8) = v9;
        *(_QWORD *)(v6 + 16) = v10;
        *(_QWORD *)(v6 + 24) = v11;
        v12 = *(_BYTE *)(v6 + 41);
        *(_BYTE *)(v6 + 40) = *(_BYTE *)(v7 + 44);
        *(_BYTE *)(v6 + 41) = *(_BYTE *)(v7 + 45) & 1 | v12 & 0xFE;
        CBaseModelInfo::SetColModel(v5, (CColModel *)v6, 1);
        CColStore::IncludeModelIndex(
          (CColStore *)*(unsigned __int8 *)(CColAccel::mp_caccColItems + v3 + 44),
          *(_DWORD *)(CColAccel::mp_caccColItems + v3 + 40),
          v13);
        result = CColAccel::m_iNumColItems;
        ++v4;
        v3 += 48;
      }
      while ( v4 < CColAccel::m_iNumColItems );
    }
  }
  return result;
}


// ============================================================

// Address: 0x466538
// Original: _ZN9CColAccel9addColDefE6ColDef
// Demangled: CColAccel::addColDef(ColDef)
int __fastcall CColAccel::addColDef(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int16 a10,
        int a11)
{
  int v11; // r5
  int v12; // r4
  _DWORD *v13; // r0
  int result; // r0
  int v15; // r5

  v11 = CColAccel::m_colBounds;
  v12 = 3 * CColAccel::m_iNumColBounds;
  *(_DWORD *)(CColAccel::m_colBounds + 24 * CColAccel::m_iNumColBounds) = a1;
  v13 = (_DWORD *)(v11 + 8 * v12 + 4);
  *v13 = a2;
  v13[1] = a3;
  v13[2] = a4;
  result = CColAccel::m_iNumColBounds + 1;
  v15 = CColAccel::m_colBounds + 24 * CColAccel::m_iNumColBounds;
  *(_WORD *)(v15 + 18) = a10;
  *(_WORD *)(v15 + 16) = HIWORD(a9);
  *(_BYTE *)(v15 + 20) = BYTE2(a11) & 1;
  *(_BYTE *)(v15 + 21) = HIBYTE(a11) & 1;
  CColAccel::m_iNumColBounds = result;
  return result;
}


// ============================================================

// Address: 0x4665a0
// Original: _ZN9CColAccel9getColDefER6ColDef
// Demangled: CColAccel::getColDef(ColDef &)
int __fastcall CColAccel::getColDef(int a1)
{
  int v1; // r3
  int v2; // r1
  char v3; // lr
  int *v4; // r2
  __int64 v5; // d16
  __int64 v6; // d17
  int v7; // r2
  int result; // r0

  v1 = CColAccel::m_iNumColBounds;
  v2 = CColAccel::m_colBounds + 24 * CColAccel::m_iNumColBounds;
  v3 = *(_BYTE *)(v2 + 20);
  v5 = *(_QWORD *)v2;
  v6 = *(_QWORD *)(v2 + 8);
  v4 = (int *)(v2 + 16);
  LOBYTE(v2) = *(_BYTE *)(v2 + 21);
  v7 = *v4;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 34) = v7;
  *(_BYTE *)(a1 + 42) = v3 & 1;
  *(_BYTE *)(a1 + 43) = v2 & 1;
  result = v1 + 1;
  CColAccel::m_iNumColBounds = v1 + 1;
  return result;
}


// ============================================================

// Address: 0x4665f8
// Original: _ZN9CColAccel9setIplDefEi6IplDef
// Demangled: CColAccel::setIplDef(int,IplDef)
int __fastcall CColAccel::setIplDef(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        __int16 a12)
{
  int result; // r0

  result = CColAccel::m_iplDefs + 52 * a1;
  *(_DWORD *)result = a2;
  *(_QWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 12) = a4;
  *(_DWORD *)(result + 16) = a5;
  *(_DWORD *)(result + 24) = a7;
  *(_DWORD *)(result + 20) = a6;
  *(_QWORD *)(result + 28) = a8;
  *(_DWORD *)(result + 36) = a9;
  *(_DWORD *)(result + 40) = a10;
  *(_DWORD *)(result + 44) = a11;
  *(_WORD *)(result + 48) = a12;
  return result;
}


// ============================================================

// Address: 0x46665c
// Original: _ZN9CColAccel9getIplDefEi
// Demangled: CColAccel::getIplDef(int)
_QWORD *__fastcall CColAccel::getIplDef(CColAccel *this, int a2)
{
  int v2; // r1
  __int64 v3; // d16
  __int64 v4; // d17
  __int64 v5; // d18
  __int64 v6; // d19
  __int64 v7; // d20
  __int64 v8; // d21
  _QWORD *result; // r0

  v2 = CColAccel::m_iplDefs + 52 * a2;
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v2 + 40);
  v7 = *(_QWORD *)(v2 + 16);
  v8 = *(_QWORD *)(v2 + 24);
  *((_DWORD *)this + 12) = *(_DWORD *)(v2 + 48);
  *((_QWORD *)this + 4) = v5;
  *((_QWORD *)this + 5) = v6;
  *(_QWORD *)this = v3;
  *((_QWORD *)this + 1) = v4;
  result = (_QWORD *)((char *)this + 16);
  *result = v7;
  result[1] = v8;
  return result;
}


// ============================================================

// Address: 0x466698
// Original: _ZN9CColAccel15cacheIPLSectionEPP7CEntityi
// Demangled: CColAccel::cacheIPLSection(CEntity **,int)
int __fastcall CColAccel::cacheIPLSection(CColAccel *this, CEntity **a2, int a3)
{
  int result; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r4
  int v8; // r4
  float v9; // r6
  _DWORD *v10; // r5
  int *v11; // r3
  __int64 v12; // r0
  CBaseModelInfo *v13; // r5
  float v14; // r4

  result = CColAccel::m_iCacheState;
  if ( CColAccel::m_iCacheState == 1 )
  {
    *(_DWORD *)(CColAccel::m_iSectionSize + 4 * CColAccel::m_iNumSections) = CColAccel::m_iNumIPLItems;
    v4 = CColAccel::m_iNumSections;
  }
  else
  {
    if ( CColAccel::m_iCacheState != 2 )
      return result;
    v4 = CColAccel::m_iNumSections;
    v5 = CColAccel::m_iSectionSize;
    v6 = CColAccel::m_iNumIPLItems;
    if ( CColAccel::m_iNumIPLItems < *(_DWORD *)(CColAccel::m_iSectionSize + 4 * CColAccel::m_iNumSections) )
    {
      do
      {
        v10 = (_DWORD *)(CColAccel::mp_caccIPLItems + 20 * v6);
        v11 = v10 + 4;
        LOBYTE(v8) = v10[4];
        if ( (v10[4] & 1) != 0 )
        {
          v7 = *((_DWORD *)this + v10[1]);
          *(_DWORD *)(v7 + 28) |= 0x100000u;
          v8 = *v11;
          if ( (*v11 & 8) != 0 )
            goto LABEL_6;
        }
        else if ( (v10[4] & 8) != 0 )
        {
LABEL_6:
          v9 = CModelInfo::ms_modelInfoPtrs[v10[2]];
          *(_WORD *)(LODWORD(v9) + 40) |= 0x20u;
          v8 = *v11;
          if ( (*v11 & 4) != 0 )
            goto LABEL_7;
          goto LABEL_12;
        }
        if ( (v8 & 4) != 0 )
        {
LABEL_7:
          *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v10[2]]) + 48) = 1137180672;
          if ( (*v11 & 2) == 0 )
            goto LABEL_14;
LABEL_13:
          v12 = *((_QWORD *)v10 + 1);
          v13 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[HIDWORD(v12)]);
          v14 = CModelInfo::ms_modelInfoPtrs[(_DWORD)v12];
          CBaseModelInfo::DeleteCollisionModel(v13);
          CBaseModelInfo::SetColModel(v13, *(CColModel **)(LODWORD(v14) + 44), 0);
          v4 = CColAccel::m_iNumSections;
          v5 = CColAccel::m_iSectionSize;
          v6 = CColAccel::m_iNumIPLItems;
          goto LABEL_14;
        }
LABEL_12:
        if ( (v8 & 2) != 0 )
          goto LABEL_13;
LABEL_14:
        CColAccel::m_iNumIPLItems = ++v6;
      }
      while ( v6 < *(_DWORD *)(v5 + 4 * v4) );
    }
  }
  result = v4 + 1;
  CColAccel::m_iNumSections = result;
  return result;
}


// ============================================================

// Address: 0x466828
// Original: _ZN9CColAccel12addIPLEntityEPP7CEntityii
// Demangled: CColAccel::addIPLEntity(CEntity **,int,int)
int *__fastcall CColAccel::addIPLEntity(int *this, CEntity **a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // lr
  int v8; // r12
  int v9; // r8
  float v10; // r1
  int *v11; // r1
  int v12; // r1
  int v13; // r3
  _DWORD *v14; // r1

  if ( CColAccel::m_iCacheState == 1 )
  {
    v5 = this[a3];
    v6 = *(_DWORD *)(v5 + 52);
    v7 = *(__int16 *)(v5 + 38);
    v8 = *(__int16 *)(v6 + 38);
    if ( *(_BYTE *)(v5 + 59)
      || (v4 = (int)&TheCamera, (float)(*(float *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v7]) + 48) * unk_952094) > 300.0) )
    {
      v9 = 8;
      if ( !v6 )
        goto LABEL_18;
    }
    else
    {
      v9 = 0;
      if ( !v6 )
        goto LABEL_18;
    }
    if ( (int)a2 < 1 )
    {
LABEL_9:
      v4 = -1;
    }
    else
    {
      v4 = 0;
      while ( this[v4] != v6 )
      {
        if ( ++v4 >= (int)a2 )
          goto LABEL_9;
      }
    }
    this = (int *)CModelInfo::ms_modelInfoPtrs;
    v10 = CModelInfo::ms_modelInfoPtrs[v7];
    if ( *(_BYTE *)(v6 + 59) == 1 )
    {
      v11 = *(int **)(LODWORD(v10) + 44);
      v9 |= (*(_DWORD *)(v5 + 28) >> 20) & 1;
      if ( v11 )
      {
        this = *(int **)(LODWORD(CModelInfo::ms_modelInfoPtrs[v8]) + 44);
        if ( !this || this != v11 )
        {
          v9 |= 2u;
LABEL_19:
          this = &CColAccel::m_iNumIPLItems;
          v12 = CColAccel::mp_caccIPLItems;
          v13 = 5 * CColAccel::m_iNumIPLItems;
          *(_DWORD *)(CColAccel::mp_caccIPLItems + 20 * CColAccel::m_iNumIPLItems) = a3;
          v14 = (_DWORD *)(v12 + 4 * v13);
          v14[1] = v4;
          v14[2] = v7;
          v14[3] = v8;
          v14[4] = v9;
          ++CColAccel::m_iNumIPLItems;
          return this;
        }
      }
    }
    else
    {
      this = (int *)(*(unsigned __int8 *)(LODWORD(v10) + 40) << 26);
      if ( (*(_BYTE *)(LODWORD(v10) + 40) & 0x20) != 0 )
      {
        v9 |= 4u;
        goto LABEL_19;
      }
    }
LABEL_18:
    if ( !v9 )
      return this;
    goto LABEL_19;
  }
  return this;
}


// ============================================================
