// ADDR: 0x7153c
// SYMBOL: sub_7153C
_DWORD *__fastcall sub_7153C(_DWORD *result, int a2, int a3)
{
  result[2] = a3;
  *result = &off_1105AC;
  result[1] = a2;
  return result;
}


// ======================================================================
// ADDR: 0x72050
// SYMBOL: sub_72050
_DWORD *__fastcall sub_72050(_DWORD *a1)
{
  void *v2; // r0
  const void *v3; // r1
  int v4; // r5

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (void *)sub_885E4(0x2000);
  v3 = (const void *)a1[2];
  v4 = (int)v2;
  if ( v3 )
  {
    j_memcpy(v2, v3, 4 * *a1);
    sub_88614(a1[2]);
  }
  *a1 = 2048;
  a1[1] = 2048;
  a1[2] = v4;
  sub_10967C(v4, 0x2000u);
  return a1;
}


// ======================================================================
// ADDR: 0x720a0
// SYMBOL: sub_720A0
bool __fastcall sub_720A0(int a1)
{
  int v2; // r0
  int v3; // r9
  _DWORD *v4; // r6
  size_t v5; // r2
  char *v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r2
  int v12; // r4
  int v14; // [sp+Ch] [bp-3Ch] BYREF
  int v15; // [sp+10h] [bp-38h] BYREF
  int v16; // [sp+14h] [bp-34h] BYREF
  int v17; // [sp+18h] [bp-30h] BYREF
  int v18; // [sp+1Ch] [bp-2Ch] BYREF
  int v19; // [sp+20h] [bp-28h] BYREF
  int v20; // [sp+24h] [bp-24h] BYREF
  int v21; // [sp+28h] [bp-20h] BYREF

  v2 = _android_log_print(4, "SAMP_ORIG", "ImGuiWrapper::createFontTexture");
  v3 = sub_8C514(v2);
  sub_9E6E4(*(_DWORD *)(v3 + 140), &v21, &v20, &v19, &v18);
  v4 = (_DWORD *)off_1175B0(v20, v19, 8 * v18);
  off_1175B8(v4);
  if ( v4 )
  {
    if ( (int)v4[2] >= 1 )
    {
      v6 = (char *)v4[5];
      v5 = v4[4];
      v7 = 0;
      do
      {
        j_memcpy(v6, (const void *)(v21 + v5 * v7), v5);
        v5 = v4[4];
        ++v7;
        v6 += v5;
      }
      while ( v7 < v4[2] );
    }
    off_1175EC(v4, 4, &v17, &v16, &v15, &v14);
    v8 = off_117568(v17, v16, v15, v14);
    v9 = v8;
    *(_DWORD *)(a1 + 32) = v8;
    if ( v8 )
    {
      v10 = off_1175E0(v8, v4);
      v11 = *(_DWORD *)(v3 + 140);
      *(_DWORD *)(a1 + 32) = v10;
      *(_DWORD *)(v11 + 8) = v10;
      off_1175B4(v4);
      _android_log_print(4, "SAMP_ORIG", "Atlas width %d, height %d", v20, v19);
    }
    else
    {
      _android_log_print(4, "SAMP_ORIG", "font raster pointer 0x%x", 0);
    }
    return v9 != 0;
  }
  else
  {
    v12 = 0;
    _android_log_print(4, "SAMP_ORIG", "Font image pointer 0x%x", 0);
  }
  return v12;
}


// ======================================================================
// ADDR: 0x88614
// SYMBOL: sub_88614
int __fastcall sub_88614(int a1)
{
  if ( a1 && dword_1ACF68 )
    --*(_DWORD *)(dword_1ACF68 + 880);
  return off_11724C();
}


// ======================================================================
// ADDR: 0x8bc10
// SYMBOL: sub_8BC10
bool __fastcall sub_8BC10(const char *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v10; // r0

  LODWORD(v10) = strcmp(a1, "1.71");
  HIDWORD(v10) = a6 ^ 0x14 | a2 ^ 0x1510 | a3 ^ 0x3AC | a4 ^ 8 | a5 ^ 0x10 | a7 ^ 2;
  return v10 == 0;
}


