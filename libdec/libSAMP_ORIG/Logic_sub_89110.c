// ADDR: 0x892e0
// SYMBOL: sub_892E0
char *__fastcall sub_892E0(int a1, char *s, int a3)
{
  int i; // r5
  int v5; // r10
  int v6; // r1
  float v7; // s0
  float v8; // s2
  int v9; // r11
  int v10; // r0
  char *v11; // r4
  char *result; // r0
  char *v13; // r6
  bool v14; // zf
  char *v15; // r0

  i = a3;
  v5 = dword_1ACF68 + 11576;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( !a3 )
  {
    if ( s != (char *)-1 )
    {
      for ( i = (int)s; i != -1; ++i )
      {
        if ( *(_BYTE *)i == 35 )
        {
          if ( *(_BYTE *)(i + 1) == 35 )
            goto LABEL_10;
        }
        else if ( !*(_BYTE *)i )
        {
          goto LABEL_10;
        }
      }
    }
    i = -1;
  }
LABEL_10:
  if ( a1 )
  {
    v7 = *(float *)v5 + 1.0;
    v8 = *(float *)(a1 + 4);
    *(float *)v5 = v8;
    if ( v8 <= v7 )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      *(_BYTE *)(v5 + 4) = 1;
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_DWORD *)(v6 + 256);
  v11 = s;
  if ( *(_DWORD *)(v5 + 8) > v10 )
    *(_DWORD *)(v5 + 8) = v10;
  while ( 1 )
  {
    result = (char *)memchr(v11, 10, i - (_DWORD)v11);
    v13 = result;
    if ( !result )
      v13 = (char *)i;
    v14 = v13 == (char *)i;
    if ( v13 == (char *)i )
      v14 = v11 == v13;
    if ( !v14 )
    {
      if ( (~v9 & (v11 == s)) != 0 )
      {
        if ( !*(_BYTE *)(v5 + 4) )
        {
          sub_99FEC(" %.*s");
          goto LABEL_30;
        }
        v15 = "%*s%.*s";
      }
      else
      {
        v15 = "\n%*s%.*s";
      }
      sub_99FEC(v15);
LABEL_30:
      result = 0;
      *(_BYTE *)(v5 + 4) = 0;
      goto LABEL_19;
    }
    if ( v9 )
      return (char *)sub_99FEC("\n");
LABEL_19:
    v11 = v13 + 1;
    if ( v13 == (char *)i )
      return result;
  }
}


// ======================================================================
