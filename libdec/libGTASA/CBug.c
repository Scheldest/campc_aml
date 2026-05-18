
// Address: 0x19558c
// Original: j__ZN4CBug11SetPlatformEj
// Demangled: CBug::SetPlatform(uint)
// attributes: thunk
int __fastcall CBug::SetPlatform(CBug *this, unsigned int a2)
{
  return _ZN4CBug11SetPlatformEj(this, a2);
}


// ============================================================

// Address: 0x19d7c4
// Original: j__ZN4CBug10BeginFieldEPKcS1_
// Demangled: CBug::BeginField(char const*,char const*)
// attributes: thunk
int __fastcall CBug::BeginField(CBug *this, const char *a2, const char *a3)
{
  return _ZN4CBug10BeginFieldEPKcS1_(this, a2, a3);
}


// ============================================================

// Address: 0x3bde5c
// Original: _ZN4CBug10AppendDataEPvj
// Demangled: CBug::AppendData(void *,uint)
size_t __fastcall CBug::AppendData(CBug *this, void *a2, size_t a3)
{
  size_t v5; // r5
  size_t v7; // r6
  char *v8; // r11
  void *v9; // r9
  size_t result; // r0

  v5 = *((_DWORD *)this + 1);
  v7 = v5 + a3;
  v8 = (char *)operator new[](v5 + a3);
  memset(v8, 0, v7);
  v9 = *(void **)this;
  memcpy_1(v8, *(const void **)this, v5);
  memcpy_1(&v8[v5], a2, a3);
  if ( v9 )
  {
    operator delete[](v9);
    v5 = *((_DWORD *)this + 1);
  }
  result = v5 + a3;
  *(_DWORD *)this = v8;
  *((_DWORD *)this + 1) = v5 + a3;
  return result;
}


// ============================================================

