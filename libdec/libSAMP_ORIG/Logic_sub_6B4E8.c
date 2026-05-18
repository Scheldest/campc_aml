// ADDR: 0x691d4
// SYMBOL: sub_691D4
int sub_691D4()
{
  int v0; // r0
  int v2; // r0

  v0 = sub_68E3C();
  if ( v0 )
    return sub_69070(v0);
  v2 = (unsigned __int8)byte_1A4264;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4264) )
  {
    byte_1A4262 = 90;
    word_1A4260 = 11316;
    dword_1A425C = 1064973588;
    _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A425C, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A4264);
  }
  if ( byte_1A4262 )
  {
    byte_1A4262 ^= 0x5Au;
    LOBYTE(dword_1A425C) = dword_1A425C ^ 0x5A;
    BYTE1(dword_1A425C) ^= 0x5Au;
    BYTE2(dword_1A425C) ^= 0x5Au;
    LOBYTE(word_1A4260) = word_1A4260 ^ 0x5A;
    HIBYTE(dword_1A425C) ^= 0x5Au;
    HIBYTE(word_1A4260) ^= 0x5Au;
  }
  return sub_10C158(4, "SAMP_ORIG", &dword_1A425C);
}


// ======================================================================
// ADDR: 0x86dee
// SYMBOL: sub_86DEE
int __fastcall sub_86DEE(_DWORD *a1, void *dest, size_t a3)
{
  int v4; // r0
  int v5; // r5

  v4 = a1[2];
  v5 = 8 * a3;
  if ( v4 << 29 )
    return sub_86E30((int)a1, (int)dest);
  if ( v4 + v5 > *a1 )
    return 0;
  j_memcpy(dest, (const void *)(a1[3] + (v4 >> 3)), a3);
  a1[2] += v5;
  return 1;
}


// ======================================================================
// ADDR: 0x877b0
// SYMBOL: sub_877B0
int sub_877B0()
{
  int v1; // r4

  if ( dword_1ABEC8 )
    return dword_1ABEC8;
  v1 = operator new(0x18u);
  sub_877E0();
  dword_1ABEC8 = v1;
  return v1;
}


// ======================================================================
// ADDR: 0x878fc
// SYMBOL: sub_878FC
int __fastcall sub_878FC(int a1, _BYTE *a2, signed int a3, int *a4, int a5)
{
  int v8; // r6
  int v9; // r3
  int v10; // r4
  int v11; // r5
  int v12; // r6
  int v13; // r5
  int *v14; // r9
  signed int v15; // r0
  unsigned __int16 v17; // [sp+6h] [bp-22h] BYREF

  if ( !*(_BYTE *)(a1 + 20) || *(_DWORD *)(a1 + 16) != a5 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    if ( !v8 )
      return 0;
    v9 = v8 - 1;
    v10 = 0;
    v11 = v8 / 2;
    while ( 1 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)a1 + 8 * v11);
      if ( v12 == a5 )
        break;
      if ( v12 <= a5 )
        v10 = v11 + 1;
      else
        v9 = v11 - 1;
      v11 = v10 + (v9 - v10) / 2;
      if ( v9 < v10 )
        return 0;
    }
    *(_DWORD *)(a1 + 12) = v11;
    *(_DWORD *)(a1 + 16) = a5;
    *(_BYTE *)(a1 + 20) = 1;
  }
  v13 = 0;
  v14 = *(int **)(*(_DWORD *)a1 + 8 * *(_DWORD *)(a1 + 12) + 4);
  *a2 = 0;
  if ( sub_86FF0(a4, &v17, 16, 1) )
  {
    v13 = 0;
    if ( *a4 - a4[2] >= v17 )
    {
      v15 = sub_87618(v14, (int)a4, v17, a3, (int)a2);
      if ( v15 >= a3 )
        v15 = a3 - 1;
      a2[v15] = 0;
      return 1;
    }
  }
  return v13;
}


// ======================================================================
