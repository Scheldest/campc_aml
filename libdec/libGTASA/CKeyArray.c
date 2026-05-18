
// Address: 0x54d458
// Original: _ZN9CKeyArray4LoadEjjPjh
// Demangled: CKeyArray::Load(uint,uint,uint *,uchar)
int __fastcall CKeyArray::Load(CKeyArray *this, char *a2, CFileMgr *a3, unsigned int *a4, unsigned __int8 a5)
{
  unsigned int v9; // r0
  int v10; // r3

  *((_DWORD *)this + 1) = (unsigned int)a2 >> 3;
  v9 = operator new[]((unsigned int)a2 & 0xFFFFFFF8);
  *(_DWORD *)this = v9;
  CFileMgr::Read_old(a3, v9, a2, v10);
  *a4 += (unsigned int)a2;
  return 1;
}


// ============================================================

// Address: 0x54d48e
// Original: _ZN9CKeyArray6UnloadEv
// Demangled: CKeyArray::Unload(void)
int __fastcall CKeyArray::Unload(CKeyArray *this)
{
  void *v2; // r0
  int result; // r0

  v2 = *(void **)this;
  if ( v2 )
  {
    operator delete[](v2);
    *(_DWORD *)this = 0;
  }
  result = 0;
  *((_DWORD *)this + 1) = 0;
  return result;
}


// ============================================================

// Address: 0x54d4a6
// Original: _ZN9CKeyArray6UpdateEPt
// Demangled: CKeyArray::Update(ushort *)
int *__fastcall CKeyArray::Update(int *this, unsigned __int16 *a2)
{
  int v2; // r12
  unsigned int v3; // r3

  if ( this[1] )
  {
    v2 = *this;
    v3 = 0;
    do
      *(_DWORD *)(v2 + 8 * v3++) += a2;
    while ( v3 < this[1] );
  }
  return this;
}


// ============================================================

// Address: 0x54d4c8
// Original: _ZN9CKeyArray6SearchEPKcPh
// Demangled: CKeyArray::Search(char const*,uchar *)
int __fastcall CKeyArray::Search(int this, CKeyGen *a2, unsigned __int8 *a3)
{
  unsigned int UppercaseKey; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r6
  _DWORD *v9; // r4
  unsigned int v10; // r1
  int result; // r0

  UppercaseKey = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  v6 = *(_DWORD *)(this + 4) + 0xFFFF;
  if ( (__int16)(*(_WORD *)(this + 4) - 1) < 0 )
    goto LABEL_11;
  v7 = *(_DWORD *)this;
  LOWORD(this) = 0;
  while ( 1 )
  {
    v8 = ((__int16)this + (__int16)v6) / 2;
    v9 = (_DWORD *)(v7 + 8 * (unsigned __int16)v8);
    v10 = v9[1];
    if ( v10 == UppercaseKey )
      break;
    if ( v10 < UppercaseKey )
    {
      this = (__int16)(v8 + 1);
      if ( (__int16)v6 < this )
        goto LABEL_11;
    }
    else
    {
      v6 = (__int16)(v8 - 1);
      if ( (__int16)this > v6 )
        goto LABEL_11;
    }
  }
  if ( v9 )
  {
    *a3 = 1;
    return *v9;
  }
  else
  {
LABEL_11:
    result = 0;
    *a3 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x54d53a
// Original: _ZN9CKeyArray12BinarySearchEjP9CKeyEntryss
// Demangled: CKeyArray::BinarySearch(uint,CKeyEntry *,short,short)
int __fastcall CKeyArray::BinarySearch(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // r12
  int result; // r0
  int v7; // r4
  unsigned int v8; // r5

  LOWORD(v5) = a5;
  if ( a4 > a5 )
    return 0;
  while ( 1 )
  {
    v7 = ((__int16)a4 + (__int16)v5) / 2;
    result = a3 + 8 * (unsigned __int16)v7;
    v8 = *(_DWORD *)(result + 4);
    if ( v8 == a2 )
      break;
    if ( v8 < a2 )
    {
      a4 = (__int16)(v7 + 1);
      result = 0;
      if ( (__int16)v5 < a4 )
        return result;
    }
    else
    {
      v5 = (__int16)(v7 - 1);
      if ( (__int16)a4 > v5 )
        return 0;
    }
  }
  return result;
}


// ============================================================
