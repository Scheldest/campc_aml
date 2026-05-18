
// Address: 0x1910cc
// Original: j__ZN20ES2ResourceContainer11PutResourceEjj
// Demangled: ES2ResourceContainer::PutResource(uint,uint)
// attributes: thunk
int __fastcall ES2ResourceContainer::PutResource(ES2ResourceContainer *this, unsigned int a2, unsigned int a3)
{
  return _ZN20ES2ResourceContainer11PutResourceEjj(this, a2, a3);
}


// ============================================================

// Address: 0x1cfda0
// Original: _ZN20ES2ResourceContainer11GetResourceEj
// Demangled: ES2ResourceContainer::GetResource(uint)
int __fastcall ES2ResourceContainer::GetResource(ES2ResourceContainer *this, unsigned int a2)
{
  unsigned int v2; // lr
  int v3; // r2
  unsigned int i; // r3
  int v5; // r12
  int v6; // r2
  unsigned int v7; // r4
  int v9; // r12
  int v10; // r1

  v2 = *((_DWORD *)this + 2);
  if ( !v2 )
    return 0;
  v3 = *((_DWORD *)this + 3);
  for ( i = 0; i < v2; ++i )
  {
    if ( *(_DWORD *)(v3 + 8 * i) == a2 )
    {
      v9 = *(_DWORD *)(v3 + 8 * i + 4);
      *((_DWORD *)this + 5) -= a2;
      *(_QWORD *)(v3 + 8 * i) = *(_QWORD *)(v3 + 8 * v2 - 8);
      --*((_DWORD *)this + 2);
      return v9;
    }
  }
  v5 = *((_DWORD *)this + 3);
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v5 + 8 * v6);
    if ( v7 > a2 && v7 <= (3 * a2) >> 1 )
      break;
    if ( ++v6 >= v2 )
      return 0;
  }
  v10 = *(_DWORD *)(v5 + 8 * v6 + 4);
  *((_DWORD *)this + 5) -= v7;
  *(_QWORD *)(v5 + 8 * v6) = *(_QWORD *)(v5 + 8 * v2 - 8);
  --*((_DWORD *)this + 2);
  return v10;
}


// ============================================================

// Address: 0x1cfe2e
// Original: _ZN20ES2ResourceContainer11PutResourceEjj
// Demangled: ES2ResourceContainer::PutResource(uint,uint)
int __fastcall ES2ResourceContainer::PutResource(ES2ResourceContainer *this, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r6
  int v5; // r0
  int v7; // r5
  unsigned int v9; // r0
  void (__fastcall **v10)(ES2ResourceContainer *, _DWORD); // r9
  __int64 v11; // kr00_8
  unsigned int v12; // r5
  int v13; // r0
  int result; // r0
  unsigned int v15; // r1
  unsigned int v16; // r11
  _DWORD *v17; // r0
  void *v18; // r9
  _DWORD *v19; // r10

  v4 = a2;
  v5 = *((_DWORD *)this + 4);
  if ( v5 / 4 <= a3 )
    return (**(int (__fastcall ***)(ES2ResourceContainer *, unsigned int))this)(this, a2);
  v7 = *((_DWORD *)this + 2);
  if ( v7 )
  {
    if ( *((_DWORD *)this + 5) + a3 > v5 )
    {
      while ( 1 )
      {
        v9 = rand();
        v10 = *(void (__fastcall ***)(ES2ResourceContainer *, _DWORD))this;
        v11 = *((_QWORD *)this + 1);
        if ( (v9 & 0x80000000) != 0 )
          v9 = -v9;
        v12 = v9 % (unsigned int)v11;
        *((_DWORD *)this + 5) -= *(_DWORD *)(HIDWORD(v11) + 8 * (v9 % (unsigned int)v11));
        (*v10)(this, *(_DWORD *)(HIDWORD(v11) + 8 * (v9 % (unsigned int)v11) + 4));
        *(_QWORD *)(*((_DWORD *)this + 3) + 8 * v12) = *(_QWORD *)(*((_DWORD *)this + 3) + 8 * *((_DWORD *)this + 2) - 8);
        v13 = *((_DWORD *)this + 2);
        v7 = v13 - 1;
        *((_DWORD *)this + 2) = v13 - 1;
        if ( v13 == 1 )
          break;
        if ( *((_DWORD *)this + 5) + a3 <= *((_DWORD *)this + 4) )
          goto LABEL_12;
      }
      v7 = 0;
LABEL_12:
      v4 = a2;
    }
  }
  else
  {
    v7 = 0;
  }
  v15 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 5) += a3;
  if ( v15 >= v7 + 1 )
  {
    v19 = (_DWORD *)*((_DWORD *)this + 3);
  }
  else
  {
    v16 = 4 * (v7 + 1) / 3u + 3;
    v17 = malloc(8 * v16);
    v18 = (void *)*((_DWORD *)this + 3);
    v19 = v17;
    if ( v18 )
    {
      memcpy_0(v17, *((const void **)this + 3), 8 * v7);
      free(v18);
      v7 = *((_DWORD *)this + 2);
    }
    *((_DWORD *)this + 3) = v19;
    *((_DWORD *)this + 1) = v16;
  }
  v19[2 * v7] = a3;
  v19[2 * v7 + 1] = v4;
  result = *((_DWORD *)this + 2) + 1;
  *((_DWORD *)this + 2) = result;
  return result;
}


// ============================================================

// Address: 0x1cff42
// Original: _ZN20ES2ResourceContainer7CleanupEv
// Demangled: ES2ResourceContainer::Cleanup(void)
unsigned int __fastcall ES2ResourceContainer::Cleanup(ES2ResourceContainer *this)
{
  unsigned int result; // r0
  unsigned int i; // r6

  result = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = 0;
  if ( result )
  {
    for ( i = 0; i < result; ++i )
    {
      (**(void (__fastcall ***)(ES2ResourceContainer *, _DWORD))this)(
        this,
        *(_DWORD *)(*((_DWORD *)this + 3) + 8 * i + 4));
      result = *((_DWORD *)this + 2);
    }
  }
  *((_DWORD *)this + 2) = 0;
  return result;
}


// ============================================================

// Address: 0x1cff78
// Original: _ZN20ES2ResourceContainerC2Ej
// Demangled: ES2ResourceContainer::ES2ResourceContainer(uint)
void __fastcall ES2ResourceContainer::ES2ResourceContainer(ES2ResourceContainer *this, unsigned int a2)
{
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = a2;
  *(_DWORD *)this = &off_6608D4;
}


// ============================================================

// Address: 0x1d11e0
// Original: _ZN20ES2ResourceContainerD2Ev
// Demangled: ES2ResourceContainer::~ES2ResourceContainer()
void __fastcall ES2ResourceContainer::~ES2ResourceContainer(ES2ResourceContainer *this)
{
  void *v2; // r0

  *((_DWORD *)this + 2) = 0;
  v2 = (void *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6608D4;
  if ( v2 )
  {
    free(v2);
    *((_DWORD *)this + 3) = 0;
  }
  *((_DWORD *)this + 1) = 0;
}


// ============================================================
