
// Address: 0x18ed50
// Original: j__ZN22CRealTimeShadowManager20ReturnRealTimeShadowEP15CRealTimeShadow
// Demangled: CRealTimeShadowManager::ReturnRealTimeShadow(CRealTimeShadow *)
// attributes: thunk
int __fastcall CRealTimeShadowManager::ReturnRealTimeShadow(CRealTimeShadowManager *this, CRealTimeShadow *a2)
{
  return _ZN22CRealTimeShadowManager20ReturnRealTimeShadowEP15CRealTimeShadow(this, a2);
}


// ============================================================

// Address: 0x190d20
// Original: j__ZN22CRealTimeShadowManager17DoShadowThisFrameEP9CPhysical
// Demangled: CRealTimeShadowManager::DoShadowThisFrame(CPhysical *)
// attributes: thunk
int __fastcall CRealTimeShadowManager::DoShadowThisFrame(CRealTimeShadowManager *this, CPhysical *a2)
{
  return _ZN22CRealTimeShadowManager17DoShadowThisFrameEP9CPhysical(this, a2);
}


// ============================================================

// Address: 0x197098
// Original: j__ZN22CRealTimeShadowManager4InitEv
// Demangled: CRealTimeShadowManager::Init(void)
// attributes: thunk
int __fastcall CRealTimeShadowManager::Init(CRealTimeShadowManager *this)
{
  return _ZN22CRealTimeShadowManager4InitEv(this);
}


// ============================================================

// Address: 0x199464
// Original: j__ZN22CRealTimeShadowManager4ExitEv
// Demangled: CRealTimeShadowManager::Exit(void)
// attributes: thunk
int __fastcall CRealTimeShadowManager::Exit(CRealTimeShadowManager *this)
{
  return _ZN22CRealTimeShadowManager4ExitEv(this);
}


// ============================================================

// Address: 0x19dcb8
// Original: j__ZN22CRealTimeShadowManager6UpdateEv
// Demangled: CRealTimeShadowManager::Update(void)
// attributes: thunk
int __fastcall CRealTimeShadowManager::Update(CRealTimeShadowManager *this)
{
  return _ZN22CRealTimeShadowManager6UpdateEv(this);
}


// ============================================================

// Address: 0x5b81e4
// Original: _ZN22CRealTimeShadowManagerC2Ev
// Demangled: CRealTimeShadowManager::CRealTimeShadowManager(void)
void __fastcall CRealTimeShadowManager::CRealTimeShadowManager(CRealTimeShadowManager *this)
{
  *(_BYTE *)this = 0;
  memset((char *)this + 4, 0, 0xA1u);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
}


// ============================================================

// Address: 0x5b8206
// Original: _ZN22CRealTimeShadowManagerD2Ev
// Demangled: CRealTimeShadowManager::~CRealTimeShadowManager()
void __fastcall CRealTimeShadowManager::~CRealTimeShadowManager(CRealTimeShadowManager *this)
{
  CShadowCamera::Destroy((CRealTimeShadowManager *)((char *)this + 176));
  CShadowCamera::Destroy((CRealTimeShadowManager *)((char *)this + 168));
}


// ============================================================

// Address: 0x5b8220
// Original: _ZN22CRealTimeShadowManager4InitEv
// Demangled: CRealTimeShadowManager::Init(void)
int __fastcall CRealTimeShadowManager::Init(CRealTimeShadowManager *this)
{
  int result; // r0
  int i; // r4
  int v4; // r0
  int v5; // r1

  result = *(unsigned __int8 *)this;
  if ( !result )
  {
    for ( i = 0; i != 40; ++i )
    {
      v4 = operator new(0x40u);
      v5 = 2;
      *(_DWORD *)v4 = 0;
      *(_DWORD *)(v4 + 24) = -1;
      *(_DWORD *)(v4 + 28) = 0;
      *(_DWORD *)(v4 + 16) = 0;
      *(_BYTE *)(v4 + 12) = 0;
      *(_BYTE *)(v4 + 20) = 0;
      *(_WORD *)(v4 + 4) = 0;
      *(_DWORD *)(v4 + 8) = 0;
      *((_DWORD *)this + i + 1) = v4;
      if ( i < 12 )
        v5 = 1;
      if ( i < 4 )
        v5 = 0;
      CRealTimeShadow::Create((CRealTimeShadow *)v4, v5, 0, 4, 1);
    }
    CShadowCamera::Create((CRealTimeShadowManager *)((char *)this + 168), 7);
    CShadowCamera::Create((CRealTimeShadowManager *)((char *)this + 176), 7);
    CShadowCamera::MakeGradientRaster((CRealTimeShadowManager *)((char *)this + 176));
    result = 1;
    *(_BYTE *)this = 1;
  }
  return result;
}


// ============================================================

