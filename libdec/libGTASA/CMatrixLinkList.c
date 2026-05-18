
// Address: 0x407f84
// Original: _ZN15CMatrixLinkList4InitEi
// Demangled: CMatrixLinkList::Init(int)
char *__fastcall CMatrixLinkList::Init(CMatrixLinkList *this, unsigned int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r2
  int v6; // r1
  _DWORD *v7; // r0
  char *v8; // lr
  char *result; // r0
  unsigned int v10; // r1
  _DWORD *v11; // r2
  int v12; // r5
  unsigned int v13; // r6
  int v14; // r5
  int v15; // r3

  v4 = (_DWORD *)operator new[](saturated_mul(0x54u, a2));
  v5 = v4 + 2;
  *v4 = 84;
  v4[1] = a2;
  if ( a2 )
  {
    v6 = 84 * a2;
    v7 = v4 + 19;
    do
    {
      *(v7 - 1) = 0;
      v6 -= 84;
      *v7 = 0;
      v7 += 21;
    }
    while ( v6 );
  }
  v8 = (char *)this + 336;
  *((_DWORD *)this + 20) = (char *)this + 84;
  *((_DWORD *)this + 126) = v5;
  *((_DWORD *)this + 62) = (char *)this + 252;
  result = (char *)this + 168;
  *((_DWORD *)this + 82) = (char *)this + 168;
  *((_DWORD *)this + 104) = (char *)this + 420;
  *((_DWORD *)this + 124) = (char *)this + 336;
  *((_DWORD *)this + 40) = this;
  if ( a2 )
  {
    v10 = a2 - 1;
    v11 = &v5[21 * a2 - 21];
    v11[20] = (char *)this + 420;
    *(_DWORD *)(*((_DWORD *)this + 104) + 76) = v11;
    v11[19] = v8;
    *((_DWORD *)this + 104) = v11;
    if ( a2 != 1 )
    {
      v12 = 84 * a2;
      v13 = 1 - a2;
      v14 = v12 - 168;
      do
      {
        v15 = *((_DWORD *)this + 126);
        --v10;
        ++v13;
        result = (char *)(v15 + v14);
        v14 -= 84;
        *((_DWORD *)result + 20) = v11;
        v11 = (_DWORD *)(v15 + 84 * v10);
        *(_DWORD *)(*((_DWORD *)this + 104) + 76) = result;
        *((_DWORD *)result + 19) = v8;
        *((_DWORD *)this + 104) = result;
      }
      while ( v13 );
    }
  }
  return result;
}


// ============================================================

// Address: 0x40805c
// Original: _ZN15CMatrixLinkList8ShutdownEv
// Demangled: CMatrixLinkList::Shutdown(void)
int __fastcall CMatrixLinkList::Shutdown(CMatrixLinkList *this)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r8
  int v5; // r5
  int v6; // r6
  int result; // r0

  v2 = *((_DWORD *)this + 126);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 84;
      v6 = 84 * v3;
      do
      {
        CMatrix::~CMatrix((CMatrix *)(v5 + v6));
        v6 -= 84;
      }
      while ( v6 );
    }
    operator delete[](v4);
  }
  result = 0;
  *((_DWORD *)this + 126) = 0;
  return result;
}


// ============================================================

// Address: 0x40809c
// Original: _ZN15CMatrixLinkList10AddToList1Ev
// Demangled: CMatrixLinkList::AddToList1(void)
int __fastcall CMatrixLinkList::AddToList1(CMatrixLinkList *this)
{
  char *v2; // r2
  int result; // r0

  v2 = (char *)this + 420;
  result = *((_DWORD *)this + 104);
  if ( (char *)result == v2 )
    return 0;
  *(_DWORD *)(*(_DWORD *)(result + 80) + 76) = *(_DWORD *)(result + 76);
  *(_DWORD *)(*(_DWORD *)(result + 76) + 80) = *(_DWORD *)(result + 80);
  *(_DWORD *)(result + 80) = *((_DWORD *)this + 20);
  *(_DWORD *)(*((_DWORD *)this + 20) + 76) = result;
  *(_DWORD *)(result + 76) = this;
  *((_DWORD *)this + 20) = result;
  return result;
}


// ============================================================

// Address: 0x4080c8
// Original: _ZN15CMatrixLinkList10AddToList2Ev
// Demangled: CMatrixLinkList::AddToList2(void)
int __fastcall CMatrixLinkList::AddToList2(CMatrixLinkList *this)
{
  char *v2; // r2
  int result; // r0

  v2 = (char *)this + 420;
  result = *((_DWORD *)this + 104);
  if ( (char *)result == v2 )
    return 0;
  *(_DWORD *)(*(_DWORD *)(result + 80) + 76) = *(_DWORD *)(result + 76);
  *(_DWORD *)(*(_DWORD *)(result + 76) + 80) = *(_DWORD *)(result + 80);
  *(_DWORD *)(result + 80) = *((_DWORD *)this + 62);
  *(_DWORD *)(*((_DWORD *)this + 62) + 76) = result;
  *(_DWORD *)(result + 76) = (char *)this + 168;
  *((_DWORD *)this + 62) = result;
  return result;
}


// ============================================================

