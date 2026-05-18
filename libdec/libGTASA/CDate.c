
// Address: 0x4d3a64
// Original: _ZN5CDateC2Ev
// Demangled: CDate::CDate(void)
void __fastcall CDate::CDate(CDate *this)
{
  *((_DWORD *)this + 5) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
}


// ============================================================

// Address: 0x4d3a76
// Original: _ZNK5CDategtERKS_
// Demangled: CDate::operator>(CDate const&)
bool __fastcall CDate::operator>(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r3
  _BOOL4 result; // r0

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a1 + 20);
  result = 1;
  if ( v3 <= v2 )
  {
    if ( v3 != v2 )
      return 0;
    v4 = *(_DWORD *)(a2 + 16);
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 <= v4 )
    {
      if ( v5 != v4 )
        return 0;
      v6 = *(_DWORD *)(a2 + 12);
      v7 = *(_DWORD *)(a1 + 12);
      if ( v7 <= v6 )
      {
        if ( v7 != v6 )
          return 0;
        v8 = *(_DWORD *)(a2 + 8);
        v9 = *(_DWORD *)(a1 + 8);
        if ( v9 <= v8 && (v9 != v8 || *(_QWORD *)a1 <= *(_QWORD *)a2) )
          return 0;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d3ab8
// Original: _ZNK5CDateltERKS_
// Demangled: CDate::operator<(CDate const&)
bool __fastcall CDate::operator<(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r3
  _BOOL4 result; // r0

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a1 + 20);
  result = 1;
  if ( v3 >= v2 )
  {
    if ( v3 != v2 )
      return 0;
    v4 = *(_DWORD *)(a2 + 16);
    v5 = *(_DWORD *)(a1 + 16);
    if ( v5 >= v4 )
    {
      if ( v5 != v4 )
        return 0;
      v6 = *(_DWORD *)(a2 + 12);
      v7 = *(_DWORD *)(a1 + 12);
      if ( v7 >= v6 )
      {
        if ( v7 != v6 )
          return 0;
        v8 = *(_DWORD *)(a2 + 8);
        v9 = *(_DWORD *)(a1 + 8);
        if ( v9 >= v8 && (v9 != v8 || *(_QWORD *)a1 >= *(_QWORD *)a2) )
          return 0;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4d3afa
// Original: _ZNK5CDateeqERKS_
// Demangled: CDate::operator==(CDate const&)
bool __fastcall CDate::operator==(_DWORD *a1, _DWORD *a2)
{
  return a1[5] == a2[5] && a1[4] == a2[4] && a1[3] == a2[3] && a1[2] == a2[2] && a1[1] == a2[1] && *a1 == *a2;
}


// ============================================================

// Address: 0x4d3b32
// Original: _ZN5CDate18PopulateDateFieldsERKcS1_S1_S1_S1_s
// Demangled: CDate::PopulateDateFields(char const&,char const&,char const&,char const&,char const&,short)
_DWORD *__fastcall CDate::PopulateDateFields(
        _DWORD *this,
        const char *a2,
        const char *a3,
        const char *a4,
        const char *a5,
        const char *a6,
        int a7)
{
  *this = *(unsigned __int8 *)a2;
  this[1] = *(unsigned __int8 *)a3;
  this[2] = *(unsigned __int8 *)a4;
  this[3] = *(unsigned __int8 *)a5;
  this[4] = *(unsigned __int8 *)a6;
  this[5] = a7;
  return this;
}


// ============================================================