// Address: 0x5b82ac
// Original: _ZN22CRealTimeShadowManager4ExitEv
// Demangled: CRealTimeShadowManager::Exit(void)
int __fastcall CRealTimeShadowManager::Exit(CRealTimeShadowManager *this)
{
  int result; // r0
  int i; // r4
  void *v4; // r5
  void *v5; // r6
  int v6; // r0

  result = *(unsigned __int8 *)this;
  if ( result )
  {
    for ( i = 1; i != 41; ++i )
    {
      v4 = (void *)*((_DWORD *)this + i);
      if ( v4 )
      {
        v5 = (void *)*((_DWORD *)v4 + 2);
        if ( v5 )
        {
          CShadowCamera::Destroy(*((CShadowCamera **)v4 + 2));
          operator delete(v5);
          *((_DWORD *)v4 + 2) = 0;
        }
        *((_DWORD *)v4 + 6) = -1;
        v6 = *((_DWORD *)v4 + 7);
        *(_DWORD *)v4 = 0;
        if ( v6 )
        {
          _rwObjectHasFrameSetFrame();
          RwFrameDestroy();
          RpLightDestroy();
        }
        operator delete(v4);
      }
      *((_DWORD *)this + i) = 0;
    }
    CShadowCamera::Destroy((CRealTimeShadowManager *)((char *)this + 168));
    CShadowCamera::Destroy((CRealTimeShadowManager *)((char *)this + 176));
    result = 0;
    *(_BYTE *)this = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5b832c
// Original: _ZN22CRealTimeShadowManager11CamDistCompEPKvS1_
// Demangled: CRealTimeShadowManager::CamDistComp(void const*,void const*)
int __fastcall CRealTimeShadowManager::CamDistComp(int **this, int **a2, const void *a3)
{
  int *v3; // r2
  int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r3
  int v8; // r12
  float *v9; // r2
  float v10; // s0
  float *v11; // r0
  float v12; // s2
  float v13; // s4
  float *v14; // r2
  float v15; // s6
  float v16; // s8
  float v17; // s0
  float v18; // s14
  float v19; // s6
  float v20; // s1

  v3 = *this;
  v4 = **a2;
  v5 = *v3;
  if ( !*v3 )
    return v4 != 0;
  if ( !v4 )
    return -1;
  v7 = *(_DWORD *)(v4 + 20);
  v8 = *(_DWORD *)(v5 + 20);
  v9 = (float *)(v7 + 48);
  if ( !v7 )
    v9 = (float *)(v4 + 4);
  v10 = *v9;
  v11 = (float *)(v8 + 48);
  v12 = v9[1];
  v13 = v9[2];
  v14 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v14 = (float *)&qword_951FAC;
  v15 = *v14;
  if ( !v8 )
    v11 = (float *)(v5 + 4);
  v17 = v15 - v10;
  v18 = v11[1];
  v19 = v15 - *v11;
  v20 = v11[2];
  result = 1;
  v16 = v14[1];
  if ( (float)((float)((float)(v19 * v19) + (float)((float)(v16 - v18) * (float)(v16 - v18)))
             + (float)((float)(v14[2] - v20) * (float)(v14[2] - v20))) < (float)((float)((float)(v17 * v17)
                                                                                       + (float)((float)(v16 - v12)
                                                                                               * (float)(v16 - v12)))
                                                                               + (float)((float)(v14[2] - v13)
                                                                                       * (float)(v14[2] - v13))) )
    return -1;
  return result;
}


// ============================================================

// Address: 0x5b83fc
// Original: _ZN22CRealTimeShadowManager6UpdateEv
// Demangled: CRealTimeShadowManager::Update(void)
int __fastcall CRealTimeShadowManager::Update(CRealTimeShadowManager *this)
{
  return 0;
}


// ============================================================

// Address: 0x5b85f8
// Original: _ZN22CRealTimeShadowManager20ReturnRealTimeShadowEP15CRealTimeShadow
// Demangled: CRealTimeShadowManager::ReturnRealTimeShadow(CRealTimeShadow *)
int __fastcall CRealTimeShadowManager::ReturnRealTimeShadow(CRealTimeShadowManager *this, CRealTimeShadow *a2)
{
  int result; // r0

  result = *(unsigned __int8 *)this;
  if ( result )
  {
    result = *(_DWORD *)a2;
    *(_DWORD *)(*(_DWORD *)a2 + 312) = 0;
    *(_DWORD *)a2 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5b860a
// Original: _ZN22CRealTimeShadowManager6ReInitEv
// Demangled: CRealTimeShadowManager::ReInit(void)
int __fastcall CRealTimeShadowManager::ReInit(CRealTimeShadowManager *this)
{
  int i; // r6
  _DWORD *v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r5
  int v8; // r0
  CShadowCamera *v9; // r9
  int v10; // t1
  int v11; // r5
  int v12; // r0

  for ( i = 1; i != 41; ++i )
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + i) + 8);
    if ( v3 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(*v3 + 96) + 12);
      *(_DWORD *)(*v3 + 96) = 0;
      RwRasterDestroy();
      v5 = RwRasterCreate(v4, v4, 0, 5);
      *(_DWORD *)(*v3 + 96) = v5;
      RwTextureSetRaster(v3[1], v5);
    }
  }
  v6 = *((_DWORD *)this + 42);
  v7 = *(_DWORD *)(*(_DWORD *)(v6 + 96) + 12);
  *(_DWORD *)(v6 + 96) = 0;
  RwRasterDestroy();
  v8 = RwRasterCreate(v7, v7, 0, 5);
  *(_DWORD *)(*((_DWORD *)this + 42) + 96) = v8;
  RwTextureSetRaster(*((_DWORD *)this + 43), v8);
  v10 = *((_DWORD *)this + 44);
  v9 = (CRealTimeShadowManager *)((char *)this + 176);
  v11 = *(_DWORD *)(*(_DWORD *)(v10 + 96) + 12);
  *(_DWORD *)(v10 + 96) = 0;
  RwRasterDestroy();
  v12 = RwRasterCreate(v11, v11, 0, 5);
  *(_DWORD *)(*(_DWORD *)v9 + 96) = v12;
  RwTextureSetRaster(*((_DWORD *)v9 + 1), v12);
  return CShadowCamera::MakeGradientRaster(v9);
}


