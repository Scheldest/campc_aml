// ADDR: 0xec968
// SYMBOL: sub_EC968
char *__fastcall sub_EC968(int a1)
{
  size_t v2; // r5
  void *v3; // r8
  char *v4; // r6
  size_t v5; // r4
  double v6; // d16
  char *result; // r0
  void *src; // [sp+0h] [bp-30h] BYREF
  size_t n; // [sp+4h] [bp-2Ch]
  double v10; // [sp+8h] [bp-28h] BYREF
  char *v11; // [sp+10h] [bp-20h]

  std::__fs::filesystem::path::__filename((std::__fs::filesystem::path *)&src);
  v2 = n;
  if ( n >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v10);
  v3 = src;
  if ( n >= 0xB )
  {
    v5 = (n + 16) & 0xFFFFFFF0;
    v4 = (char *)operator new(v5);
    HIDWORD(v10) = v2;
    v11 = v4;
    LODWORD(v10) = v5 + 1;
  }
  else
  {
    LOBYTE(v10) = 2 * n;
    v4 = (char *)&v10 + 1;
    if ( !n )
      goto LABEL_7;
  }
  j_memcpy(v4, v3, v2);
LABEL_7:
  v4[v2] = 0;
  v6 = v10;
  result = v11;
  *(_DWORD *)(a1 + 8) = v11;
  *(double *)a1 = v6;
  return result;
}


// ======================================================================
// ADDR: 0x10de14
// SYMBOL: sub_10DE14
_DWORD *__fastcall sub_10DE14(_DWORD *a1, int a2, int a3)
{
  int v5; // r4

  a1[1] = 0;
  a1[2] = 0;
  *a1 = a1 + 1;
  if ( a3 )
  {
    v5 = 16 * a3;
    do
    {
      sub_10E0BC(a1, a1 + 1, a2, a2);
      v5 -= 16;
      a2 += 16;
    }
    while ( v5 );
  }
  return a1;
}