// Address: 0x3bdeb8
// Original: _ZN4CBug8SetFieldEiPvj
// Demangled: CBug::SetField(int,void *,uint)
void __fastcall CBug::SetField(CBug *this, int a2, void *a3, size_t a4)
{
  size_t v5; // r8
  _DWORD *v9; // r10
  size_t v10; // r4
  char *v11; // r5
  void *v12; // r6

  v5 = a4 + 8;
  v9 = (_DWORD *)operator new[](a4 + 8);
  *v9 = a2;
  v9[1] = a4;
  memcpy_1(v9 + 2, a3, a4);
  v10 = *((_DWORD *)this + 1);
  v11 = (char *)operator new[](v10 + v5);
  memset(v11, 0, v10 + v5);
  v12 = *(void **)this;
  memcpy_1(v11, *(const void **)this, v10);
  memcpy_1(&v11[v10], v9, v5);
  if ( v12 )
  {
    operator delete[](v12);
    v10 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v11;
  *((_DWORD *)this + 1) = v10 + v5;
  sub_18E920(v9);
}


// ============================================================

// Address: 0x3bdf38
// Original: _ZN4CBug14ClearBugBufferEv
// Demangled: CBug::ClearBugBuffer(void)
void *__fastcall CBug::ClearBugBuffer(CBug *this)
{
  void *result; // r0

  result = *(void **)this;
  if ( result )
  {
    operator delete[](result);
    result = 0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x3bdf52
// Original: _ZN4CBug10GetMessageEv
// Demangled: CBug::GetMessage(void)
int __fastcall CBug::GetMessage(CBug *this)
{
  return *(_DWORD *)this;
}


// ============================================================

// Address: 0x3bdf56
// Original: _ZN4CBug14GetMessageSizeEv
// Demangled: CBug::GetMessageSize(void)
int __fastcall CBug::GetMessageSize(CBug *this)
{
  return *((_DWORD *)this + 1);
}


// ============================================================

// Address: 0x3bdf5a
// Original: _ZN4CBug8SetOwnerEPKc
// Demangled: CBug::SetOwner(char const*)
void __fastcall CBug::SetOwner(CBug *this, const char *a2)
{
  size_t v4; // r5
  size_t v5; // r8
  _DWORD *v6; // r10
  size_t v7; // r4
  char *v8; // r5
  void *v9; // r6

  v4 = strlen(a2);
  v5 = v4 + 8;
  v6 = (_DWORD *)operator new[](v4 + 8);
  *v6 = 0;
  v6[1] = v4;
  memcpy_1(v6 + 2, a2, v4);
  v7 = *((_DWORD *)this + 1);
  v8 = (char *)operator new[](v7 + v4 + 8);
  memset(v8, 0, v7 + v5);
  v9 = *(void **)this;
  memcpy_1(v8, *(const void **)this, v7);
  memcpy_1(&v8[v7], v6, v5);
  if ( v9 )
  {
    operator delete[](v9);
    v7 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v8;
  *((_DWORD *)this + 1) = v7 + v5;
  sub_18E920(v6);
}


// ============================================================

// Address: 0x3bdfe0
// Original: _ZN4CBug11SetSeverityEPKc
// Demangled: CBug::SetSeverity(char const*)
void __fastcall CBug::SetSeverity(CBug *this, const char *a2)
{
  size_t v4; // r5
  size_t v5; // r8
  _DWORD *v6; // r10
  size_t v7; // r4
  char *v8; // r5
  void *v9; // r6

  v4 = strlen(a2);
  v5 = v4 + 8;
  v6 = (_DWORD *)operator new[](v4 + 8);
  *v6 = 6;
  v6[1] = v4;
  memcpy_1(v6 + 2, a2, v4);
  v7 = *((_DWORD *)this + 1);
  v8 = (char *)operator new[](v7 + v4 + 8);
  memset(v8, 0, v7 + v5);
  v9 = *(void **)this;
  memcpy_1(v8, *(const void **)this, v7);
  memcpy_1(&v8[v7], v6, v5);
  if ( v9 )
  {
    operator delete[](v9);
    v7 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v8;
  *((_DWORD *)this + 1) = v7 + v5;
  sub_18E920(v6);
}


// ============================================================

// Address: 0x3be068
// Original: _ZN4CBug10SetSummaryEPKcz
// Demangled: CBug::SetSummary(char const*,...)
int CBug::SetSummary(CBug *this, const char *a2, ...)
{
  size_t v3; // r5
  size_t v4; // r9
  _DWORD *v5; // r10
  size_t v6; // r6
  char *v7; // r4
  void *v8; // r5
  char v10[2052]; // [sp+8h] [bp-820h] BYREF
  int v11; // [sp+80Ch] [bp-1Ch]

  sub_5E6C0C(v10);
  v3 = strlen(v10);
  v4 = v3 + 8;
  v5 = (_DWORD *)operator new[](v3 + 8);
  *v5 = 9;
  v5[1] = v3;
  memcpy_1(v5 + 2, v10, v3);
  v6 = *((_DWORD *)this + 1);
  v7 = (char *)operator new[](v6 + v3 + 8);
  memset(v7, 0, v6 + v3 + 8);
  v8 = *(void **)this;
  memcpy_1(v7, *(const void **)this, v6);
  memcpy_1(&v7[v6], v5, v4);
  if ( v8 )
  {
    operator delete[](v8);
    v6 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 1) = v6 + v4;
  operator delete[](v5);
  return _stack_chk_guard - v11;
}


// ============================================================

// Address: 0x3be138
// Original: _ZN4CBug10SetProductEPKc
// Demangled: CBug::SetProduct(char const*)
void __fastcall CBug::SetProduct(CBug *this, const char *a2)
{
  size_t v4; // r5
  size_t v5; // r8
  _DWORD *v6; // r10
  size_t v7; // r4
  char *v8; // r5
  void *v9; // r6

  v4 = strlen(a2);
  v5 = v4 + 8;
  v6 = (_DWORD *)operator new[](v4 + 8);
  *v6 = 10;
  v6[1] = v4;
  memcpy_1(v6 + 2, a2, v4);
  v7 = *((_DWORD *)this + 1);
  v8 = (char *)operator new[](v7 + v4 + 8);
  memset(v8, 0, v7 + v5);
  v9 = *(void **)this;
  memcpy_1(v8, *(const void **)this, v7);
  memcpy_1(&v8[v7], v6, v5);
  if ( v9 )
  {
    operator delete[](v9);
    v7 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v8;
  *((_DWORD *)this + 1) = v7 + v5;
  sub_18E920(v6);
}


// ============================================================

// Address: 0x3be1c0
// Original: _ZN4CBug11SetPlatformEj
// Demangled: CBug::SetPlatform(uint)
int __fastcall CBug::SetPlatform(CBug *this, unsigned int a2)
{
  size_t v3; // r5
  size_t v4; // r9
  _DWORD *v5; // r10
  size_t v6; // r6
  char *v7; // r4
  void *v8; // r5
  char v10[2052]; // [sp+0h] [bp-820h] BYREF
  int v11; // [sp+804h] [bp-1Ch]

  sub_5E6BC0(v10, (const char *)&dword_3BE280, a2);
  v3 = strlen(v10);
  v4 = v3 + 8;
  v5 = (_DWORD *)operator new[](v3 + 8);
  *v5 = 11;
  v5[1] = v3;
  memcpy_1(v5 + 2, v10, v3);
  v6 = *((_DWORD *)this + 1);
  v7 = (char *)operator new[](v6 + v3 + 8);
  memset(v7, 0, v6 + v3 + 8);
  v8 = *(void **)this;
  memcpy_1(v7, *(const void **)this, v6);
  memcpy_1(&v7[v6], v5, v4);
  if ( v8 )
  {
    operator delete[](v8);
    v6 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 1) = v6 + v4;
  operator delete[](v5);
  return _stack_chk_guard - v11;
}


// ============================================================

// Address: 0x3be288
// Original: _ZN4CBug10SetVersionEj
// Demangled: CBug::SetVersion(uint)
int __fastcall CBug::SetVersion(CBug *this, unsigned int a2)
{
  size_t v3; // r5
  size_t v4; // r9
  _DWORD *v5; // r10
  size_t v6; // r6
  char *v7; // r4
  void *v8; // r5
  char v10[2052]; // [sp+0h] [bp-820h] BYREF
  int v11; // [sp+804h] [bp-1Ch]

  sub_5E6BC0(v10, (const char *)&dword_3BE348, a2);
  v3 = strlen(v10);
  v4 = v3 + 8;
  v5 = (_DWORD *)operator new[](v3 + 8);
  *v5 = 12;
  v5[1] = v3;
  memcpy_1(v5 + 2, v10, v3);
  v6 = *((_DWORD *)this + 1);
  v7 = (char *)operator new[](v6 + v3 + 8);
  memset(v7, 0, v6 + v3 + 8);
  v8 = *(void **)this;
  memcpy_1(v7, *(const void **)this, v6);
  memcpy_1(&v7[v6], v5, v4);
  if ( v8 )
  {
    operator delete[](v8);
    v6 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 1) = v6 + v4;
  operator delete[](v5);
  return _stack_chk_guard - v11;
}


// ============================================================

// Address: 0x3be350
// Original: _ZN4CBug12SetComponentEj
// Demangled: CBug::SetComponent(uint)
int __fastcall CBug::SetComponent(CBug *this, unsigned int a2)
{
  size_t v3; // r5
  size_t v4; // r9
  _DWORD *v5; // r10
  size_t v6; // r6
  char *v7; // r4
  void *v8; // r5
  char v10[2052]; // [sp+0h] [bp-820h] BYREF
  int v11; // [sp+804h] [bp-1Ch]

  sub_5E6BC0(v10, (const char *)&dword_3BE410, a2);
  v3 = strlen(v10);
  v4 = v3 + 8;
  v5 = (_DWORD *)operator new[](v3 + 8);
  *v5 = 14;
  v5[1] = v3;
  memcpy_1(v5 + 2, v10, v3);
  v6 = *((_DWORD *)this + 1);
  v7 = (char *)operator new[](v6 + v3 + 8);
  memset(v7, 0, v6 + v3 + 8);
  v8 = *(void **)this;
  memcpy_1(v7, *(const void **)this, v6);
  memcpy_1(&v7[v6], v5, v4);
  if ( v8 )
  {
    operator delete[](v8);
    v6 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v7;
  *((_DWORD *)this + 1) = v6 + v4;
  operator delete[](v5);
  return _stack_chk_guard - v11;
}


// ============================================================

// Address: 0x3be418
// Original: _ZN4CBug10BeginFieldEPKcS1_
// Demangled: CBug::BeginField(char const*,char const*)
void __fastcall CBug::BeginField(CBug *this, const char *a2, const char *a3)
{
  size_t v5; // r5
  size_t v6; // r6
  unsigned int v7; // r4
  size_t *v8; // r9
  unsigned int v9; // r10
  _DWORD *v10; // r11
  size_t v11; // r6
  char *v12; // r4
  void *v13; // r5

  v5 = strlen(a2);
  v6 = strlen(a3);
  v7 = v6 + v5 + 8;
  v8 = (size_t *)operator new[](v7);
  *v8 = v5;
  memcpy_1(v8 + 1, a2, v5);
  *(size_t *)((char *)v8 + v5 + 4) = v6;
  memcpy_1((char *)v8 + v5 + 8, a3, v6);
  v9 = v6 + v5 + 16;
  v10 = (_DWORD *)operator new[](v9);
  *v10 = 17;
  v10[1] = v7;
  memcpy_1(v10 + 2, v8, v7);
  v11 = *((_DWORD *)this + 1);
  v12 = (char *)operator new[](v11 + v9);
  memset(v12, 0, v11 + v9);
  v13 = *(void **)this;
  memcpy_1(v12, *(const void **)this, v11);
  memcpy_1(&v12[v11], v10, v9);
  if ( v13 )
  {
    operator delete[](v13);
    v11 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v12;
  *((_DWORD *)this + 1) = v11 + v9;
  operator delete[](v10);
  sub_18E920(v8);
}


// ============================================================

// Address: 0x3be4e4
// Original: _ZN4CBug8EndFieldEv
// Demangled: CBug::EndField(void)
void __fastcall CBug::EndField(CBug *this)
{
  ;
}


// ============================================================

// Address: 0x3be4e6
// Original: _ZN4CBug20BeginCustomFieldDataEv
// Demangled: CBug::BeginCustomFieldData(void)
void __fastcall CBug::BeginCustomFieldData(CBug *this)
{
  ;
}


// ============================================================

// Address: 0x3be4e8
// Original: _ZN4CBug18EndCustomFieldDataEv
// Demangled: CBug::EndCustomFieldData(void)
size_t __fastcall CBug::EndCustomFieldData(CBug *this)
{
  size_t v2; // r6
  char *v3; // r5
  void *v4; // r8
  size_t result; // r0

  v2 = *((_DWORD *)this + 1);
  v3 = (char *)operator new[](v2 + 4);
  memset(v3, 0, v2 + 4);
  v4 = *(void **)this;
  memcpy_1(v3, *(const void **)this, v2);
  *(_DWORD *)&v3[v2] = 0;
  if ( v4 )
  {
    operator delete[](v4);
    v2 = *((_DWORD *)this + 1);
  }
  result = v2 + 4;
  *(_DWORD *)this = v3;
  *((_DWORD *)this + 1) = v2 + 4;
  return result;
}


// ============================================================

// Address: 0x3be534
// Original: _ZN4CBug18AddCustomFieldDataEPvj
// Demangled: CBug::AddCustomFieldData(void *,uint)
void __fastcall CBug::AddCustomFieldData(CBug *this, void *a2, size_t a3)
{
  size_t v4; // r9
  size_t *v7; // r8
  size_t v8; // r5
  char *v9; // r6
  void *v10; // r4

  v4 = a3 + 4;
  v7 = (size_t *)operator new[](a3 + 4);
  *v7 = a3;
  memcpy_1(v7 + 1, a2, a3);
  v8 = *((_DWORD *)this + 1);
  v9 = (char *)operator new[](v8 + v4);
  memset(v9, 0, v8 + v4);
  v10 = *(void **)this;
  memcpy_1(v9, *(const void **)this, v8);
  memcpy_1(&v9[v8], v7, v4);
  if ( v10 )
  {
    operator delete[](v10);
    v8 = *((_DWORD *)this + 1);
  }
  *(_DWORD *)this = v9;
  *((_DWORD *)this + 1) = v8 + v4;
  sub_18E920(v7);
}


// ============================================================
