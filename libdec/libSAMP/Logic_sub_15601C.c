// ADDR: 0x220cd8
// SYMBOL: sub_220CD8
unsigned int __fastcall sub_220CD8(__int64 a1)
{
  unsigned __int64 v1; // r2
  int v2; // lr
  unsigned int v3; // r0
  unsigned int v4; // r12
  unsigned int v5; // r1
  int v7; // r2
  int v8; // r4
  char v9; // r6
  bool v10; // nf
  char v11; // r7
  char v12; // r0
  unsigned int v13; // r5
  int v14; // r6
  _BOOL4 v15; // r5
  __int64 v16; // kr00_8

  if ( !a1 )
    return 0;
  v2 = SHIDWORD(a1) >> 31;
  v1 = abs64(a1);
  v3 = __clz(v1) + 32;
  if ( HIDWORD(v1) )
    v3 = __clz(HIDWORD(v1));
  v4 = 63 - v3;
  if ( v3 > 0x27 )
  {
    v7 = (_DWORD)v1 << (v3 - 40);
    if ( (int)(v3 - 72) >= 0 )
      v7 = 0;
  }
  else
  {
    v5 = 64 - v3;
    if ( v3 != 38 )
    {
      if ( v5 == 25 )
      {
        v1 *= 2LL;
      }
      else
      {
        v8 = 6 - v3;
        v9 = v3 + 26;
        v11 = v3 - 6;
        v10 = (int)(v3 - 6) < 0;
        v12 = 38 - v3;
        v13 = ((unsigned int)v1 >> v8) | (HIDWORD(v1) << v9);
        v14 = (_DWORD)v1 << v9;
        if ( !v10 )
        {
          v13 = (_DWORD)v1 << v11;
          v14 = 0;
        }
        v15 = (v14 | v13) != 0;
        LODWORD(v1) = ((unsigned int)v1 >> v12) | (HIDWORD(v1) << (32 - v12));
        if ( v8 >= 0 )
          LODWORD(v1) = HIDWORD(v1) >> v8;
        HIDWORD(v1) >>= v12;
        LODWORD(v1) = v1 | v15;
        if ( v8 >= 0 )
          HIDWORD(v1) = 0;
      }
    }
    v16 = (v1 | ((unsigned int)v1 >> 2) & 1) + 1;
    v7 = v16 >> 2;
    if ( (v16 & 0x4000000) != 0 )
    {
      v7 = v16 >> 3;
      return v7 & 0x7FFFFF | v2 & 0x80000000 | ((v5 + 127) << 23);
    }
  }
  v5 = v4;
  return v7 & 0x7FFFFF | v2 & 0x80000000 | ((v5 + 127) << 23);
}


// ======================================================================
// ADDR: 0x220dfc
// SYMBOL: sub_220DFC
int __fastcall sub_220DFC(__int64 a1)
{
  unsigned int v1; // r3
  int v2; // r2
  int v3; // r12
  int v5; // r0
  int v6; // lr
  char v7; // r5
  bool v8; // nf
  char v9; // r6
  char v10; // r3
  __int64 v11; // r4
  _BOOL4 v12; // r4
  unsigned int v13; // kr00_4

  if ( !a1 )
    return 0;
  v1 = __clz(a1) + 32;
  if ( HIDWORD(a1) )
    v1 = __clz(HIDWORD(a1));
  v2 = v1 ^ 0x3F;
  if ( v1 > 0x27 )
  {
    v5 = (_DWORD)a1 << (v1 - 40);
    if ( (int)(v1 - 72) >= 0 )
      v5 = 0;
  }
  else
  {
    v3 = 64 - v1;
    if ( v1 != 38 )
    {
      if ( v3 == 25 )
      {
        a1 *= 2LL;
      }
      else
      {
        v6 = 6 - v1;
        v7 = v1 + 26;
        v9 = v1 - 6;
        v8 = (int)(v1 - 6) < 0;
        v10 = 38 - v1;
        LODWORD(v11) = ((unsigned int)a1 >> v6) | (HIDWORD(a1) << v7);
        HIDWORD(v11) = (_DWORD)a1 << v7;
        if ( !v8 )
          v11 = (unsigned int)((_DWORD)a1 << v9);
        v12 = v11 != 0;
        LODWORD(a1) = ((unsigned int)a1 >> v10) | (HIDWORD(a1) << (32 - v10));
        if ( v6 >= 0 )
          LODWORD(a1) = HIDWORD(a1) >> v6;
        HIDWORD(a1) >>= v10;
        LODWORD(a1) = a1 | v12;
        if ( v6 >= 0 )
          HIDWORD(a1) = 0;
      }
    }
    LODWORD(a1) = a1 | ((unsigned int)a1 >> 2) & 1;
    v13 = a1 + 1;
    LODWORD(a1) = (unsigned __int64)(a1 + 1) >> 32;
    if ( (v13 & 0x4000000) != 0 )
    {
      v5 = __SPAIR64__(a1, v13) >> 3;
      v2 = v3;
    }
    else
    {
      v5 = __SPAIR64__(a1, v13) >> 2;
    }
  }
  return (v5 & 0x7FFFFF | (v2 << 23)) + 1065353216;
}


// ======================================================================
