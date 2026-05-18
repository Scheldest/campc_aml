
// Address: 0x18e6b0
// Original: j__ZN9CColModelnwEj
// Demangled: CColModel::operator new(uint)
// attributes: thunk
int __fastcall CColModel::operator new(CColModel *this, unsigned int a2)
{
  return _ZN9CColModelnwEj(this, a2);
}


// ============================================================

// Address: 0x18eb54
// Original: j__ZN9CColModel12AllocateDataEv
// Demangled: CColModel::AllocateData(void)
// attributes: thunk
int __fastcall CColModel::AllocateData(CColModel *this)
{
  return _ZN9CColModel12AllocateDataEv(this);
}


// ============================================================

// Address: 0x1943b4
// Original: j__ZN9CColModel12AllocateDataEiiiiib
// Demangled: CColModel::AllocateData(int,int,int,int,int,bool)
// attributes: thunk
int __fastcall CColModel::AllocateData(CColModel *this, int a2, int a3, int a4, int a5, int a6, bool a7)
{
  return _ZN9CColModel12AllocateDataEiiiiib(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x195050
// Original: j__ZN9CColModel22RemoveCollisionVolumesEv
// Demangled: CColModel::RemoveCollisionVolumes(void)
// attributes: thunk
int __fastcall CColModel::RemoveCollisionVolumes(CColModel *this)
{
  return _ZN9CColModel22RemoveCollisionVolumesEv(this);
}


// ============================================================

// Address: 0x197cf4
// Original: j__ZN9CColModel17MakeMultipleAllocEv
// Demangled: CColModel::MakeMultipleAlloc(void)
// attributes: thunk
int __fastcall CColModel::MakeMultipleAlloc(CColModel *this)
{
  return _ZN9CColModel17MakeMultipleAllocEv(this);
}


// ============================================================

// Address: 0x19ae7c
// Original: j__ZN9CColModelC2Ev
// Demangled: CColModel::CColModel(void)
// attributes: thunk
void __fastcall CColModel::CColModel(CColModel *this)
{
  _ZN9CColModelC2Ev(this);
}


// ============================================================

// Address: 0x19b328
// Original: j__ZN9CColModelD2Ev
// Demangled: CColModel::~CColModel()
// attributes: thunk
void __fastcall CColModel::~CColModel(CColModel *this)
{
  _ZN9CColModelD2Ev(this);
}


// ============================================================

// Address: 0x19d730
// Original: j__ZN9CColModelaSERKS_
// Demangled: CColModel::operator=(CColModel const&)
// attributes: thunk
int CColModel::operator=()
{
  return _ZN9CColModelaSERKS_();
}


// ============================================================

// Address: 0x19ead8
// Original: j__ZN9CColModeldlEPv
// Demangled: CColModel::operator delete(void *)
// attributes: thunk
void __fastcall CColModel::operator delete(void *a1)
{
  _ZN9CColModeldlEPv(a1);
}


// ============================================================

// Address: 0x2e1720
// Original: _ZN9CColModelC2Ev
// Demangled: CColModel::CColModel(void)
void __fastcall CColModel::CColModel(CColModel *this)
{
  char v1; // r1

  *(_QWORD *)this = 0x3F8000003F800000LL;
  *((_QWORD *)this + 1) = 0xBF8000003F800000LL;
  *((_DWORD *)this + 4) = -1082130432;
  *((_DWORD *)this + 5) = -1082130432;
  v1 = *((_BYTE *)this + 41);
  *((_DWORD *)this + 11) = 0;
  *((_BYTE *)this + 40) = 0;
  *((_BYTE *)this + 41) = v1 & 0xF8;
}


// ============================================================

// Address: 0x2e1760
// Original: _ZN9CColModelD2Ev
// Demangled: CColModel::~CColModel()
void __fastcall CColModel::~CColModel(CColModel *this)
{
  void **v2; // r0
  int v3; // r1
  CCollisionData *v4; // r1
  void *v5; // r0
  void *v6; // r1

  v2 = (void **)*((_DWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((unsigned __int8 *)this + 41);
    if ( (v3 & 4) != 0 )
    {
      if ( v2[5] )
      {
        free(v2[5]);
        v2 = (void **)*((_DWORD *)this + 11);
      }
      if ( v2[6] )
      {
        free(v2[6]);
        v2 = (void **)*((_DWORD *)this + 11);
      }
      if ( v2[10] )
      {
        free(v2[10]);
        v2 = (void **)*((_DWORD *)this + 11);
      }
      if ( v2[11] )
      {
        free(v2[11]);
        v2 = (void **)*((_DWORD *)this + 11);
      }
      v3 = *((_BYTE *)this + 41) & 0xFB;
      *((_BYTE *)this + 41) = v3;
    }
    v4 = (CCollisionData *)(v3 << 30);
    if ( (int)v4 < 0 )
    {
      CCollision::RemoveTrianglePlanes((CCollision *)v2, v4);
      CMemoryMgr::Free(*((void **)this + 11), v6);
    }
    else
    {
      CCollisionData::RemoveCollisionVolumes((CCollisionData *)v2);
      v5 = (void *)*((_DWORD *)this + 11);
      if ( v5 )
        operator delete(v5);
    }
  }
}


// ============================================================

// Address: 0x2e17d4
// Original: _ZN9CColModel17MakeMultipleAllocEv
// Demangled: CColModel::MakeMultipleAlloc(void)
int __fastcall CColModel::MakeMultipleAlloc(const CCollisionData **this)
{
  int result; // r0
  CCollisionData *v3; // r5
  const CCollisionData *v4; // r1
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  char v9; // r0

  result = *((unsigned __int8 *)this + 41) << 30;
  if ( result < 0 )
  {
    v3 = (CCollisionData *)operator new(0x34u);
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    CCollisionData::Copy(v3, this[11]);
    if ( (*((_BYTE *)this + 41) & 4) != 0 )
    {
      v4 = this[11];
      v5 = (void *)*((_DWORD *)v4 + 5);
      if ( v5 )
      {
        free(v5);
        v4 = this[11];
      }
      v6 = (void *)*((_DWORD *)v4 + 6);
      if ( v6 )
      {
        free(v6);
        v4 = this[11];
      }
      v7 = (void *)*((_DWORD *)v4 + 10);
      if ( v7 )
      {
        free(v7);
        v4 = this[11];
      }
      v8 = (void *)*((_DWORD *)v4 + 11);
      if ( v8 )
        free(v8);
      *((_BYTE *)this + 41) &= ~4u;
    }
    CMemoryMgr::Free(this[11], v4);
    v9 = *((_BYTE *)this + 41);
    this[11] = v3;
    result = v9 & 0xF9;
    *((_BYTE *)this + 41) = result;
  }
  return result;
}


// ============================================================

// Address: 0x2e1860
// Original: _ZN9CColModelnwEj
// Demangled: CColModel::operator new(uint)
int __fastcall CColModel::operator new(CColModel *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pColModelPool;
  result = *(_DWORD *)(CPools::ms_pColModelPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pColModelPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + 48 * v3[3];
}


// ============================================================

// Address: 0x2e18c4
// Original: _ZN9CColModeldlEPv
// Demangled: CColModel::operator delete(void *)
void __fastcall CColModel::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pColModelPool;
  v2 = -1431655765 * ((a1 - *(_DWORD *)CPools::ms_pColModelPool) >> 4);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pColModelPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x2e18f4
// Original: _ZN9CColModelaSERKS_
// Demangled: CColModel::operator=(CColModel const&)
int __fastcall CColModel::operator=(int a1, int a2)
{
  __int64 v3; // d17
  _QWORD *v4; // r0
  __int64 v5; // d17
  __int64 v6; // d18
  CCollisionData *v7; // r0

  v3 = *(_QWORD *)(a2 + 32);
  v4 = (_QWORD *)(a1 + 24);
  *v4 = *(_QWORD *)(a2 + 24);
  v4[1] = v3;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(CCollisionData **)(a1 + 44);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 16) = v6;
  if ( v7 )
    CCollisionData::Copy(v7, *(const CCollisionData **)(a2 + 44));
  return a1;
}


// ============================================================

// Address: 0x2e192e
// Original: _ZN9CColModel12AllocateDataEv
// Demangled: CColModel::AllocateData(void)
_QWORD *__fastcall CColModel::AllocateData(CColModel *this)
{
  _QWORD *result; // r0

  *((_BYTE *)this + 41) &= 0xF9u;
  result = (_QWORD *)operator new(0x34u);
  result[4] = 0LL;
  result[5] = 0LL;
  *result = 0LL;
  result[1] = 0LL;
  result[2] = 0LL;
  result[3] = 0LL;
  *((_DWORD *)this + 11) = result;
  return result;
}


// ============================================================

// Address: 0x2e1960
// Original: _ZN9CColModel12AllocateDataEiiiiib
// Demangled: CColModel::AllocateData(int,int,int,int,int,bool)
int __fastcall CColModel::AllocateData(CColModel *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int16 v8; // r10
  int v11; // r11
  int v12; // r9
  unsigned int v13; // r5
  unsigned int v14; // r1
  _WORD *v15; // r0
  int v16; // r0
  char v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int result; // r0
  int v22; // [sp+0h] [bp-28h]
  int v23; // [sp+4h] [bp-24h]

  v8 = a2;
  *((_BYTE *)this + 41) = *((_BYTE *)this + 41) & 0xF9 | 2;
  v11 = a6;
  v12 = 32 * a4;
  v13 = 20 * a2 + 52;
  v23 = 7 * a3;
  v14 = 32 * a4;
  v22 = 9 * a4;
  if ( a7 )
    v14 = 36 * a4;
  v15 = CMemoryMgr::Malloc(v13 + 28 * a3 + 12 * a5 + 16 * a6 + v14, v14);
  *((_DWORD *)this + 11) = v15;
  *v15 = v8;
  *(_BYTE *)(*((_DWORD *)this + 11) + 6) = a4;
  *(_WORD *)(*((_DWORD *)this + 11) + 2) = a3;
  *(_WORD *)(*((_DWORD *)this + 11) + 4) = a6;
  *(_DWORD *)(*((_DWORD *)this + 11) + 8) = *((_DWORD *)this + 11) + 52;
  v16 = *((_DWORD *)this + 11);
  if ( a4 )
  {
    *(_DWORD *)(v16 + 16) = v16 + v13;
    v17 = a7;
    if ( a7 == 1 )
      v13 += 4 * v22;
    else
      v13 += v12;
  }
  else
  {
    v17 = a7;
    *(_DWORD *)(v16 + 16) = 0;
  }
  v18 = *((_DWORD *)this + 11);
  if ( a3 )
  {
    *(_DWORD *)(v18 + 12) = v18 + v13;
    v13 += 4 * v23;
  }
  else
  {
    *(_DWORD *)(v18 + 12) = 0;
  }
  v19 = *((_DWORD *)this + 11);
  if ( a5 )
  {
    *(_DWORD *)(v19 + 20) = v19 + v13;
    v13 = (((12 * a5) | 3) + v13) & 0xFFFFFFFC;
  }
  else
  {
    *(_DWORD *)(v19 + 20) = 0;
  }
  v20 = *((_DWORD *)this + 11);
  if ( a6 )
    v11 = v20 + v13;
  *(_DWORD *)(v20 + 24) = v11;
  *(_DWORD *)(*((_DWORD *)this + 11) + 28) = 0;
  result = *((_DWORD *)this + 11);
  *(_BYTE *)(result + 7) = *(_BYTE *)(result + 7) & 0xFE | v17;
  return result;
}


// ============================================================

// Address: 0x2e1a68
// Original: _ZN9CColModel12AllocateDataEi
// Demangled: CColModel::AllocateData(int)
void *__fastcall CColModel::AllocateData(CColModel *this, size_t byte_count)
{
  void *result; // r0

  *((_BYTE *)this + 41) = *((_BYTE *)this + 41) & 0xF9 | 2;
  result = CMemoryMgr::Malloc(byte_count, byte_count);
  *((_DWORD *)this + 11) = result;
  return result;
}


// ============================================================

// Address: 0x2e1a88
// Original: _ZN9CColModel22RemoveCollisionVolumesEv
// Demangled: CColModel::RemoveCollisionVolumes(void)
void **__fastcall CColModel::RemoveCollisionVolumes(CColModel *this)
{
  void **result; // r0
  int v3; // r1
  CCollisionData *v4; // r1
  void *v5; // r0
  void *v6; // r1

  result = (void **)*((_DWORD *)this + 11);
  if ( result )
  {
    v3 = *((unsigned __int8 *)this + 41);
    if ( (v3 & 4) != 0 )
    {
      if ( result[5] )
      {
        free(result[5]);
        result = (void **)*((_DWORD *)this + 11);
      }
      if ( result[6] )
      {
        free(result[6]);
        result = (void **)*((_DWORD *)this + 11);
      }
      if ( result[10] )
      {
        free(result[10]);
        result = (void **)*((_DWORD *)this + 11);
      }
      if ( result[11] )
      {
        free(result[11]);
        result = (void **)*((_DWORD *)this + 11);
      }
      v3 = *((_BYTE *)this + 41) & 0xFB;
      *((_BYTE *)this + 41) = v3;
    }
    v4 = (CCollisionData *)(v3 << 30);
    if ( (int)v4 < 0 )
    {
      CCollision::RemoveTrianglePlanes((CCollision *)result, v4);
      CMemoryMgr::Free(*((void **)this + 11), v6);
    }
    else
    {
      CCollisionData::RemoveCollisionVolumes((CCollisionData *)result);
      v5 = (void *)*((_DWORD *)this + 11);
      if ( v5 )
        operator delete(v5);
    }
    result = 0;
    *((_DWORD *)this + 11) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2e1b00
// Original: _ZN9CColModel23CalculateTrianglePlanesEv
// Demangled: CColModel::CalculateTrianglePlanes(void)
int __fastcall CColModel::CalculateTrianglePlanes(int this)
{
  int v1; // r8
  int v2; // r1
  int v3; // r5
  int v4; // r6
  int v5; // r4

  v1 = *(_DWORD *)(this + 44);
  if ( v1 )
  {
    this = (int)CMemoryMgr::Malloc(20 * *(__int16 *)(v1 + 4) + 20, 0x14u);
    v2 = *(__int16 *)(v1 + 4);
    *(_DWORD *)(v1 + 28) = this;
    if ( v2 >= 1 )
    {
      CColTrianglePlane::Set();
      this = *(__int16 *)(v1 + 4);
      if ( this >= 2 )
      {
        v3 = 1;
        v4 = 20;
        v5 = 16;
        do
        {
          CColTrianglePlane::Set();
          this = *(__int16 *)(v1 + 4);
          ++v3;
          v5 += 16;
          v4 += 20;
        }
        while ( v3 < this );
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x2e1b6a
// Original: _ZN9CColModel20RemoveTrianglePlanesEv
// Demangled: CColModel::RemoveTrianglePlanes(void)
int __fastcall CColModel::RemoveTrianglePlanes(int this, void *a2)
{
  int v2; // r4
  void *v3; // r0

  v2 = *(_DWORD *)(this + 44);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 28);
    if ( v3 )
      CMemoryMgr::Free(v3, a2);
    this = 0;
    *(_DWORD *)(v2 + 28) = 0;
  }
  return this;
}


// ============================================================
