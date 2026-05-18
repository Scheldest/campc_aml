// ADDR: 0xaf604
// SYMBOL: sub_AF604
int __fastcall sub_AF604(const char *a1, int a2, int a3, int a4)
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
      return sub_108A44(LODWORD(v12), HIDWORD(v12));
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
// ADDR: 0x108a44
// SYMBOL: sub_108A44
__int64 __fastcall sub_108A44(double a1)
{
  if ( a1 >= 0.0 )
    return sub_108AA0(LODWORD(a1), HIDWORD(a1));
  else
    return -sub_108AA0(COERCE_UNSIGNED_INT64(-a1), HIDWORD(COERCE_UNSIGNED_INT64(-a1)));
}


// ======================================================================
// ADDR: 0x108a74
// SYMBOL: sub_108A74
__int64 __fastcall sub_108A74(float a1)
{
  if ( a1 >= 0.0 )
    return sub_108AF0(LODWORD(a1));
  else
    return -sub_108AF0(LODWORD(a1) ^ 0x80000000);
}


// ======================================================================
