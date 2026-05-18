// ADDR: 0xab7d0
// SYMBOL: sub_AB7D0
int __fastcall sub_AB7D0(unsigned __int8 *a1, unsigned int a2)
{
  int i; // r3
  int v3; // t1
  int v4; // r2
  int v5; // r12
  _BOOL4 v6; // r3
  unsigned __int8 *v7; // r4
  _BOOL4 v8; // lr
  int v9; // r3
  unsigned int v10; // lr
  unsigned __int8 *v11; // r0
  int v12; // r3
  unsigned __int8 *v13; // r0
  int v14; // t1
  bool v15; // zf
  int result; // r0
  bool v17; // zf

  for ( i = *a1; ; i = v3 )
  {
    if ( !i )
      return a2;
    if ( i == 37 )
    {
      v4 = a1[1];
      if ( v4 != 37 )
        break;
    }
    if ( i == 37 )
      ++a1;
    v3 = *++a1;
  }
  if ( (unsigned int)(v4 - 48) <= 9 )
  {
    do
    {
      v4 = a1[2];
      ++a1;
    }
    while ( (unsigned int)(v4 - 48) < 0xA );
  }
  if ( v4 == 46 )
  {
    v5 = a1[2];
    v6 = v5 == 45;
    v7 = &a1[v6 + 2];
    v8 = *v7 == 43;
    v4 = v7[v8];
    if ( (unsigned int)(v4 - 48) > 9 )
    {
      v10 = 0;
    }
    else
    {
      v9 = v6 + v8;
      v10 = 0;
      v11 = &a1[v9];
      v12 = v4;
      v13 = v11 + 3;
      do
      {
        v14 = *v13++;
        v4 = v14;
        v10 = v12 + 10 * v10 - 48;
        v12 = v14;
      }
      while ( (unsigned int)(v14 - 48) < 0xA );
    }
    if ( v5 == 45 )
      v10 = -v10;
    if ( v10 > 0x63 )
      v10 = a2;
  }
  else
  {
    v10 = 0x7FFFFFFF;
  }
  v15 = v4 == 69;
  result = -1;
  if ( v4 != 69 )
    v15 = v4 == 101;
  if ( !v15 )
  {
    if ( v4 == 103 )
    {
      result = v10;
      if ( v10 == 0x7FFFFFFF )
        return -1;
    }
    else
    {
      v17 = v4 == 71;
      if ( v4 == 71 )
        v17 = v10 == 0x7FFFFFFF;
      if ( !v17 )
      {
        if ( v10 != 0x7FFFFFFF )
          return v10;
        return a2;
      }
      return -1;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xaf46c
// SYMBOL: sub_AF46C
int __fastcall sub_AF46C(const char *a1, int a2, int a3)
{
  const char *v4; // r2
  int v5; // r0
  int v7; // t1
  const char *v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r2
  int v12; // r4
  const char *v13; // r5
  char v15; // [sp+3h] [bp-4Dh] BYREF
  char s[64]; // [sp+4h] [bp-4Ch] BYREF

  v4 = a1;
  v5 = *(unsigned __int8 *)a1;
  if ( v5 )
  {
    while ( v5 != 37 || v4[1] == 37 )
    {
      if ( v5 == 37 )
        ++v4;
      v7 = *(unsigned __int8 *)++v4;
      v5 = v7;
      if ( !v7 )
        return a3;
    }
    sub_886C0(s, 64, v4, a3);
    v8 = &v15;
    do
    {
      v10 = *(unsigned __int8 *)++v8;
      v9 = v10;
    }
    while ( v10 == 32 );
    if ( (a2 & 0xFFFFFFFE) == 8 )
    {
      return (int)atof(v8);
    }
    else
    {
      v11 = (v9 == 45) + (v8[v9 == 45] == 43);
      v12 = (unsigned __int8)v8[v11];
      if ( (unsigned int)(v12 - 48) > 9 )
      {
        a3 = 0;
      }
      else
      {
        a3 = 0;
        do
        {
          v13 = &v8[v11++];
          a3 = v12 + 10 * a3 - 48;
          v12 = *((unsigned __int8 *)v13 + 1);
        }
        while ( (unsigned int)(v12 - 48) < 0xA );
      }
      if ( v9 == 45 )
        return -a3;
    }
  }
  return a3;
}


// ======================================================================
