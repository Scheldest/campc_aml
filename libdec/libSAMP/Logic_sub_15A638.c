// ADDR: 0x15530a
// SYMBOL: sub_15530A
unsigned int *__fastcall sub_15530A(int a1, int a2, int a3, int a4)
{
  unsigned int *result; // r0
  std::__shared_weak_count *v5; // r4
  unsigned int v6; // r1
  _BYTE v7[4]; // [sp+8h] [bp-10h] BYREF
  unsigned int *v8; // [sp+Ch] [bp-Ch]

  result = (unsigned int *)sub_15C1BC(v7, a1 + 20, a3, a2, a4 ^ 1);
  v5 = (std::__shared_weak_count *)v8;
  if ( v8 )
  {
    result = v8 + 1;
    __dmb(0xBu);
    do
      v6 = __ldrex(result);
    while ( __strex(v6 - 1, result) );
    __dmb(0xBu);
    if ( !v6 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v5 + 8))(v5);
      return (unsigned int *)std::__shared_weak_count::__release_weak(v5);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1553ce
// SYMBOL: sub_1553CE
int __fastcall sub_1553CE(int a1, int a2)
{
  int v4; // r6
  int v5; // r1

  v4 = operator new(0x58u);
  sub_152400(v4, a1);
  v5 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = v4;
  if ( v5 )
  {
    sub_1561D2(a1 + 88);
    v4 = *(_DWORD *)(a1 + 88);
  }
  return sub_15246E(v4, a2);
}


// ======================================================================
// ADDR: 0x15b24e
// SYMBOL: sub_15B24E
int __fastcall sub_15B24E(_DWORD *a1, int a2)
{
  int result; // r0
  size_t v5; // r6
  int v6; // r4
  unsigned int v7; // r9
  void *v8; // r1
  size_t n[6]; // [sp+6h] [bp-1Ah] BYREF

  LOWORD(n[0]) = 0;
  result = sub_17D786(a2, (int)n);
  v5 = LOWORD(n[0]);
  if ( LOWORD(n[0]) )
  {
    if ( LOWORD(n[0]) >= 0xBu )
    {
      v7 = (LOWORD(n[0]) + 16) & 0xFFFFFFF0;
      v6 = operator new(v7);
      *a1 = v7 + 1;
      a1[1] = v5;
      a1[2] = v6;
    }
    else
    {
      *(_BYTE *)a1 = 2 * LOBYTE(n[0]);
      v6 = (int)a1 + 1;
    }
    sub_22178C(v6, v5);
    *(_BYTE *)(v6 + v5) = 0;
    v8 = (void *)a1[2];
    if ( !(*(unsigned __int8 *)a1 << 31) )
      v8 = (char *)a1 + 1;
    return sub_17D744(a2, v8);
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x15b2dc
// SYMBOL: sub_15B2DC
int sub_15B2DC(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 2047, a3, va);
}


// ======================================================================
