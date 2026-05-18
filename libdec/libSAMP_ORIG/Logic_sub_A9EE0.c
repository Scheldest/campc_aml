// ADDR: 0xaf6f8
// SYMBOL: sub_AF6F8
int __fastcall sub_AF6F8(const char *a1, int a2, int a3, int a4)
{
  const char *v5; // r2
  int v6; // r0
  int v8; // t1
  const char *v9; // r0
  int v10; // r1
  int v11; // t1
  double v12; // r0
  int v13; // r3
  int v14; // r5
  int v15; // r6
  const char *v16; // r8
  int v17; // r4
  char v19; // [sp+Bh] [bp-55h] BYREF
  char s[64]; // [sp+Ch] [bp-54h] BYREF

  v5 = a1;
  v6 = *(unsigned __int8 *)a1;
  if ( v6 )
  {
    while ( v6 != 37 || v5[1] == 37 )
    {
      if ( v6 == 37 )
        ++v5;
      v8 = *(unsigned __int8 *)++v5;
      v6 = v8;
      if ( !v8 )
        return a3;
    }
    sub_886C0(s, 64, v5, a4, a3, a4);
    v9 = &v19;
    do
    {
      v11 = *(unsigned __int8 *)++v9;
      v10 = v11;
    }
    while ( v11 == 32 );
    if ( (a2 & 0xFFFFFFFE) == 8 )
    {
      v12 = atof(v9);
      return sub_108AA0(LODWORD(v12), HIDWORD(v12));
    }
    else
    {
      v13 = (v9[v10 == 45] == 43) + (v10 == 45);
      v14 = (unsigned __int8)v9[v13];
      if ( (unsigned int)(v14 - 48) > 9 )
      {
        v17 = 0;
      }
      else
      {
        v15 = 0;
        do
        {
          v16 = &v9[v13++];
          v17 = 10 * v15 + v14 - 48;
          v14 = *((unsigned __int8 *)v16 + 1);
          v15 = v17;
        }
        while ( (unsigned int)(v14 - 48) < 0xA );
      }
      a3 = -v17;
      if ( v10 != 45 )
        return v17;
    }
  }
  return a3;
}


// ======================================================================
// ADDR: 0x108aa0
// SYMBOL: sub_108AA0
unsigned int __fastcall sub_108AA0(double a1)
{
  unsigned int result; // r0

  result = 0;
  if ( a1 > 0.0 )
    return (unsigned int)(a1 + (double)(unsigned int)(a1 * 2.32830644e-10) * -4294967300.0);
  return result;
}


// ======================================================================
// ADDR: 0x108af0
// SYMBOL: sub_108AF0
unsigned int __fastcall sub_108AF0(float a1)
{
  unsigned int result; // r0

  result = 0;
  if ( a1 > 0.0 )
    return (unsigned int)(a1 + (double)(unsigned int)(a1 * 2.32830644e-10) * -4294967300.0);
  return result;
}


// ======================================================================
// ADDR: 0x108ce8
// SYMBOL: sub_108CE8
int __fastcall sub_108CE8(__int64 a1)
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
// ADDR: 0x1096a4
// SYMBOL: sub_1096A4
unsigned int __fastcall sub_1096A4(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // [sp+8h] [bp-10h] BYREF

  return sub_109394(a1, a2, a3, a4, &v5);
}


// ======================================================================
