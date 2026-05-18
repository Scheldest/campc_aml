
// Address: 0x18a448
// Original: j__ZN12CPatrolRoutedlEPv
// Demangled: CPatrolRoute::operator delete(void *)
// attributes: thunk
void __fastcall CPatrolRoute::operator delete(void *a1)
{
  _ZN12CPatrolRoutedlEPv(a1);
}


// ============================================================

// Address: 0x18e5fc
// Original: j__ZN12CPatrolRoutenwEj
// Demangled: CPatrolRoute::operator new(uint)
// attributes: thunk
int __fastcall CPatrolRoute::operator new(CPatrolRoute *this, unsigned int a2)
{
  return _ZN12CPatrolRoutenwEj(this, a2);
}


// ============================================================

// Address: 0x19ab0c
// Original: j__ZN12CPatrolRoute7ReverseEv
// Demangled: CPatrolRoute::Reverse(void)
// attributes: thunk
int __fastcall CPatrolRoute::Reverse(CPatrolRoute *this)
{
  return _ZN12CPatrolRoute7ReverseEv(this);
}


// ============================================================

// Address: 0x3271f4
// Original: _ZN12CPatrolRoutenwEj
// Demangled: CPatrolRoute::operator new(uint)
int __fastcall CPatrolRoute::operator new(CPatrolRoute *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pPatrolRoutePool;
  result = *(_DWORD *)(CPools::ms_pPatrolRoutePool + 12);
  v5 = *(_DWORD *)(CPools::ms_pPatrolRoutePool + 8);
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
  return *v3 + 420 * v3[3];
}


// ============================================================

// Address: 0x327258
// Original: _ZN12CPatrolRoutedlEPv
// Demangled: CPatrolRoute::operator delete(void *)
void __fastcall CPatrolRoute::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pPatrolRoutePool;
  v2 = -654471207 * ((a1 - *(_DWORD *)CPools::ms_pPatrolRoutePool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pPatrolRoutePool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x526ab0
// Original: _ZN12CPatrolRouteD2Ev
// Demangled: CPatrolRoute::~CPatrolRoute()
void __fastcall CPatrolRoute::~CPatrolRoute(CPatrolRoute *this)
{
  ;
}


// ============================================================

// Address: 0x526ab4
// Original: _ZN12CPatrolRoute7ReverseEv
// Demangled: CPatrolRoute::Reverse(void)
int __fastcall CPatrolRoute::Reverse(CPatrolRoute *this)
{
  int v2; // r0
  int v3; // r6
  int v4; // r3
  int v5; // r2
  int v6; // r1
  int v7; // r0
  char *v8; // r4
  char *v9; // r0
  char *v10; // r5
  char *v11; // r1
  __int64 v12; // d16
  int v14; // [sp+4h] [bp-74h]
  int v15; // [sp+8h] [bp-70h]
  int v16; // [sp+10h] [bp-68h]
  int v17; // [sp+14h] [bp-64h]
  int v18; // [sp+18h] [bp-60h]
  int v19; // [sp+1Ch] [bp-5Ch]
  __int64 v20; // [sp+20h] [bp-58h]
  int v21; // [sp+28h] [bp-50h]
  char v22[24]; // [sp+30h] [bp-48h] BYREF
  char v23[16]; // [sp+48h] [bp-30h] BYREF
  int v24; // [sp+58h] [bp-20h]

  v2 = *(_DWORD *)this;
  if ( v2 >= 2 )
  {
    v3 = 324;
    v4 = 0;
    v19 = 40 * v2 - 36;
    v18 = 40 * v2 - 12;
    v5 = 12 * v2 + 312;
    v6 = v2 - 1;
    v7 = 1;
    do
    {
      v8 = (char *)this + v4;
      v14 = v7;
      v15 = v4;
      v9 = (char *)this + v3;
      v10 = (char *)this + v4 + 4;
      v16 = v6;
      v17 = v5;
      v21 = *(_DWORD *)((char *)this + v3 + 8);
      v11 = (char *)this + v5;
      v20 = *(_QWORD *)((char *)this + v3);
      v12 = *(_QWORD *)((char *)this + v5);
      *((_DWORD *)v9 + 2) = *(_DWORD *)((char *)this + v5 + 8);
      *(_QWORD *)v9 = v12;
      *((_DWORD *)v11 + 2) = v21;
      *(_QWORD *)v11 = v20;
      strcpy(v22, v10);
      strcpy(v23, v8 + 28);
      strcpy(v10, (const char *)this + v19);
      strcpy(v8 + 28, (const char *)this + v18);
      strcpy((char *)this + v19, v22);
      strcpy((char *)this + v18, v23);
      v3 += 12;
      v4 = v15 + 40;
      v6 = v16 - 1;
      v5 = v17 - 12;
      v7 = v14 + 1;
      v19 -= 40;
      v18 -= 40;
    }
    while ( v14 < v16 - 1 );
  }
  return _stack_chk_guard - v24;
}


// ============================================================