// ======================================================================
// ADDR: 0x10de90
// SYMBOL: sub_10DE90
char *__fastcall sub_10DE90(int a1)
{
  size_t v2; // r5
  void *v3; // r8
  char *v4; // r6
  size_t v5; // r4
  double v6; // d16
  char *result; // r0
  void *src; // [sp+0h] [bp-30h] BYREF
  size_t n; // [sp+4h] [bp-2Ch]
  double v10; // [sp+8h] [bp-28h] BYREF
  char *v11; // [sp+10h] [bp-20h]

  std::__fs::filesystem::path::__extension((std::__fs::filesystem::path *)&src);
  v2 = n;
  if ( n >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(&v10);
  v3 = src;
  if ( n >= 0xB )
  {
    v5 = (n + 16) & 0xFFFFFFF0;
    v4 = (char *)operator new(v5);
    HIDWORD(v10) = v2;
    v11 = v4;
    LODWORD(v10) = v5 + 1;
  }
  else
  {
    LOBYTE(v10) = 2 * n;
    v4 = (char *)&v10 + 1;
    if ( !n )
      goto LABEL_7;
  }
  j_memcpy(v4, v3, v2);
LABEL_7:
  v4[v2] = 0;
  v6 = v10;
  result = v11;
  *(_DWORD *)(a1 + 8) = v11;
  *(double *)a1 = v6;
  return result;
}


// ======================================================================
// ADDR: 0x10e096
// SYMBOL: sub_10E096
int __fastcall sub_10E096(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r12
  unsigned int v3; // r2
  unsigned __int8 *v4; // lr

  v2 = *a2;
  v4 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v3 = *((_DWORD *)a2 + 1);
  if ( (v2 & 1) == 0 )
  {
    v4 = a2 + 1;
    v3 = v2 >> 1;
  }
  return std::__fs::filesystem::path::__compare(a1, v4, v3, v2 & 1);
}


// ======================================================================
// ADDR: 0x10e370
// SYMBOL: sub_10E370
int __fastcall sub_10E370(unsigned __int8 **a1, unsigned __int8 *a2, unsigned __int8 *a3, int *a4)
{
  unsigned __int8 *v5; // r6
  _BOOL4 v7; // r5
  unsigned __int8 *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int result; // r0
  int v13; // [sp+0h] [bp-18h] BYREF
  int v14[5]; // [sp+4h] [bp-14h] BYREF

  v5 = a3;
  v7 = a2 != a3 && *a2 == 45;
  if ( &a2[v7] == a3 )
    goto LABEL_18;
  v8 = &a2[v7];
  while ( *v8 == 48 )
  {
    if ( ++v8 == a3 )
    {
      v8 = a3;
      break;
    }
  }
  if ( v8 == a3 )
  {
LABEL_18:
    v8 = a3;
  }
  else if ( (unsigned int)*v8 - 48 < 0xA )
  {
    v8 = (unsigned __int8 *)sub_10E434(v8, a3, v14, &v13);
    if ( v8 == v5 )
    {
      v9 = v13;
      v10 = v14[0];
      if ( !__CFADD__(v14[0], v13) )
      {
LABEL_24:
        v11 = v9 + v10;
        if ( v7 )
        {
          if ( (unsigned int)v11 > 0x80000000 )
            goto LABEL_33;
          goto LABEL_21;
        }
        if ( v11 < 0 )
        {
LABEL_33:
          *a1 = v8;
          goto LABEL_29;
        }
LABEL_31:
        *a1 = v8;
        result = 0;
        *a4 = v11;
        goto LABEL_32;
      }
    }
    else
    {
      if ( (unsigned int)*v8 - 48 > 9 )
      {
        v9 = v13;
        v10 = v14[0];
        if ( !__CFADD__(v14[0], v13) )
          goto LABEL_24;
      }
      while ( (unsigned int)*v8 - 48 <= 9 )
      {
        if ( ++v8 == v5 )
          goto LABEL_28;
      }
      v5 = v8;
    }
LABEL_28:
    *a1 = v5;
LABEL_29:
    result = 34;
    goto LABEL_32;
  }
  if ( v8 == &a2[v7] )
  {
    *a1 = a2;
    result = 22;
    goto LABEL_32;
  }
  v11 = 0;
  if ( !v7 )
    goto LABEL_31;
LABEL_21:
  *a1 = v8;
  *a4 = -v11;
  result = 0;
LABEL_32:
  a1[1] = (unsigned __int8 *)result;
  return result;
}


// ======================================================================
// ADDR: 0x10e4d0
// SYMBOL: sub_10E4D0
int __fastcall sub_10E4D0(int result, int **a2, int *a3, int a4, int **a5)
{
  int **v6; // r4
  int **v7; // r6
  int v8; // r8
  int v9; // r1
  int *v10; // r1
  int *v11; // r5
  char v12; // r10

  v7 = a2 + 1;
  v6 = (int **)a2[1];
  v8 = result;
  if ( v6 )
  {
    result = *a3;
    v7 = a2 + 1;
    while ( 1 )
    {
      v9 = (int)v6[4];
      if ( result >= v9 )
      {
        if ( v9 >= result )
          goto LABEL_11;
        v7 = v6 + 1;
        v10 = v6[1];
        if ( !v10 )
          goto LABEL_11;
        ++v6;
      }
      else
      {
        v10 = *v6;
        if ( !*v6 )
        {
          v7 = v6;
          goto LABEL_11;
        }
      }
      v7 = v6;
      v6 = (int **)v10;
    }
  }
  v6 = a2 + 1;
LABEL_11:
  v11 = *v7;
  v12 = 0;
  if ( !*v7 )
  {
    v11 = (int *)operator new(0x20u);
    v11[4] = **a5;
    v11[5] = 0;
    v11[6] = 0;
    v11[7] = 0;
    result = sub_10E21C(a2, (int)v6, v7, v11);
    v12 = 1;
  }
  *(_BYTE *)(v8 + 4) = v12;
  *(_DWORD *)v8 = v11;
  return result;
}


// ======================================================================
