// ADDR: 0x165ccc
// SYMBOL: sub_165CCC
char *__fastcall sub_165CCC(int a1, char *s, int a3)
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
  v5 = dword_381B58 + 11576;
  v6 = *(_DWORD *)(dword_381B58 + 6572);
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
  if ( a1 && (v7 = *(float *)v5 + 1.0, v8 = *(float *)(a1 + 4), *(float *)v5 = v8, v8 > v7) )
  {
    v9 = 1;
    *(_BYTE *)(v5 + 4) = 1;
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
          sub_170B40(" %.*s");
          goto LABEL_28;
        }
        v15 = "%*s%.*s";
      }
      else
      {
        v15 = "\n%*s%.*s";
      }
      sub_170B40(v15);
LABEL_28:
      result = 0;
      *(_BYTE *)(v5 + 4) = 0;
      goto LABEL_29;
    }
    if ( v9 )
      return (char *)sub_170B40("\n");
LABEL_29:
    v11 = v13 + 1;
    if ( v13 == (char *)i )
      return result;
  }
}


// ======================================================================