// ======================================================================
// ADDR: 0x8bc64
// SYMBOL: sub_8BC64
int __fastcall sub_8BC64(int a1)
{
  int v2; // r5

  if ( dword_1ACF68 )
    ++*(_DWORD *)(dword_1ACF68 + 880);
  v2 = off_117248(15176, dword_1ACF70);
  sub_8BCC0(v2, a1);
  if ( !dword_1ACF68 )
    dword_1ACF68 = v2;
  sub_8C3A4(v2);
  return v2;
}


// ======================================================================
// ADDR: 0x8c550
// SYMBOL: sub_8C550
int sub_8C550()
{
  return dword_1ACF68 + 7204;
}


// ======================================================================
// ADDR: 0x9e662
// SYMBOL: sub_9E662
int __fastcall sub_9E662(int result)
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
// ADDR: 0x9ea24
// SYMBOL: sub_9EA24
void *sub_9EA24()
{
  return &unk_53880;
}


// ======================================================================
// ADDR: 0x9eb08
// SYMBOL: sub_9EB08
int __fastcall sub_9EB08(int a1, const char *a2, const void *a3, const void *a4, const void *a5)
{
  int v9; // r5
  void *v10; // r0
  const void *v11; // r9
  const char *v12; // r0
  const char *v13; // r3
  int v14; // r1
  bool v15; // zf
  size_t v17; // [sp+Ch] [bp-11Ch] BYREF
  _QWORD dest[15]; // [sp+10h] [bp-118h] BYREF
  const void *src[29]; // [sp+88h] [bp-A0h] BYREF

  v9 = 0;
  v17 = 0;
  v10 = sub_8874C(a2, "rb", &v17, 0);
  if ( !v10 )
    return v9;
  v11 = v10;
  if ( !a4 )
  {
    memset(&dest[4], 0, 24);
    memset(&dest[9], 0, 44);
    BYTE4(dest[3]) = 0;
    LODWORD(dest[7]) = 2139095039;
    LODWORD(dest[3]) = 1;
    LOBYTE(dest[1]) = 1;
    HIDWORD(dest[1]) = 0;
    dest[2] = 0x300000000LL;
    dest[0] = 0LL;
    dest[8] = 0x3F80000000000000LL;
    BYTE4(dest[7]) = 0;
    goto LABEL_6;
  }
  j_memcpy(dest, a4, 0x74u);
  if ( !LOBYTE(dest[9]) )
  {
LABEL_6:
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
    sub_886C0((char *)&dest[9], 40, "%s, %.0fpx", v13, *(float *)&a3);
  }
  j_memcpy(src, dest, sizeof(src));
  src[4] = a3;
  src[0] = v11;
  src[1] = (const void *)v17;
  if ( a5 )
    src[12] = a5;
  return sub_9E8A4(a1, src);
}


// ======================================================================
// ADDR: 0xa33b8
// SYMBOL: sub_A33B8
void *sub_A33B8()
{
  return &unk_53886;
}


// ======================================================================
// ADDR: 0xa33c4
// SYMBOL: sub_A33C4
void *sub_A33C4()
{
  return &unk_53894;
}


// ======================================================================
// ADDR: 0xa33d0
// SYMBOL: sub_A33D0
__int16 *sub_A33D0()
{
  int v0; // r2
  int v1; // r1
  __int16 *v2; // r0
  char *v3; // r3

  if ( !word_1ACFF8 )
  {
    v0 = -3892;
    v1 = 19968;
    *(_QWORD *)&word_1ACFF8 = unk_531F8;
    unk_1AD000 = unk_53200;
    v2 = &word_1AD008;
    do
    {
      v3 = (char *)&unk_538AE + v0;
      v0 += 2;
      v1 += *((unsigned __int16 *)v3 + 1946);
      *v2 = v1;
      v2 += 2;
      *(v2 - 1) = v1;
    }
    while ( v0 );
    *v2 = 0;
  }
  return &word_1ACFF8;
}


// ======================================================================
// ADDR: 0xa3428
// SYMBOL: sub_A3428
void *sub_A3428()
{
  return &unk_547E2;
}


