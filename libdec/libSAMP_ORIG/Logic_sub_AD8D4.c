// ADDR: 0xaeadc
// SYMBOL: sub_AEADC
int __fastcall sub_AEADC(_DWORD *a1, int a2, const void *a3, int a4)
{
  int v6; // r11
  int v7; // r6
  int v10; // r8
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r6
  int v16; // r2
  int v17; // r1
  void *v18; // r0
  const void *v19; // r1
  int v20; // r6
  __int64 v21; // r0
  int v22; // r2
  void *v23; // [sp+4h] [bp-24h]
  int v24; // [sp+8h] [bp-20h]

  v6 = a1[1];
  v7 = a1[922];
  v10 = sub_889DE((unsigned int)a3, (unsigned int)a3 + 2 * a4);
  if ( (v7 & 0x40000) != 0 )
  {
    if ( v6 + a4 >= a1[3] )
    {
      v12 = a4;
      if ( a4 <= 256 )
        v12 = 256;
      v13 = a1[4];
      if ( v12 >= 4 * a4 )
        v12 = 4 * a4;
      if ( a4 < 8 )
        v12 = 32;
      v14 = v12 + v6;
      v15 = v14 + 1;
      v16 = v14 + 1;
      if ( v13 <= v14 )
      {
        if ( v13 )
          v17 = v13 + v13 / 2;
        else
          v17 = 8;
        if ( v17 > v15 )
          v15 = v17;
        if ( v13 < v15 )
        {
          v24 = v16;
          v18 = (void *)sub_885E4(2 * v15);
          v19 = (const void *)a1[5];
          if ( v19 )
          {
            v23 = v18;
            j_memcpy(v18, v19, 2 * a1[3]);
            sub_88614(a1[5]);
            v18 = v23;
          }
          v16 = v24;
          a1[4] = v15;
          a1[5] = v18;
        }
      }
      a1[3] = v16;
    }
  }
  else if ( a1[2] + v10 >= a1[13] || v6 + a4 >= a1[3] )
  {
    return 0;
  }
  v20 = a1[5];
  if ( v6 != a2 )
    j_memmove((void *)(v20 + 2 * a2 + 2 * a4), (const void *)(v20 + 2 * a2), 2 * (v6 - a2));
  j_memcpy((void *)(v20 + 2 * a2), a3, 2 * a4);
  v21 = *(_QWORD *)(a1 + 1);
  v22 = a1[5];
  HIDWORD(v21) += v10;
  LODWORD(v21) = v21 + a4;
  *(_QWORD *)(a1 + 1) = v21;
  *(_WORD *)(v22 + 2 * v21) = 0;
  return 1;
}


