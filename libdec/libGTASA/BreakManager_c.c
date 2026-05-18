
// Address: 0x18b850
// Original: j__ZN14BreakManager_c4ExitEv
// Demangled: BreakManager_c::Exit(void)
// attributes: thunk
int __fastcall BreakManager_c::Exit(BreakManager_c *this)
{
  return _ZN14BreakManager_c4ExitEv(this);
}


// ============================================================

// Address: 0x192130
// Original: j__ZN14BreakManager_c6UpdateEf
// Demangled: BreakManager_c::Update(float)
// attributes: thunk
int __fastcall BreakManager_c::Update(BreakManager_c *this, float a2)
{
  return _ZN14BreakManager_c6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x1953f4
// Original: j__ZN14BreakManager_c8ResetAllEv
// Demangled: BreakManager_c::ResetAll(void)
// attributes: thunk
int __fastcall BreakManager_c::ResetAll(BreakManager_c *this)
{
  return _ZN14BreakManager_c8ResetAllEv(this);
}


// ============================================================

// Address: 0x19608c
// Original: j__ZN14BreakManager_c6RenderEh
// Demangled: BreakManager_c::Render(uchar)
// attributes: thunk
int __fastcall BreakManager_c::Render(BreakManager_c *this, unsigned __int8 a2)
{
  return _ZN14BreakManager_c6RenderEh(this, a2);
}


// ============================================================

// Address: 0x19c858
// Original: j__ZN14BreakManager_c3AddEP7CObjectP5RwV3dfi
// Demangled: BreakManager_c::Add(CObject *,RwV3d *,float,int)
// attributes: thunk
int __fastcall BreakManager_c::Add(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN14BreakManager_c3AddEP7CObjectP5RwV3dfi(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1a01f0
// Original: j__ZN14BreakManager_c4InitEv
// Demangled: BreakManager_c::Init(void)
// attributes: thunk
int __fastcall BreakManager_c::Init(BreakManager_c *this)
{
  return _ZN14BreakManager_c4InitEv(this);
}


// ============================================================

// Address: 0x452610
// Original: _ZN14BreakManager_cC2Ev
// Demangled: BreakManager_c::BreakManager_c(void)
void __fastcall BreakManager_c::BreakManager_c(BreakManager_c *this)
{
  BreakManager_c *v1; // r3

  v1 = this;
  do
  {
    *((_DWORD *)v1 + 2) = 0;
    *(_WORD *)v1 = 0;
    v1 = (BreakManager_c *)((char *)v1 + 32);
  }
  while ( v1 != (BreakManager_c *)((char *)this + 2048) );
}


// ============================================================

// Address: 0x452624
// Original: _ZN14BreakManager_cD2Ev
// Demangled: BreakManager_c::~BreakManager_c()
void __fastcall BreakManager_c::~BreakManager_c(BreakManager_c *this)
{
  ;
}


// ============================================================

// Address: 0x452626
// Original: _ZN14BreakManager_c4InitEv
// Demangled: BreakManager_c::Init(void)
int __fastcall BreakManager_c::Init(BreakManager_c *this)
{
  return 1;
}


// ============================================================

// Address: 0x45262a
// Original: _ZN14BreakManager_c4ExitEv
// Demangled: BreakManager_c::Exit(void)
void __fastcall BreakManager_c::Exit(BreakManager_c *this)
{
  ;
}


// ============================================================

// Address: 0x45262c
// Original: _ZN14BreakManager_c6UpdateEf
// Demangled: BreakManager_c::Update(float)
BreakObject_c *__fastcall BreakManager_c::Update(BreakManager_c *this, float a2)
{
  int i; // r6
  BreakObject_c *result; // r0

  for ( i = 0; i != 2048; i += 32 )
  {
    result = (BreakManager_c *)((char *)this + i);
    if ( *((_BYTE *)this + i + 1) )
      result = (BreakObject_c *)BreakObject_c::Update(result, a2);
  }
  return result;
}


// ============================================================

// Address: 0x452656
// Original: _ZN14BreakManager_c6RenderEh
// Demangled: BreakManager_c::Render(uchar)
BreakObject_c *__fastcall BreakManager_c::Render(BreakManager_c *this, unsigned __int8 a2)
{
  int v4; // r6
  BreakObject_c *result; // r0

  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(14, 1);
  v4 = 0;
  RwRenderStateSet(8, 0);
  do
  {
    result = (BreakManager_c *)((char *)this + v4);
    if ( *((_BYTE *)this + v4 + 1) )
      result = (BreakObject_c *)BreakObject_c::Render(result, a2);
    v4 += 32;
  }
  while ( v4 != 2048 );
  return result;
}


// ============================================================

// Address: 0x4526a8
// Original: _ZN14BreakManager_c3AddEP7CObjectP5RwV3dfi
// Demangled: BreakManager_c::Add(CObject *,RwV3d *,float,int)
bool __fastcall BreakManager_c::Add(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // lr

  v5 = -1;
  while ( *(_BYTE *)(a1 + 1) )
  {
    ++v5;
    a1 += 32;
    if ( v5 >= 63 )
      return 0;
  }
  return a1 && BreakObject_c::Init(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x4526e2
// Original: _ZN14BreakManager_c16GetFirstFreeSlotEv
// Demangled: BreakManager_c::GetFirstFreeSlot(void)
int __fastcall BreakManager_c::GetFirstFreeSlot(int this)
{
  int v1; // r1

  v1 = -1;
  while ( *(_BYTE *)(this + 1) )
  {
    ++v1;
    this += 32;
    if ( v1 >= 63 )
      return 0;
  }
  return this;
}


// ============================================================

// Address: 0x4526fa
// Original: _ZN14BreakManager_c8ResetAllEv
// Demangled: BreakManager_c::ResetAll(void)
void __fastcall BreakManager_c::ResetAll(BreakManager_c *this)
{
  BreakManager_c *v1; // r6
  int i; // r11
  char *v3; // r5
  _BYTE *v4; // r10
  char *v5; // r0
  char **v6; // r4
  _DWORD *v7; // r5
  int v8; // t1
  int v9; // r6
  int v10; // r8

  v1 = this;
  for ( i = 0; i != 64; ++i )
  {
    v3 = (char *)v1 + 32 * i;
    v4 = v3 + 1;
    if ( v3[1] )
    {
      v6 = (char **)(v3 + 8);
      v5 = (char *)*((_DWORD *)v3 + 2);
      if ( v5 )
      {
        v8 = *((_DWORD *)v3 + 1);
        v7 = v3 + 4;
        if ( v8 < 1 )
        {
          operator delete[](v5);
        }
        else
        {
          v9 = 0;
          v10 = 84;
          do
          {
            if ( *(_DWORD *)&v5[v10] )
            {
              RwTextureDestroy(*(_DWORD *)&v5[v10]);
              *(_DWORD *)&(*v6)[v10] = 0;
              v5 = *v6;
            }
            if ( *(_DWORD *)&v5[v10 - 4] )
            {
              operator delete[](*(void **)&v5[v10 - 4]);
              v5 = *v6;
            }
            ++v9;
            v10 += 116;
          }
          while ( v9 < *v7 );
          v1 = this;
          if ( v5 )
            operator delete[](v5);
        }
      }
      *v4 = 0;
    }
  }
}


// ============================================================