// ======================================================================
// ADDR: 0xa3434
// SYMBOL: sub_A3434
int __fastcall sub_A3434(int result, unsigned __int16 *a2)
{
  int v2; // r2
  int v3; // t1
  unsigned int v4; // lr
  int v5; // r3
  int v6; // r4
  char v7; // r6

  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v4 = a2[1];
      if ( (unsigned __int16)v2 <= v4 )
      {
        v5 = *(_DWORD *)(result + 8);
        do
        {
          v6 = (unsigned __int16)v2 >> 5;
          v7 = v2++ & 0x1F;
          *(_DWORD *)(v5 + 4 * v6) |= 1 << v7;
        }
        while ( (unsigned __int16)v2 <= v4 );
      }
      v3 = a2[2];
      a2 += 2;
      v2 = v3;
    }
    while ( v3 );
  }
  return result;
}


// ======================================================================
// ADDR: 0xa347e
// SYMBOL: sub_A347E
int __fastcall sub_A347E(int a1, int *a2)
{
  int v4; // r5
  int v5; // r0
  __int64 v6; // r0
  int v7; // r6
  int v8; // r1
  void *v9; // r0
  const void *v10; // r1
  int v11; // r10
  int v12; // r6
  int v13; // r12
  int v14; // r5
  int v15; // r2
  void *v16; // r0
  const void *v17; // r1
  int v18; // r10
  __int64 v19; // r0
  int v20; // r6
  int v21; // r1
  void *v22; // r0
  const void *v23; // r1
  int v24; // r5
  int result; // r0

  v4 = 0;
  do
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * (v4 >> 5)) >> (v4 & 0x1F) << 31 )
    {
      v6 = *(_QWORD *)a2;
      if ( (_DWORD)v6 == HIDWORD(v6) )
      {
        v7 = v6 + 1;
        if ( (_DWORD)v6 )
          v8 = v6 + (int)v6 / 2;
        else
          v8 = 8;
        if ( v8 > v7 )
          v7 = v8;
        if ( (int)v6 < v7 )
        {
          v9 = (void *)sub_885E4(2 * v7);
          v10 = (const void *)a2[2];
          v11 = (int)v9;
          if ( v10 )
          {
            j_memcpy(v9, v10, 2 * *a2);
            sub_88614(a2[2]);
          }
          LODWORD(v6) = *a2;
          a2[1] = v7;
          a2[2] = v11;
        }
      }
      v12 = 0xFFFF;
      *(_WORD *)(a2[2] + 2 * v6) = v4;
      v13 = *a2;
      v5 = *a2 + 1;
      *a2 = v5;
      if ( v4 >= 0x10000 )
        v12 = v4;
      while ( v12 != v4 )
      {
        ++v4;
        if ( !(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * (v4 >> 5)) >> (v4 & 0x1F) << 31) )
        {
          v12 = v4 - 1;
          break;
        }
      }
      if ( v5 == a2[1] )
      {
        v14 = v13 + 2;
        if ( v5 )
          v15 = v5 + v5 / 2;
        else
          v15 = 8;
        if ( v15 > v14 )
          v14 = v15;
        if ( v5 < v14 )
        {
          v16 = (void *)sub_885E4(2 * v14);
          v17 = (const void *)a2[2];
          v18 = (int)v16;
          if ( v17 )
          {
            j_memcpy(v16, v17, 2 * *a2);
            sub_88614(a2[2]);
          }
          v5 = *a2;
          a2[1] = v14;
          a2[2] = v18;
        }
      }
      *(_WORD *)(a2[2] + 2 * v5) = v12;
      ++*a2;
    }
    else
    {
      v12 = v4;
    }
    v4 = v12 + 1;
  }
  while ( v12 < 0xFFFF );
  v19 = *(_QWORD *)a2;
  if ( (_DWORD)v19 == HIDWORD(v19) )
  {
    v20 = v19 + 1;
    if ( (_DWORD)v19 )
      v21 = v19 + (int)v19 / 2;
    else
      v21 = 8;
    if ( v21 > v20 )
      v20 = v21;
    if ( (int)v19 < v20 )
    {
      v22 = (void *)sub_885E4(2 * v20);
      v23 = (const void *)a2[2];
      v24 = (int)v22;
      if ( v23 )
      {
        j_memcpy(v22, v23, 2 * *a2);
        sub_88614(a2[2]);
      }
      LODWORD(v19) = *a2;
      a2[1] = v20;
      a2[2] = v24;
    }
  }
  *(_WORD *)(a2[2] + 2 * v19) = 0;
  result = *a2 + 1;
  *a2 = result;
  return result;
}


// ======================================================================