// Address: 0x4080fe
// Original: _ZN15CMatrixLinkList11MoveToList1EP11CMatrixLink
// Demangled: CMatrixLinkList::MoveToList1(CMatrixLink *)
int __fastcall CMatrixLinkList::MoveToList1(int this, CMatrixLink *a2)
{
  *(_DWORD *)(*((_DWORD *)a2 + 20) + 76) = *((_DWORD *)a2 + 19);
  *(_DWORD *)(*((_DWORD *)a2 + 19) + 80) = *((_DWORD *)a2 + 20);
  *((_DWORD *)a2 + 20) = *(_DWORD *)(this + 80);
  *(_DWORD *)(*(_DWORD *)(this + 80) + 76) = a2;
  *((_DWORD *)a2 + 19) = this;
  *(_DWORD *)(this + 80) = a2;
  return this;
}


// ============================================================

// Address: 0x408118
// Original: _ZN15CMatrixLinkList11MoveToList2EP11CMatrixLink
// Demangled: CMatrixLinkList::MoveToList2(CMatrixLink *)
int __fastcall CMatrixLinkList::MoveToList2(int this, CMatrixLink *a2)
{
  *(_DWORD *)(*((_DWORD *)a2 + 20) + 76) = *((_DWORD *)a2 + 19);
  *(_DWORD *)(*((_DWORD *)a2 + 19) + 80) = *((_DWORD *)a2 + 20);
  *((_DWORD *)a2 + 20) = *(_DWORD *)(this + 248);
  *(_DWORD *)(*(_DWORD *)(this + 248) + 76) = a2;
  *((_DWORD *)a2 + 19) = this + 168;
  *(_DWORD *)(this + 248) = a2;
  return this;
}


// ============================================================

// Address: 0x40813c
// Original: _ZN15CMatrixLinkList14MoveToFreeListEP11CMatrixLink
// Demangled: CMatrixLinkList::MoveToFreeList(CMatrixLink *)
int __fastcall CMatrixLinkList::MoveToFreeList(int this, CMatrixLink *a2)
{
  *(_DWORD *)(*((_DWORD *)a2 + 20) + 76) = *((_DWORD *)a2 + 19);
  *(_DWORD *)(*((_DWORD *)a2 + 19) + 80) = *((_DWORD *)a2 + 20);
  *((_DWORD *)a2 + 20) = *(_DWORD *)(this + 416);
  *(_DWORD *)(*(_DWORD *)(this + 416) + 76) = a2;
  *((_DWORD *)a2 + 19) = this + 336;
  *(_DWORD *)(this + 416) = a2;
  return this;
}


// ============================================================

// Address: 0x408160
// Original: _ZN15CMatrixLinkList10GetNumFreeEv
// Demangled: CMatrixLinkList::GetNumFree(void)
int __fastcall CMatrixLinkList::GetNumFree(CMatrixLinkList *this)
{
  char *v1; // r1
  int v2; // r2
  int result; // r0

  v1 = (char *)this + 420;
  v2 = *((_DWORD *)this + 104);
  result = 0;
  while ( (char *)v2 != v1 )
  {
    v2 = *(_DWORD *)(v2 + 80);
    ++result;
  }
  return result;
}


// ============================================================

// Address: 0x408178
// Original: _ZN15CMatrixLinkList11GetNumUsed1Ev
// Demangled: CMatrixLinkList::GetNumUsed1(void)
int __fastcall CMatrixLinkList::GetNumUsed1(CMatrixLinkList *this)
{
  char *v1; // r1
  int v2; // r2
  int result; // r0

  v1 = (char *)this + 84;
  v2 = *((_DWORD *)this + 20);
  result = 0;
  while ( (char *)v2 != v1 )
  {
    v2 = *(_DWORD *)(v2 + 80);
    ++result;
  }
  return result;
}


// ============================================================

// Address: 0x40818e
// Original: _ZN15CMatrixLinkList11GetNumUsed2Ev
// Demangled: CMatrixLinkList::GetNumUsed2(void)
int __fastcall CMatrixLinkList::GetNumUsed2(CMatrixLinkList *this)
{
  char *v1; // r1
  int v2; // r2
  int result; // r0

  v1 = (char *)this + 252;
  v2 = *((_DWORD *)this + 62);
  result = 0;
  while ( (char *)v2 != v1 )
  {
    v2 = *(_DWORD *)(v2 + 80);
    ++result;
  }
  return result;
}


// ============================================================

// Address: 0x408d54
// Original: _ZN15CMatrixLinkListD2Ev
// Demangled: CMatrixLinkList::~CMatrixLinkList()
void __fastcall CMatrixLinkList::~CMatrixLinkList(CMatrixLinkList *this)
{
  CMatrix::~CMatrix((CMatrixLinkList *)((char *)this + 420));
  CMatrix::~CMatrix((CMatrixLinkList *)((char *)this + 336));
  CMatrix::~CMatrix((CMatrixLinkList *)((char *)this + 252));
  CMatrix::~CMatrix((CMatrixLinkList *)((char *)this + 168));
  CMatrix::~CMatrix((CMatrixLinkList *)((char *)this + 84));
  j_CMatrix::~CMatrix(this);
}


// ============================================================