// ======================================================================
// ADDR: 0xaed88
// SYMBOL: sub_AED88
int __fastcall sub_AED88(int result, int a2, int a3, int a4)
{
  int v4; // r6
  unsigned __int16 *v5; // r1
  int v6; // r3
  float v7; // s0
  unsigned __int16 *v8; // r6
  float v9; // s2
  float i; // s4
  int v11; // r4
  int v12; // t1
  float *v13; // r5
  int v14; // r12
  int v15; // r8
  float v16; // s10
  int v17; // lr
  unsigned int v18; // r5
  float v19; // s2
  int v20; // r1
  float v21; // s0
  float v22; // s12
  char *v23; // r4
  int v24; // r9
  char *v25; // r1
  int v26; // r6
  int v27; // t1
  float *v28; // r3
  float v29; // s14
  int v30; // r6
  float v31; // s1
  float v32; // s12
  float v33; // s2
  int v34; // r1
  float v35; // s6
  int v36; // r2
  float *v37; // r3
  int v38; // lr
  int j; // r3
  int v40; // r1
  unsigned __int16 *v41; // r3
  unsigned __int16 *v42; // r4
  int v43; // t1
  float v44; // s6
  float v45; // s8
  float v46; // s4

  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 == a3 )
  {
    if ( a4 )
    {
      v5 = *(unsigned __int16 **)(a2 + 20);
      v6 = *(_DWORD *)(dword_1ACF68 + 6340);
      v7 = *(float *)(dword_1ACF68 + 6344);
      v8 = &v5[a3];
      v9 = 0.0;
      for ( i = 0.0; ; i = i + (float)((float)(v7 / *(float *)(v6 + 16)) * *v13) )
      {
        do
        {
          if ( v5 >= v8 )
          {
            v44 = 0.0;
            v45 = i;
            goto LABEL_44;
          }
          v12 = *v5++;
          v11 = v12;
        }
        while ( v12 == 13 );
        if ( v11 == 10 )
          break;
        v13 = (float *)(v6 + 12);
        if ( *(_DWORD *)v6 > v11 )
          v13 = (float *)(*(_DWORD *)(v6 + 8) + 4 * v11);
      }
      v45 = 0.0;
      if ( i <= 0.0 )
        i = 0.0;
      v9 = v7 + 0.0;
      v44 = i;
LABEL_44:
      v46 = -0.0;
      if ( v9 == 0.0 )
        v46 = *(float *)(dword_1ACF68 + 6344);
      if ( v45 > 0.0 )
        v46 = *(float *)(dword_1ACF68 + 6344);
      if ( v44 < v45 )
        v44 = v45;
      *(_DWORD *)(result + 12) = 0;
      *(_DWORD *)(result + 16) = a3;
      *(_DWORD *)(result + 4) = 0;
      *(float *)result = v44;
      *(float *)(result + 8) = v9 + v46;
    }
    else
    {
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 8) = 1065353216;
      if ( a3 < 1 )
      {
        j = 0;
        v40 = 0;
      }
      else
      {
        v38 = *(_DWORD *)(a2 + 20);
        for ( j = 0; j < a3; j = v40 + v42 - v41 )
        {
          v40 = j;
          v41 = (unsigned __int16 *)(v38 + 2 * j);
          v42 = v41;
          do
          {
            if ( (unsigned int)v42 >= v38 + 2 * a3 )
              break;
            v43 = *v42++;
          }
          while ( v43 != 10 );
        }
      }
      *(_DWORD *)(result + 12) = j;
      *(_DWORD *)(result + 16) = 0;
      *(_DWORD *)(result + 20) = v40;
    }
  }
  else
  {
    v14 = 0;
    v15 = *(_DWORD *)(a2 + 20);
    v16 = 0.0;
    v17 = *(_DWORD *)(dword_1ACF68 + 6340);
    v18 = v15 + 2 * v4;
    v19 = *(float *)(dword_1ACF68 + 6344);
    v20 = 0;
    v21 = v19 / *(float *)(v17 + 16);
    while ( 1 )
    {
      v22 = 0.0;
      v23 = (char *)(v15 + 2 * v20);
      v24 = v20;
      *(float *)(result + 4) = v16;
      v25 = v23;
      while ( 1 )
      {
        do
        {
          if ( (unsigned int)v25 >= v18 )
          {
            v29 = 0.0;
            goto LABEL_20;
          }
          v27 = *(unsigned __int16 *)v25;
          v25 += 2;
          v26 = v27;
        }
        while ( v27 == 13 );
        if ( v26 == 10 )
          break;
        v28 = (float *)(v17 + 12);
        if ( *(_DWORD *)v17 > v26 )
          v28 = (float *)(*(_DWORD *)(v17 + 8) + 4 * v26);
        v22 = v22 + (float)(v21 * *v28);
      }
      v29 = v19 + 0.0;
      v22 = 0.0;
LABEL_20:
      v30 = v25 - v23;
      v31 = -0.0;
      if ( v29 == 0.0 )
        v31 = v19;
      if ( v22 > 0.0 )
        v31 = v19;
      v32 = v29 + v31;
      v20 = v24 + (v30 >> 1);
      if ( v20 > a3 )
        break;
      v16 = v16 + v32;
      v14 = v24;
    }
    *(_DWORD *)(result + 12) = v24;
    *(_DWORD *)(result + 16) = v30 >> 1;
    *(_DWORD *)(result + 20) = v14;
    *(float *)(result + 8) = v32;
    *(_DWORD *)result = 0;
    if ( v24 < a3 )
    {
      v33 = 0.0;
      v34 = a3 - v24;
      do
      {
        v35 = -1.0;
        v36 = *(unsigned __int16 *)v23;
        if ( v36 != 10 )
        {
          v37 = (float *)(v17 + 12);
          if ( *(_DWORD *)v17 > v36 )
            v37 = (float *)(*(_DWORD *)(v17 + 8) + 4 * v36);
          v35 = v21 * *v37;
        }
        v33 = v35 + v33;
        --v34;
        v23 += 2;
        *(float *)result = v33;
      }
      while ( v34 );
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xaefe0
// SYMBOL: sub_AEFE0
int __fastcall sub_AEFE0(_DWORD *dest, int a2, int a3, int a4)
{
  int v6; // r0
  int result; // r0
  int v10; // r6
  int v11; // r2
  int v12; // r0
  int *v13; // r1
  int v14; // r2
  __int16 v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r8
  int v19; // r0
  int *v20; // r0
  int v21; // r2
  int v22; // r1
  __int16 v23; // r2
  char *v24; // r1
  _DWORD *v25; // r1
  int v26; // [sp+0h] [bp-20h]

  dest[898] = 999;
  v6 = *((unsigned __int16 *)dest + 1791);
  *((_WORD *)dest + 1792) = 99;
  if ( v6 == 99 )
  {
    if ( (int)dest[3] < 0 )
    {
      LOWORD(v12) = 99;
    }
    else
    {
      v10 = dest[1];
      v11 = dest[897] - v10;
      dest[897] = v11;
      j_memmove(dest + 396, (char *)dest + 2 * v10 + 1584, 2 * v11);
      v12 = *((__int16 *)dest + 1791);
      if ( v12 >= 1 )
      {
        v13 = dest + 3;
        v14 = *((__int16 *)dest + 1791);
        do
        {
          if ( *v13 >= 0 )
            *v13 -= v10;
          v13 += 4;
          --v14;
        }
        while ( v14 );
      }
    }
    v15 = v12 - 1;
    *((_WORD *)dest + 1791) = v15;
    j_memmove(dest, dest + 4, 16 * v15);
    if ( a3 >= 1000 )
      goto LABEL_3;
  }
  else if ( a3 >= 1000 )
  {
LABEL_3:
    result = 0;
    dest[897] = 0;
    *((_WORD *)dest + 1791) = 0;
    return result;
  }
  v16 = dest[897];
  v26 = a4;
  while ( v16 + a3 >= 1000 )
  {
    v17 = *((__int16 *)dest + 1791);
    if ( v17 >= 1 )
    {
      if ( (int)dest[3] >= 0 )
      {
        v18 = dest[1];
        v19 = v16 - v18;
        dest[897] = v19;
        j_memmove(dest + 396, (char *)dest + 2 * v18 + 1584, 2 * v19);
        v17 = *((__int16 *)dest + 1791);
        if ( v17 >= 1 )
        {
          v20 = dest + 3;
          v21 = *((__int16 *)dest + 1791);
          do
          {
            if ( *v20 >= 0 )
              *v20 -= v18;
            v20 += 4;
            --v21;
          }
          while ( v21 );
        }
      }
      *((_WORD *)dest + 1791) = v17 - 1;
      j_memmove(dest, dest + 4, 16 * (__int16)(v17 - 1));
      v16 = dest[897];
    }
  }
  v22 = *((__int16 *)dest + 1791);
  dest[4 * v22] = a2;
  v23 = v22 + 1;
  v24 = (char *)&dest[4 * v22];
  *((_WORD *)dest + 1791) = v23;
  *((_DWORD *)v24 + 1) = a3;
  *((_DWORD *)v24 + 2) = v26;
  v25 = v24 + 12;
  if ( a3 )
  {
    *v25 = v16;
    dest[897] = v16 + a3;
    return (int)dest + 2 * v16 + 1584;
  }
  else
  {
    *v25 = -1;
    return 0;
  }
}


// ======================================================================
// ADDR: 0xaf144
// SYMBOL: sub_AF144
int __fastcall sub_AF144(int a1, int a2)
{
  int v2; // r12
  int v3; // r3
  int result; // r0
  bool v5; // zf
  int v6; // r1
  bool v7; // zf

  if ( a2 < 1 )
    return 1;
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(unsigned __int16 *)(v2 + 2 * a2 - 2);
  result = 0;
  switch ( *(_WORD *)(v2 + 2 * a2 - 2) )
  {
    case ' ':
    case '(':
    case ')':
    case ',':
    case ';':
    case '[':
    case ']':
    case '{':
    case '|':
    case '}':
      goto LABEL_7;
    case '!':
    case '"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '*':
    case '+':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '\\':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
      return result;
    default:
      v5 = v3 == 12288;
      if ( v3 != 12288 )
        v5 = v3 == 9;
      if ( v5 )
      {
LABEL_7:
        v6 = *(unsigned __int16 *)(v2 + 2 * a2);
        result = 0;
        switch ( v6 )
        {
          case ' ':
          case '(':
          case ')':
          case ',':
          case ';':
          case '[':
          case ']':
          case '{':
          case '|':
          case '}':
            return result;
          case '!':
          case '"':
          case '#':
          case '$':
          case '%':
          case '&':
          case '\'':
          case '*':
          case '+':
          case '-':
          case '.':
          case '/':
          case '0':
          case '1':
          case '2':
          case '3':
          case '4':
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case '<':
          case '=':
          case '>':
          case '?':
          case '@':
          case 'A':
          case 'B':
          case 'C':
          case 'D':
          case 'E':
          case 'F':
          case 'G':
          case 'H':
          case 'I':
          case 'J':
          case 'K':
          case 'L':
          case 'M':
          case 'N':
          case 'O':
          case 'P':
          case 'Q':
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case '\\':
          case '^':
          case '_':
          case '`':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
          case 't':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
          case 'y':
          case 'z':
            return 1;
          default:
            v7 = v6 == 9;
            if ( v6 != 9 )
              v7 = v6 == 12288;
            if ( !v7 )
              return 1;
            break;
        }
      }
      break;
  }
  return result;
}


// ======================================================================
