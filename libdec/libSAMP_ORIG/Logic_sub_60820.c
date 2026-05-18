// ADDR: 0x60b0c
// SYMBOL: sub_60B0C
int __fastcall sub_60B0C(_DWORD *a1, int a2, _DWORD *a3)
{
  const char *v6; // r3
  const char *v7; // r4
  __int64 v9; // [sp+10h] [bp-30h] BYREF
  __int64 v10; // [sp+18h] [bp-28h]
  int v11; // [sp+24h] [bp-1Ch]

  v9 = 0LL;
  v10 = 0LL;
  if ( dladdr(a1, &v9) )
  {
    v6 = "unknown symbol";
    v7 = "unknown file";
    if ( (_DWORD)v9 )
      v7 = (const char *)v9;
    if ( (_DWORD)v10 )
      v6 = (const char *)v10;
    _android_log_print(4, "Memory", "PLT Hooking %s (0x%X) from %s (0x%X)", v6, HIDWORD(v10), v7, HIDWORD(v9));
  }
  if ( sub_AF9C0(a1, 4096, 7) )
    sub_AF9C0(a1, 4096, 3);
  else
    _android_log_print(4, "Memory", "protectAddr (_PROT_RWX_) failed: 0x%X -> using _PROT_RW_", a1);
  if ( a3 )
    *a3 = *a1;
  *a1 = a2;
  return v11;
}


// ======================================================================
// ADDR: 0x60bf6
// SYMBOL: sub_60BF6
int64x2_t *__fastcall sub_60BF6(int64x2_t *result)
{
  int64x2_t v1; // q9
  unsigned __int8 *v2; // r3
  int64x2_t v3; // q8
  unsigned __int8 v4; // r2
  unsigned __int8 v5; // r2

  if ( result[1].n128_u8[3] )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v2 = &result[1].n128_u8[1];
    v3 = veorq_s64(*result, v1);
    v4 = result[1].n128_u8[2];
    result[1].n128_u8[3] ^= 0x5Au;
    result[1].n128_u8[2] = v4 ^ 0x5A;
    *result++ = v3;
    v5 = result->n128_u8[0];
    *v2 ^= 0x5Au;
    result->n128_u8[0] = v5 ^ 0x5A;
  }
  return result;
}


// ======================================================================
// ADDR: 0xaf9c0
// SYMBOL: sub_AF9C0
int __fastcall sub_AF9C0(int a1, int a2, int a3)
{
  int v4; // r4
  int v6; // r6
  int v7; // r4
  int v8; // r4
  int v9; // r0

  v4 = a1 + a2 - 1;
  v6 = sysconf(40);
  v7 = v4 & -sysconf(40);
  v8 = v7 - (-sysconf(40) & a1);
  v9 = sysconf(40);
  return mprotect((void *)(-v6 & a1), v8 + v9, a3);
}


// ======================================================================
