// ADDR: 0x165694
// SYMBOL: sub_165694
void *__fastcall sub_165694(const char *a1, const char *a2, size_t *a3, signed int a4)
{
  FILE *v6; // r0
  FILE *v7; // r6
  void *v8; // r5
  size_t v10; // r9
  void *v11; // r0

  if ( a3 )
    *a3 = 0;
  v6 = fopen(a1, a2);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( fseek(v6, 0, 2) )
    goto LABEL_5;
  v10 = ftell(v7);
  if ( v10 == -1 || fseek(v7, 0, 0) )
    goto LABEL_5;
  if ( dword_381B58 )
    ++*(_DWORD *)(dword_381B58 + 880);
  v11 = (void *)off_2390AC(v10 + a4, dword_381B60);
  if ( !v11 )
  {
LABEL_5:
    fclose(v7);
    return 0;
  }
  v8 = v11;
  if ( fread(v11, 1u, v10, v7) != v10 )
  {
    fclose(v7);
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    off_2390B0(v8, dword_381B60);
    return 0;
  }
  if ( a4 >= 1 )
    sub_22178C((int)v8 + v10, a4);
  fclose(v7);
  if ( a3 )
    *a3 = v10;
  return v8;
}


// ======================================================================
// ADDR: 0x170c94
// SYMBOL: sub_170C94
int __fastcall sub_170C94(char *s, signed int a2)
{
  int v4; // r1
  size_t v5; // r0
  unsigned __int8 *v6; // r6
  unsigned int v7; // r4
  int v8; // lr
  int v9; // r9
  unsigned int v10; // r3
  int v11; // r11
  int v12; // r1
  int i; // r0
  int v14; // r2
  bool v15; // zf
  unsigned __int8 *j; // r8
  bool v17; // zf
  int v18; // r1
  unsigned __int8 *v19; // r10
  const char *v20; // r5
  char *v21; // r0
  _BYTE *v22; // r6
  char *v23; // r0
  const char *v24; // r1
  const char *v25; // r0
  bool v26; // zf
  int v27; // r0
  int result; // r0
  unsigned __int8 *v29; // [sp+0h] [bp-30h]
  int v30; // [sp+Ch] [bp-24h]
  int v31; // [sp+10h] [bp-20h]

  v4 = dword_381B58;
  v31 = dword_381B58;
  if ( !a2 )
  {
    v5 = strlen(s);
    v4 = dword_381B58;
    a2 = v5;
  }
  if ( v4 )
    ++*(_DWORD *)(v4 + 880);
  v6 = (unsigned __int8 *)off_2390AC(a2 + 1, dword_381B60);
  j_memcpy(v6, s, a2);
  v6[a2] = 0;
  if ( a2 < 1 )
    goto LABEL_38;
  v7 = (unsigned int)&v6[a2];
  v8 = (int)&v6[a2 - 1];
  v9 = 0;
  v10 = (unsigned int)v6;
  v11 = 0;
  v29 = v6;
  v30 = v8;
  do
  {
    v12 = v8 - v10;
    for ( i = -v10; ; --i )
    {
      v14 = *(unsigned __int8 *)v10;
      v15 = v14 == 10;
      if ( v14 != 10 )
        v15 = v14 == 13;
      if ( !v15 )
        break;
      --v12;
      ++v10;
    }
    j = (unsigned __int8 *)v10;
    if ( v10 < v7 )
    {
      for ( j = (unsigned __int8 *)v10; ; ++j )
      {
        v17 = (unsigned __int8)v14 == 10;
        if ( (unsigned __int8)v14 != 10 )
          v17 = (unsigned __int8)v14 == 13;
        if ( v17 )
          break;
        if ( !v12 )
        {
          j = (unsigned __int8 *)(v10 + v7 + i);
          break;
        }
        LOBYTE(v14) = j[1];
        --v12;
      }
    }
    *j = 0;
    v18 = *(unsigned __int8 *)v10;
    if ( v18 != 59 )
    {
      if ( v18 == 91 && (unsigned int)j > v10 && (v19 = j - 1, *(j - 1) == 93) )
      {
        v20 = (const char *)(v10 + 1);
        *v19 = 0;
        v21 = (char *)memchr((const void *)(v10 + 1), 93, (size_t)&v19[i - 1]);
        if ( v21 && (v22 = v21, (v23 = (char *)memchr(v21 + 1, 91, v19 - (unsigned __int8 *)(v21 + 1))) != 0) )
        {
          v24 = v23 + 1;
          v25 = v20;
          *v22 = 0;
          v20 = v24;
        }
        else
        {
          v25 = "Window";
        }
        v27 = sub_170E34(v25);
        if ( v27 )
        {
          v11 = v27;
          v9 = (*(int (__fastcall **)(int, int, const char *))(v27 + 8))(v31, v27, v20);
        }
        else
        {
          v11 = 0;
          v9 = 0;
        }
        v8 = v30;
      }
      else
      {
        v26 = v11 == 0;
        if ( v11 )
          v26 = v9 == 0;
        if ( !v26 )
        {
          (*(void (__fastcall **)(int, int, int))(v11 + 12))(v31, v11, v9);
          v8 = v30;
        }
      }
    }
    v10 = (unsigned int)(j + 1);
  }
  while ( (unsigned int)(j + 1) < v7 );
  v6 = v29;
  if ( v29 )
  {
LABEL_38:
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
  }
  off_2390B0(v6, dword_381B60);
  result = 11508;
  *(_BYTE *)(v31 + 11508) = 1;
  return result;
}


// ======================================================================
