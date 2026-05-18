// ADDR: 0x8c564
// SYMBOL: sub_8C564
_DWORD *__fastcall sub_8C564(int a1)
{
  int v2; // r5
  __int64 v3; // r2
  int v4; // r1
  _DWORD *result; // r0
  int v6; // r3
  int v7; // r1
  float v8; // s2
  float v9; // s6
  float v10; // s0
  bool v11; // nf

  v2 = dword_1ACF68;
  sub_8C628();
  LODWORD(v3) = *(_DWORD *)(a1 + 72);
  HIDWORD(v3) = *(_DWORD *)(dword_1ACF68 + 6608);
  v4 = dword_1ACF68 + 6608;
  result = (_DWORD *)(v2 + 6584);
  *(_BYTE *)(dword_1ACF68 + 6620) = HIDWORD(v3) != (_DWORD)v3;
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    HIDWORD(v3) = 0;
    *(_WORD *)(v4 + 14) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    if ( (_DWORD)v3 )
      *(_QWORD *)(v4 + 56) = v3;
  }
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)v4 = v3;
  *(_DWORD *)(v4 + 36) = a1;
  *(_BYTE *)(v4 + 13) = 0;
  *(_BYTE *)(v4 + 16) = 0;
  if ( (_DWORD)v3 )
  {
    HIDWORD(v3) = *(_DWORD *)(v4 + 236);
    *(_DWORD *)(v4 + 4) = v3;
    if ( HIDWORD(v3) == (_DWORD)v3 || *(_DWORD *)(v4 + 248) == (_DWORD)v3 || *(_DWORD *)(v4 + 252) == (_DWORD)v3 )
    {
      v6 = 2;
    }
    else
    {
      v6 = 1;
      if ( *(_DWORD *)(v4 + 256) == (_DWORD)v3 )
        v6 = 2;
    }
    *(_DWORD *)(v4 + 40) = v6;
  }
  v7 = *(_DWORD *)(a1 + 764);
  v8 = *(float *)(v2 + 228);
  v9 = *(float *)(v7 + 16);
  v10 = *(float *)(v2 + 224) - *(float *)(v7 + 12);
  *(_BYTE *)(v2 + 6934) = 1;
  *(float *)(v2 + 6636) = v10;
  *(float *)(v2 + 6640) = v8 - v9;
  v11 = (*(_BYTE *)(a1 + 8) & 4) != 0;
  if ( (*(_BYTE *)(a1 + 8) & 4) == 0 )
    v11 = (*(_BYTE *)(*(_DWORD *)(a1 + 764) + 8) & 4) != 0;
  if ( !v11 )
    *result = a1;
  return result;
}


// ======================================================================
// ADDR: 0x8cbc8
// SYMBOL: sub_8CBC8
int sub_8CBC8()
{
  int v0; // r0
  int v1; // r2
  int *i; // r1
  int result; // r0

  v0 = *(_DWORD *)(dword_1ACF68 + 6812);
  if ( v0 < 1 )
    return 0;
  v1 = v0 + 1;
  for ( i = (int *)(*(_DWORD *)(dword_1ACF68 + 6820) + 36 * v0 - 32); ; i -= 9 )
  {
    result = *i;
    if ( *i )
    {
      if ( (*(_BYTE *)(result + 11) & 8) != 0 )
        break;
    }
    if ( (unsigned int)--v1 <= 1 )
      return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x98854
// SYMBOL: sub_98854
void *__fastcall sub_98854(int a1, int a2)
{
  int v4; // r3
  void *result; // r0
  int *v6; // r4
  int v7; // r1
  __int64 v8; // kr00_8
  int v9; // r8
  int (__fastcall *v10)(int, int); // r12
  const void *v11; // r1
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r0
  void *v16; // [sp+4h] [bp-24h]

  v4 = 9 * a1;
  result = (void *)dword_1ACF68;
  v6 = (int *)(dword_1ACF68 + 6812);
  v7 = *(_DWORD *)(dword_1ACF68 + 6816);
  v8 = *(_QWORD *)(*(_DWORD *)(dword_1ACF68 + 6820) + 4 * v4 + 4);
  if ( v7 < a1 )
  {
    if ( v7 )
      v9 = v7 + v7 / 2;
    else
      v9 = 8;
    if ( v9 <= a1 )
      v9 = a1;
    if ( v7 < v9 )
    {
      v10 = off_117248;
      ++*(_DWORD *)(dword_1ACF68 + 880);
      result = (void *)v10(36 * v9, dword_1ACF70);
      v11 = (const void *)v6[2];
      if ( v11 )
      {
        v16 = result;
        j_memcpy(result, v11, 36 * *v6);
        v13 = v6[2];
        v14 = v13 == 0;
        if ( v13 )
        {
          v12 = dword_1ACF68;
          v14 = dword_1ACF68 == 0;
        }
        if ( !v14 )
          --*(_DWORD *)(v12 + 880);
        off_11724C(v13, dword_1ACF70);
        result = v16;
      }
      v6[1] = v9;
      v6[2] = (int)result;
    }
  }
  *v6 = a1;
  if ( a2 )
  {
    if ( HIDWORD(v8) )
    {
      if ( !*(_BYTE *)(HIDWORD(v8) + 123) && (_DWORD)v8 )
        return (void *)sub_8FC24(v8, 0);
      if ( v6[28] )
      {
        v15 = HIDWORD(v8);
      }
      else
      {
        v15 = *(_DWORD *)(HIDWORD(v8) + 776);
        if ( !v15 )
          v15 = HIDWORD(v8);
      }
    }
    else
    {
      v15 = 0;
    }
    return (void *)sub_8C628(v15);
  }
  return result;
}


// ======================================================================
