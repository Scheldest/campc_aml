// ADDR: 0x12ab58
// SYMBOL: sub_12AB58
_DWORD *__fastcall sub_12AB58(_DWORD *result, int a2, int a3)
{
  result[2] = a3;
  *result = &off_22D8F0;
  result[1] = a2;
  return result;
}


// ======================================================================
// ADDR: 0x12b4c0
// SYMBOL: sub_12B4C0
bool __fastcall sub_12B4C0(int a1)
{
  int v2; // r9
  _DWORD *v3; // r6
  size_t v4; // r2
  char *v5; // r4
  int v6; // r5
  int v7; // r0
  int v8; // r4
  int v9; // r0
  int v10; // r2
  int v13; // [sp+8h] [bp-38h] BYREF
  int v14; // [sp+Ch] [bp-34h] BYREF
  int v15; // [sp+10h] [bp-30h] BYREF
  int v16; // [sp+14h] [bp-2Ch] BYREF
  int v17; // [sp+18h] [bp-28h] BYREF
  int v18; // [sp+1Ch] [bp-24h] BYREF
  int v19; // [sp+20h] [bp-20h] BYREF
  _DWORD v20[7]; // [sp+24h] [bp-1Ch] BYREF

  v2 = sub_167F4C(a1);
  sub_17513C(*(_DWORD *)(v2 + 140), v20, &v19, &v18, &v17);
  v3 = (_DWORD *)off_26370C(v19, v18, 8 * v17);
  off_263714(v3);
  if ( !v3 )
    return 0;
  if ( (int)v3[2] >= 1 )
  {
    v5 = (char *)v3[5];
    v4 = v3[4];
    v6 = 0;
    do
    {
      j_memcpy(v5, (const void *)(v20[0] + v4 * v6), v4);
      v4 = v3[4];
      ++v6;
      v5 += v4;
    }
    while ( v6 < v3[2] );
  }
  off_263748(v3, 4, &v16, &v15, &v14, &v13);
  v7 = off_2636C4(v16, v15, v14, v13);
  v8 = v7;
  *(_DWORD *)(a1 + 28) = v7;
  if ( v7 )
  {
    v9 = off_26373C(v7, v3);
    v10 = *(_DWORD *)(v2 + 140);
    *(_DWORD *)(a1 + 28) = v9;
    *(_DWORD *)(v10 + 8) = v9;
    off_263710(v3);
  }
  return v8 != 0;
}


// ======================================================================
// ADDR: 0x1677f8
// SYMBOL: sub_1677F8
bool __fastcall sub_1677F8(const char *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // r0

  LODWORD(v10) = strcmp(a1, "1.71 WIP");
  HIDWORD(v10) = a6 ^ 0x14 | a2 ^ 0x1510 | a3 ^ 0x3AC | a4 ^ 8 | a5 ^ 0x10 | a7 ^ 2;
  return v10 == 0;
}


// ======================================================================
// ADDR: 0x16784c
// SYMBOL: sub_16784C
int __fastcall sub_16784C(int a1)
{
  int v2; // r5

  if ( dword_381B58 )
    ++*(_DWORD *)(dword_381B58 + 880);
  v2 = off_2390AC(15176, dword_381B60);
  sub_1678A8(v2, a1);
  if ( !dword_381B58 )
    dword_381B58 = v2;
  sub_167E3C(v2);
  return v2;
}


// ======================================================================
// ADDR: 0x174fc6
// SYMBOL: sub_174FC6
int __fastcall sub_174FC6(int result)
{
  *(_DWORD *)(result + 20) = 3;
  *(_DWORD *)(result + 24) = 1;
  *(_BYTE *)(result + 8) = 1;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 1065353216;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 2139095039;
  *(_BYTE *)(result + 28) = 0;
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 40) = 0LL;
  *(_DWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 72) = 0LL;
  *(_QWORD *)(result + 80) = 0LL;
  *(_QWORD *)(result + 88) = 0LL;
  *(_QWORD *)(result + 96) = 0LL;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 60) = 0;
  *(_DWORD *)(result + 108) = 0;
  *(_DWORD *)(result + 112) = 0;
  *(_DWORD *)(result + 104) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x17542c
// SYMBOL: sub_17542C
int __fastcall sub_17542C(int a1, const char *a2, const void *a3, const void *a4, const void *a5)
{
  int v9; // r4
  void *v10; // r0
  const void *v11; // r9
  const char *v12; // r0
  const char *v13; // r3
  int v14; // r1
  bool v15; // zf
  char dest[116]; // [sp+8h] [bp-110h] BYREF
  size_t v18; // [sp+7Ch] [bp-9Ch] BYREF
  const void *src[38]; // [sp+80h] [bp-98h] BYREF

  v9 = 0;
  v18 = 0;
  v10 = sub_165694(a2, "rb", &v18, 0);
  if ( v10 )
  {
    v11 = v10;
    if ( a4 )
      j_memcpy(dest, a4, sizeof(dest));
    else
      sub_174FC6((int)dest);
    if ( !dest[72] )
    {
      v12 = &a2[strlen(a2)];
      do
      {
        v13 = v12;
        if ( v12 <= a2 )
          break;
        --v12;
        v14 = *((unsigned __int8 *)v13 - 1);
        v15 = v14 == 92;
        if ( v14 != 92 )
          v15 = v14 == 47;
      }
      while ( !v15 );
      sub_1655A8(&dest[72], 40, "%s, %.0fpx", v13, *(float *)&a3);
    }
    j_memcpy(src, dest, 0x74u);
    src[4] = a3;
    src[0] = v11;
    src[1] = (const void *)v18;
    if ( a5 )
      src[12] = a5;
    return sub_1751CE(a1, src);
  }
  return v9;
}


// ======================================================================
