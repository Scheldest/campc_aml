// ADDR: 0x6ebd0
// SYMBOL: sub_6EBD0
int sub_6EBD0(int a1, int a2, int a3, ...)
{
  int v4; // [sp+8h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  _vsprintf_chk(a1, 0, 255, "%sSAMP/settings.json", (const char *)va);
  return v4;
}


// ======================================================================
// ADDR: 0x6ec24
// SYMBOL: sub_6EC24
int __fastcall sub_6EC24(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  _DWORD *v6; // r6
  int v7; // r8
  _DWORD *v8; // r0

  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v5 = a1 + 28;
  *(_QWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v5 + 16) = a3;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 16) = a2;
  if ( !a2 )
  {
    v6 = (_DWORD *)operator new(0xCu);
    *v6 = 0x10000;
    v7 = operator new(1u);
    v6[1] = v7;
    v8 = malloc(0x20u);
    v8[4] = 0;
    v6[2] = v8;
    v8[5] = 0;
    v8[6] = 0;
    *((_BYTE *)v8 + 12) = 1;
    *v8 = v8 + 4;
    v8[1] = v7;
    v8[2] = 1;
    *(_DWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 20) = v6;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x6ecb0
// SYMBOL: sub_6ECB0
int __fastcall sub_6ECB0(int a1, int a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int (*v6)(); // r0
  int v7; // r0
  __int16 v8; // r12
  __int64 v9; // d16
  int v10; // r3
  __int16 v11; // r1
  void *v12; // r0
  void *v13; // r0
  _DWORD v15[2]; // [sp+0h] [bp-38h] BYREF
  int v16; // [sp+8h] [bp-30h] BYREF
  __int64 v17; // [sp+Ch] [bp-2Ch]
  __int64 v18; // [sp+14h] [bp-24h]
  __int64 v19; // [sp+1Ch] [bp-1Ch]
  __int64 v20; // [sp+24h] [bp-14h]

  v3 = *(_DWORD *)(a1 + 24);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 256LL;
  v20 = 0x200000000LL;
  v16 = v3;
  sub_6EE32(v15, &v16, a2, a1);
  v4 = v15[0];
  v5 = v15[1];
  v6 = sub_6F070;
  *(_DWORD *)(a1 + 48) = v15[0];
  *(_DWORD *)(a1 + 52) = v5;
  if ( v4 )
    v6 = 0;
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v7 - 16;
    if ( a1 != v7 - 16 )
    {
      v8 = *(_WORD *)(v7 - 2);
      v9 = *(_QWORD *)(v7 - 16);
      v10 = *(_DWORD *)(v7 - 8);
      v11 = *(_WORD *)(v7 - 4);
      *(_WORD *)(v7 - 2) = 0;
      *(_WORD *)(a1 + 12) = v11;
      *(_DWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = v9;
      *(_WORD *)(a1 + 14) = v8;
    }
  }
  v12 = *(void **)(a1 + 32);
  *(_DWORD *)(a1 + 36) = v12;
  free(v12);
  v13 = (void *)HIDWORD(v17);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  free(v13);
  if ( (_DWORD)v17 )
    operator delete((void *)v17);
  return a1;
}


// ======================================================================
// ADDR: 0x6ede2
// SYMBOL: sub_6EDE2
void __fastcall sub_6EDE2(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0
  unsigned int v4; // r1
  int v5; // r2
  int v6; // r3
  void *v7; // r5

  v2 = *(_DWORD **)(a1 + 20);
  if ( v2 )
  {
    v3 = (_DWORD *)v2[2];
    if ( v3 )
    {
      v4 = v3[2];
      if ( v4 < 2 )
      {
        while ( 1 )
        {
          a2 = (_DWORD *)*v3;
          v5 = *(_DWORD *)(*v3 + 8);
          if ( !v5 )
            break;
          *v3 = v5;
          free(a2);
          v3 = (_DWORD *)v2[2];
        }
        v6 = *((unsigned __int8 *)v3 + 12);
        v7 = (void *)v3[1];
        a2[1] = 0;
        if ( v6 )
          free(v3);
        if ( v7 )
          operator delete(v7);
      }
      else
      {
        a2 = (_DWORD *)(v4 - 1);
        v3[2] = a2;
      }
    }
    operator delete(v2, (const std::nothrow_t *)a2);
  }
}


// ======================================================================
// ADDR: 0x108b48
// SYMBOL: sub_108B48
double __fastcall sub_108B48(double a1)
{
  int v1; // s0

  v1 = HIDWORD(a1);
  WORD2(a1) = 0;
  HIWORD(a1) = 17200;
  return (double)v1 * 4294967300.0 + -4.50359963e15 + a1;
}


// ======================================================================
// ADDR: 0x108cb0
// SYMBOL: sub_108CB0
double __fastcall sub_108CB0(unsigned int a1, unsigned int a2)
{
  return COERCE_DOUBLE(a2 | 0x4530000000000000LL) + -1.93428131e25 + COERCE_DOUBLE(a1 | 0x4330000000000000LL);
}


// ======================================================================
