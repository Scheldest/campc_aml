// ADDR: 0x108b88
// SYMBOL: sub_108B88
unsigned int __fastcall sub_108B88(__int64 a1)
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