// ============================================================

// Address: 0x5b86b4
// Original: _ZN22CRealTimeShadowManager17DoShadowThisFrameEP9CPhysical
// Demangled: CRealTimeShadowManager::DoShadowThisFrame(CPhysical *)
int __fastcall CRealTimeShadowManager::DoShadowThisFrame(int this, CPhysical *a2)
{
  _BOOL4 v3; // r2
  int v4; // r1
  int v5; // r2
  _BOOL4 v6; // r2
  CRealTimeShadow *v7; // r5
  int i; // r1
  CRealTimeShadow *v9; // r2

  v3 = 0;
  v4 = *((_BYTE *)a2 + 58) & 7;
  if ( v4 == 3 )
    v3 = *((_DWORD *)a2 + 359) == 0;
  if ( v3 || dword_6E049C == 2 )
  {
    v5 = *((_DWORD *)a2 + 78);
    if ( v5 )
    {
      this = 1;
      *(_BYTE *)(v5 + 4) = 1;
    }
    else
    {
      v6 = 0;
      if ( v4 == 3 )
        v6 = *((_DWORD *)a2 + 359) == 0;
      if ( *(_BYTE *)this )
      {
        if ( v6 )
        {
          v7 = *(CRealTimeShadow **)(this + 4);
        }
        else
        {
          v7 = 0;
          for ( i = 2; i != 41; ++i )
          {
            v9 = *(CRealTimeShadow **)(this + 4 * i);
            if ( !*(_DWORD *)v9 )
              v7 = v9;
          }
        }
        if ( v7 )
        {
          CRealTimeShadow::SetShadowedObject(v7, a2);
          this = 1;
          *((_DWORD *)a2 + 78) = v7;
          *((_WORD *)v7 + 2) = 1;
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x5b873c
// Original: _ZN22CRealTimeShadowManager17GetRealTimeShadowEP9CPhysical
// Demangled: CRealTimeShadowManager::GetRealTimeShadow(CPhysical *)
CRealTimeShadow *__fastcall CRealTimeShadowManager::GetRealTimeShadow(CRealTimeShadowManager *this, CPhysical *a2)
{
  int v3; // r2
  _BOOL4 v4; // r1
  CRealTimeShadow *v5; // r5
  int i; // r1
  CRealTimeShadow *v7; // r2

  v3 = *((_BYTE *)a2 + 58) & 7;
  v4 = 0;
  if ( v3 == 3 )
    v4 = *((_DWORD *)a2 + 359) == 0;
  if ( !*(_BYTE *)this )
    return 0;
  if ( !v4 )
  {
    v5 = 0;
    for ( i = 2; i != 41; ++i )
    {
      v7 = (CRealTimeShadow *)*((_DWORD *)this + i);
      if ( !*(_DWORD *)v7 )
        v5 = v7;
    }
    if ( !v5 )
      return 0;
LABEL_12:
    CRealTimeShadow::SetShadowedObject(v5, a2);
    *((_DWORD *)a2 + 78) = v5;
    *((_WORD *)v5 + 2) = 1;
    return v5;
  }
  v5 = (CRealTimeShadow *)*((_DWORD *)this + 1);
  if ( v5 )
    goto LABEL_12;
  return 0;
}


// ============================================================
