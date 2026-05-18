// ADDR: 0xaf7ec
// SYMBOL: sub_AF7EC
int __fastcall sub_AF7EC(const char *a1, int a2, float a3)
{
  const char *v3; // r3
  float v4; // s0
  int v5; // r0
  int v7; // t1
  const char *v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r2
  int v12; // r3
  float v13; // s4
  int v14; // s0
  const char *v15; // r3
  char v17; // [sp+Bh] [bp-4Dh] BYREF
  char s[64]; // [sp+Ch] [bp-4Ch] BYREF

  v3 = a1;
  v4 = a3;
  v5 = *(unsigned __int8 *)a1;
  if ( v5 )
  {
    while ( v5 != 37 || v3[1] == 37 )
    {
      if ( v5 == 37 )
        ++v3;
      v7 = *(unsigned __int8 *)++v3;
      v5 = v7;
      if ( !v7 )
        return LODWORD(v4);
    }
    sub_886C0(s, 64, v3, v3, a3);
    v8 = &v17;
    do
    {
      v10 = *(unsigned __int8 *)++v8;
      v9 = v10;
    }
    while ( v10 == 32 );
    if ( (a2 & 0xFFFFFFFE) == 8 )
    {
      v4 = atof(v8);
    }
    else
    {
      v11 = (v9 == 45) + (v8[v9 == 45] == 43);
      v12 = (unsigned __int8)v8[v11];
      if ( (unsigned int)(v12 - 48) > 9 )
      {
        v4 = 0.0;
      }
      else
      {
        v13 = 0.0;
        do
        {
          v14 = v12 - 48;
          v15 = &v8[v11++];
          v12 = *((unsigned __int8 *)v15 + 1);
          v4 = (float)v14 + (float)(v13 * 10.0);
          v13 = v4;
        }
        while ( (unsigned int)(v12 - 48) < 0xA );
      }
      if ( v9 == 45 )
        v4 = -v4;
    }
  }
  return LODWORD(v4);
}


// ======================================================================
