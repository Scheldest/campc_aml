
// Address: 0x191438
// Original: j__ZN7CKeyGen17AppendStringToKeyEjPKc
// Demangled: CKeyGen::AppendStringToKey(uint,char const*)
// attributes: thunk
int __fastcall CKeyGen::AppendStringToKey(CKeyGen *this, unsigned int a2, const char *a3)
{
  return _ZN7CKeyGen17AppendStringToKeyEjPKc(this, a2, a3);
}


// ============================================================

// Address: 0x194a8c
// Original: j__ZN7CKeyGen6GetKeyEPKc
// Demangled: CKeyGen::GetKey(char const*)
// attributes: thunk
int __fastcall CKeyGen::GetKey(CKeyGen *this, const char *a2)
{
  return _ZN7CKeyGen6GetKeyEPKc(this, a2);
}


// ============================================================

// Address: 0x19d898
// Original: j__ZN7CKeyGen15GetUppercaseKeyEPKc
// Demangled: CKeyGen::GetUppercaseKey(char const*)
// attributes: thunk
int __fastcall CKeyGen::GetUppercaseKey(CKeyGen *this, const char *a2)
{
  return _ZN7CKeyGen15GetUppercaseKeyEPKc(this, a2);
}


// ============================================================

// Address: 0x3f4e1c
// Original: _ZN7CKeyGen6GetKeyEPKci
// Demangled: CKeyGen::GetKey(char const*,int)
unsigned int __fastcall CKeyGen::GetKey(CKeyGen *this, const char *a2, int a3)
{
  unsigned int result; // r0
  const char *v5; // r1
  int v6; // t1

  if ( (int)a2 < 1 )
    return -1;
  v5 = a2 + 1;
  result = -1;
  do
  {
    v6 = *(unsigned __int8 *)this;
    this = (CKeyGen *)((char *)this + 1);
    --v5;
    result = CKeyGen::keyTable[(unsigned __int8)result ^ v6] ^ (result >> 8);
  }
  while ( (int)v5 > 1 );
  return result;
}


// ============================================================

// Address: 0x3f4e58
// Original: _ZN7CKeyGen6GetKeyEPKc
// Demangled: CKeyGen::GetKey(char const*)
unsigned int __fastcall CKeyGen::GetKey(CKeyGen *this, const char *a2)
{
  char v2; // r1
  unsigned int result; // r0
  unsigned __int8 *v4; // r2
  int v5; // r3
  int v6; // t1

  v2 = *(_BYTE *)this;
  if ( !*(_BYTE *)this )
    return -1;
  v4 = (unsigned __int8 *)this + 1;
  result = -1;
  do
  {
    v5 = CKeyGen::keyTable[(unsigned __int8)(v2 ^ result)];
    v6 = *v4++;
    v2 = v6;
    result = v5 ^ (result >> 8);
  }
  while ( v6 );
  return result;
}


// ============================================================

// Address: 0x3f4e8c
// Original: _ZN7CKeyGen15GetUppercaseKeyEPKc
// Demangled: CKeyGen::GetUppercaseKey(char const*)
int __fastcall CKeyGen::GetUppercaseKey(CKeyGen *this, const char *a2)
{
  unsigned __int8 v2; // r1
  unsigned __int8 *v3; // r5
  unsigned int v4; // r4
  char v5; // r0
  int v6; // t1

  v2 = *(_BYTE *)this;
  if ( !*(_BYTE *)this )
    return -1;
  v3 = (unsigned __int8 *)this + 1;
  v4 = -1;
  do
  {
    v5 = toupper(v2);
    v6 = *v3++;
    v2 = v6;
    v4 = CKeyGen::keyTable[(unsigned __int8)(v5 ^ v4)] ^ (v4 >> 8);
  }
  while ( v6 );
  return v4;
}


// ============================================================

// Address: 0x3f4ed0
// Original: _ZN7CKeyGen17AppendStringToKeyEjPKc
// Demangled: CKeyGen::AppendStringToKey(uint,char const*)
unsigned int __fastcall CKeyGen::AppendStringToKey(unsigned int this, _BYTE *a2, const char *a3)
{
  char v3; // r2
  unsigned __int8 *v4; // r1
  int v5; // r3
  int v6; // t1

  v3 = *a2;
  if ( *a2 )
  {
    v4 = a2 + 1;
    do
    {
      v5 = CKeyGen::keyTable[(unsigned __int8)(v3 ^ this)];
      v6 = *v4++;
      v3 = v6;
      this = v5 ^ (this >> 8);
    }
    while ( v6 );
  }
  return this;
}


// ============================================================
