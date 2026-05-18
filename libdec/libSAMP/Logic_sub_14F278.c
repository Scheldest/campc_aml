// ADDR: 0x107c70
// SYMBOL: sub_107C70
int __fastcall sub_107C70(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r0
  __int64 v10; // d16
  __int64 v11; // d17

  *(_BYTE *)(a1 + 2528) = 1;
  sub_22178C(a1 + 2404, 0x64u);
  v6 = *(_DWORD *)(a2 + 9);
  v7 = *(_DWORD *)(a2 + 21);
  *(_DWORD *)(a1 + 2404) = *(_DWORD *)(a2 + 1);
  v8 = *(_DWORD *)(a2 + 5);
  *(_BYTE *)(a1 + 2416) = 0;
  *(_DWORD *)(a1 + 2412) = v6;
  *(_DWORD *)(a1 + 2408) = v8;
  *(_BYTE *)(a1 + 2417) = (*(_BYTE *)a2 & 8) != 0;
  *(_BYTE *)(a1 + 2418) = *(_BYTE *)a2 & 1;
  *(_DWORD *)(a1 + 2420) = *(_DWORD *)(a2 + 13);
  v9 = *(_DWORD *)(a2 + 17);
  *(_DWORD *)(a1 + 2428) = v7;
  *(_DWORD *)(a1 + 2424) = v9;
  LOBYTE(v9) = *(_BYTE *)a2;
  LOWORD(v6) = *(_WORD *)(a2 + 25);
  *(_DWORD *)(a1 + 2436) = *(_DWORD *)(a2 + 27);
  *(_WORD *)(a1 + 2440) = v6;
  *(_BYTE *)(a1 + 2432) = (v9 & 0x10) != 0;
  *(_BYTE *)(a1 + 2442) = (*(_BYTE *)a2 & 2) != 0;
  *(_BYTE *)(a1 + 2443) = (*(_BYTE *)a2 & 4) != 0;
  *(_DWORD *)(a1 + 2444) = *(unsigned __int8 *)(a2 + 31);
  *(_DWORD *)(a1 + 2448) = *(_DWORD *)(a2 + 33);
  *(_DWORD *)(a1 + 2452) = *(_DWORD *)(a2 + 37);
  v10 = *(_QWORD *)(a2 + 43);
  v11 = *(_QWORD *)(a2 + 51);
  *(_BYTE *)(a1 + 2476) = *(_BYTE *)(a2 + 32);
  *(_WORD *)(a1 + 2478) = *(_WORD *)(a2 + 41);
  *(_QWORD *)(a1 + 2480) = v10;
  *(_QWORD *)(a1 + 2488) = v11;
  *(_WORD *)(a1 + 2496) = *(_WORD *)(a2 + 59);
  *(_WORD *)(a1 + 2498) = *(_WORD *)(a2 + 61);
  *(_DWORD *)(a1 + 2468) = -1;
  *(_DWORD *)(a1 + 2464) = -1;
  *(_BYTE *)(a1 + 2501) = 0;
  *(_DWORD *)(a1 + 2472) = -1;
  sub_107D98(a1, a3);
  if ( *(_DWORD *)(a1 + 2444) == 4 )
  {
    *(_DWORD *)(a1 + 2472) = sub_108C44();
    sub_107DDC(a1);
  }
  *(_DWORD *)(a1 + 2524) = 0;
  *(_BYTE *)(a1 + 2500) = 0;
  *(_QWORD *)(a1 + 2504) = 0LL;
  *(_QWORD *)(a1 + 2512) = 0LL;
  *(_BYTE *)(a1 + 2520) = 0;
  return a1;
}


// ======================================================================
// ADDR: 0x14f668
// SYMBOL: sub_14F668
void __fastcall sub_14F668(int *a1, __int16 *a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r2
  unsigned int v8; // r0
  char *v9; // r0
  char *v10; // r1
  __int16 v11; // r2
  void *v12; // [sp+4h] [bp-24h] BYREF
  char *v13; // [sp+8h] [bp-20h]
  char *v14; // [sp+Ch] [bp-1Ch]
  char *v15; // [sp+10h] [bp-18h]
  _DWORD *v16; // [sp+14h] [bp-14h]

  v4 = *a1;
  v5 = a1[1] - v4;
  if ( v5 <= -3 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v6 = (v5 >> 1) + 1;
  v7 = a1[2];
  v16 = a1 + 2;
  v8 = v7 - v4;
  if ( v8 >= v6 )
    v6 = v8;
  if ( v8 >= 0x7FFFFFFE )
    v6 = 0x7FFFFFFF;
  if ( v6 )
  {
    if ( v6 <= -1 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v9 = (char *)operator new(2 * v6);
  }
  else
  {
    v9 = 0;
  }
  v10 = &v9[2 * (v5 >> 1)];
  v15 = &v9[2 * v6];
  v11 = *a2;
  v12 = v9;
  v13 = v10;
  *(_WORD *)v10 = v11;
  v14 = v10 + 2;
  sub_14F62C((int)a1, &v12);
  if ( v14 != v13 )
    v14 += 2 * ~((unsigned int)(v14 - v13 - 2) >> 1);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
