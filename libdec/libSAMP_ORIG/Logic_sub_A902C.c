// ADDR: 0xaf538
// SYMBOL: sub_AF538
int __fastcall sub_AF538(const char *a1, int a2, int a3)
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
      return (unsigned int)atof(v8);
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
