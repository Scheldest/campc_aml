// ADDR: 0x152ac0
// SYMBOL: sub_152AC0
int __fastcall sub_152AC0(int a1, int a2, int a3)
{
  __int16 v6; // r0
  _BYTE v8[278]; // [sp+8h] [bp-128h] BYREF
  _WORD v9[9]; // [sp+11Eh] [bp-12h] BYREF

  sub_17D4A8(v8);
  LOBYTE(v9[0]) = -4;
  sub_17D628(v8, v9, 8, 1);
  v6 = *(_WORD *)(a1 + 82) + 1;
  *(_WORD *)(a1 + 82) = v6;
  v9[0] = v6;
  sub_17D628(v8, v9, 16, 1);
  LOBYTE(v9[0]) = *(_BYTE *)(a1 + 5);
  sub_17D628(v8, v9, 8, 1);
  if ( a3 )
    sub_17D566(v8, a2, a3);
  (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(*(_DWORD *)a1 + 16) + 32))(
    *(_DWORD *)(*(_DWORD *)a1 + 16),
    v8,
    1,
    7,
    5);
  return sub_17D542(v8);
}


// ======================================================================
// ADDR: 0x154312
// SYMBOL: sub_154312
void __fastcall sub_154312(int *a1, _DWORD *a2, const void *a3)
{
  int v4; // r5
  int v7; // r1
  unsigned int v8; // r0
  char *v9; // r6
  char *v10; // r0
  void *v11; // [sp+4h] [bp-2Ch] BYREF
  char *v12; // [sp+8h] [bp-28h]
  char *v13; // [sp+Ch] [bp-24h]

  v4 = *a1;
  v7 = 8323580;
  v8 = 266354561 * ((a1[1] - *a1) >> 2) + 1;
  if ( v8 > 0x7F01FC )
    std::__vector_base_common<true>::__throw_length_error(a1);
  if ( v8 <= 532709122 * ((a1[2] - v4) >> 2) )
    v8 = 532709122 * ((a1[2] - v4) >> 2);
  if ( (unsigned int)(266354561 * ((a1[2] - v4) >> 2)) < 0x3F80FE )
    v7 = v8;
  sub_1543D4(&v11, v7);
  v9 = v13;
  v10 = v13;
  *(_DWORD *)v13 = *a2;
  j_memcpy(v10 + 4, a3, 0x200u);
  v13 = v9 + 516;
  sub_15442C(a1, &v11);
  if ( v13 != v12 )
    v13 += 516 * ~((v13 - v12 - 516) / 0x204u);
  if ( v11 )
    operator delete(v11);
}


// ======================================================================
// ADDR: 0x15bc96
// SYMBOL: sub_15BC96
unsigned int __fastcall sub_15BC96(unsigned int *a1, unsigned int a2, size_t a3, _DWORD *a4, void *dest)
{
  if ( *a1 <= a2 )
  {
    a2 = 0;
  }
  else if ( a3 + a2 > *a1 )
  {
    *a4 = dest;
    return sub_15BCC8((int)a1, a2, a3, dest);
  }
  *a4 = a1[2] + a2;
  return a2 + a3;
}


// ======================================================================
// ADDR: 0x15e31e
// SYMBOL: sub_15E31E
bool __fastcall sub_15E31E(int a1)
{
  return j_opus_repacketizer_cat(*(_DWORD *)(a1 + 4)) == 0;
}


// ======================================================================
// ADDR: 0x15e330
// SYMBOL: sub_15E330
int __fastcall sub_15E330(int a1)
{
  int v2; // r5

  v2 = j_opus_repacketizer_out(*(_DWORD *)(a1 + 4));
  j_opus_repacketizer_init(*(_DWORD *)(a1 + 4));
  return v2;
}


// ======================================================================
// ADDR: 0x15e348
// SYMBOL: sub_15E348
int __fastcall sub_15E348(int a1)
{
  return j_opus_repacketizer_init(*(_DWORD *)(a1 + 4));
}


// ======================================================================
// ADDR: 0x15e350
// SYMBOL: sub_15E350
int __fastcall sub_15E350(_DWORD *a1)
{
  int result; // r0
  int v2; // r4
  void *exception; // r5

  result = j_opus_encode(*a1);
  v2 = result;
  if ( result <= -1 )
  {
    exception = j___cxa_allocate_exception(0x18u);
    sub_15E3A4(exception, "Opus encode", v2);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'OpusExceptionEncode, (void (*)(void *))sub_15E16C);
  }
  return result;
}


// ======================================================================
