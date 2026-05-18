
// Address: 0x2cd03c
// Original: _ZN17CPPTriPlantBuffer27ChangeCurrentPlantModelsSetEi
// Demangled: CPPTriPlantBuffer::ChangeCurrentPlantModelsSet(int)
void __fastcall CPPTriPlantBuffer::ChangeCurrentPlantModelsSet(CPPTriPlantBuffer *this, int a2)
{
  unsigned int v4; // r8

  if ( *((_DWORD *)this + 737) != a2 )
  {
    if ( *(int *)this >= 1 )
    {
      v4 = rand();
      CGrassRenderer::DrawTriPlants();
      *(_DWORD *)this = 0;
      srand(v4);
    }
    *((_DWORD *)this + 737) = a2;
  }
}


// ============================================================

// Address: 0x2cd090
// Original: _ZN17CPPTriPlantBuffer16GetPPTriPlantPtrEi
// Demangled: CPPTriPlantBuffer::GetPPTriPlantPtr(int)
char *__fastcall CPPTriPlantBuffer::GetPPTriPlantPtr(CPPTriPlantBuffer *this, int a2)
{
  int v3; // r0
  bool v4; // cc
  unsigned int v5; // r6

  v3 = *(_DWORD *)this;
  v4 = v3 < 1;
  if ( v3 >= 1 )
    v4 = a2 + v3 < 33;
  if ( !v4 )
  {
    v5 = rand();
    CGrassRenderer::DrawTriPlants();
    *(_DWORD *)this = 0;
    srand(v5);
    v3 = *(_DWORD *)this;
  }
  return (char *)this + 92 * v3 + 4;
}


// ============================================================

// Address: 0x2cd0e8
// Original: _ZN17CPPTriPlantBuffer19IncreaseBufferIndexEii
// Demangled: CPPTriPlantBuffer::IncreaseBufferIndex(int,int)
void __fastcall CPPTriPlantBuffer::IncreaseBufferIndex(CPPTriPlantBuffer *this, int a2, int a3)
{
  int v4; // r0
  unsigned int v5; // r6

  if ( *((_DWORD *)this + 737) == a2 )
  {
    v4 = *(_DWORD *)this + a3;
    *(_DWORD *)this = v4;
    if ( v4 >= 32 )
    {
      v5 = rand();
      CGrassRenderer::DrawTriPlants();
      *(_DWORD *)this = 0;
      j_srand(v5);
    }
  }
}


// ============================================================

// Address: 0x2cd1b0
// Original: _ZN17CPPTriPlantBuffer5FlushEv
// Demangled: CPPTriPlantBuffer::Flush(void)
void __fastcall CPPTriPlantBuffer::Flush(CPPTriPlantBuffer *this)
{
  unsigned int v2; // r6

  if ( *(int *)this >= 1 )
  {
    v2 = rand();
    CGrassRenderer::DrawTriPlants();
    *(_DWORD *)this = 0;
    j_srand(v2);
  }
}


// ============================================================

// Address: 0x2cd21c
// Original: _ZN17CPPTriPlantBuffer17SetPlantModelsTabEjPP8RpAtomic
// Demangled: CPPTriPlantBuffer::SetPlantModelsTab(uint,RpAtomic **)
int __fastcall CPPTriPlantBuffer::SetPlantModelsTab(int a1, unsigned int a2, int a3)
{
  if ( a2 > 3 )
    return 0;
  *(_DWORD *)(a1 + 4 * a2 + 2952) = a3;
  return 1;
}


// ============================================================

// Address: 0x2cd24c
// Original: _ZN17CPPTriPlantBuffer17GetPlantModelsTabEj
// Demangled: CPPTriPlantBuffer::GetPlantModelsTab(uint)
int __fastcall CPPTriPlantBuffer::GetPlantModelsTab(CPPTriPlantBuffer *this, unsigned int a2)
{
  if ( a2 <= 3 )
    return *((_DWORD *)this + a2 + 738);
  else
    return 0;
}


// ============================================================

// Address: 0x2cd688
// Original: _ZN17CPPTriPlantBufferC2Ev
// Demangled: CPPTriPlantBuffer::CPPTriPlantBuffer(void)
void __fastcall CPPTriPlantBuffer::CPPTriPlantBuffer(CPPTriPlantBuffer *this)
{
  *((_DWORD *)this + 741) = 0;
  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 2948) = 0LL;
  *(_QWORD *)((char *)this + 2956) = 0LL;
}


// ============================================================

// Address: 0x2cd69e
// Original: _ZN17CPPTriPlantBufferD2Ev
// Demangled: CPPTriPlantBuffer::~CPPTriPlantBuffer()
void __fastcall CPPTriPlantBuffer::~CPPTriPlantBuffer(CPPTriPlantBuffer *this)
{
  ;
}


// ============================================================
