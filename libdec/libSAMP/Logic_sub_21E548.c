// ADDR: 0x21ea18
// SYMBOL: sub_21EA18
_DWORD *__fastcall sub_21EA18(unsigned __int16 **a1, unsigned int a2, int a3, int a4)
{
  unsigned __int16 *v6; // r1
  _DWORD *result; // r0
  unsigned __int16 *v8; // r1
  _DWORD *v9; // t1
  _DWORD *v10; // t1
  _DWORD *v11; // t1
  _DWORD *v12; // t1
  int v13; // r1
  _DWORD v14[4]; // [sp+0h] [bp-10h] BYREF

  v14[0] = a3;
  v14[1] = a4;
  if ( a2 == 255 )
    return 0;
  v6 = *a1;
  v14[0] = *a1;
  switch ( a2 & 0xF )
  {
    case 0u:
    case 3u:
    case 0xBu:
      v9 = *(_DWORD **)v6;
      v8 = v6 + 2;
      result = v9;
      goto LABEL_10;
    case 1u:
      result = (_DWORD *)sub_21EABC(v14);
      goto LABEL_11;
    case 2u:
      v11 = (_DWORD *)*v6;
      v8 = v6 + 1;
      result = v11;
      goto LABEL_10;
    case 4u:
    case 0xCu:
      v10 = *(_DWORD **)v6;
      v8 = v6 + 4;
      result = v10;
      goto LABEL_10;
    case 9u:
      result = (_DWORD *)sub_21EB50(v14);
      goto LABEL_11;
    case 0xAu:
      v12 = (_DWORD *)(__int16)*v6;
      v8 = v6 + 1;
      result = v12;
LABEL_10:
      v14[0] = v8;
LABEL_11:
      v13 = (a2 >> 4) & 7;
      if ( !v13 )
        goto LABEL_15;
      if ( v13 != 1 )
        abort();
      if ( !result )
        goto LABEL_19;
      result = (_DWORD *)((char *)*a1 + (_DWORD)result);
LABEL_15:
      if ( result )
      {
        if ( (a2 & 0x80) != 0 )
          result = (_DWORD *)*result;
      }
      else
      {
LABEL_19:
        result = 0;
      }
      *a1 = (unsigned __int16 *)v14[0];
      break;
    default:
      abort();
      return result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x21eabc
// SYMBOL: sub_21EABC
int __fastcall sub_21EABC(char **a1)
{
  char *v1; // r2
  int v2; // r3
  int v3; // r1
  char v4; // t1
  int v5; // r5

  v1 = *a1;
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = *v1++;
    v5 = (v4 & 0x7F) << v2;
    v2 += 7;
    v3 |= v5;
  }
  while ( v4 < 0 );
  *a1 = v1;
  return v3;
}


// ======================================================================
// ADDR: 0x21eae0
// SYMBOL: sub_21EAE0
bool __fastcall sub_21EAE0(int a1, int a2, int a3, int a4, int a5, void *a6)
{
  int *v6; // r4
  int *v8; // r6
  int v9; // r5
  int v10; // r0
  int v12; // [sp+0h] [bp-20h] BYREF

  if ( !a3 )
    sub_21E854(0, a6);
  v6 = (int *)(a3 + 4 * ~a1);
  v8 = v6;
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    v10 = *(int *)((char *)v6 + v9);
    v12 = a5;
    ++v6;
    ++v8;
  }
  while ( !(*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v10 + 16))(v10, a4, &v12) );
  return v9 == 0;
}


// ======================================================================
// ADDR: 0x21eb50
// SYMBOL: sub_21EB50
int __fastcall sub_21EB50(char **a1)
{
  char *v1; // r3
  unsigned int v2; // r2
  int v3; // r1
  char v4; // r4
  char v5; // t1
  int v6; // r5
  int result; // r0

  v1 = *a1;
  v2 = 0;
  v3 = 0;
  do
  {
    v5 = *v1++;
    v4 = v5;
    v6 = (v5 & 0x7F) << v2;
    v2 += 7;
    v3 |= v6;
  }
  while ( v5 < 0 );
  *a1 = v1;
  result = v3;
  if ( v2 < 0x20 )
    result = v3 | (-1 << v2);
  if ( (v4 & 0x40) == 0 )
    return v3;
  return result;
}


// ======================================================================
// ADDR: 0x21eb88
// SYMBOL: sub_21EB88
int __fastcall sub_21EB88(int a1)
{
  __int64 v2; // r0

  v2 = sub_21DA2C(a1);
  HIDWORD(v2) ^= 0x434C4E47u;
  if ( v2 == 1126902529 )
    return *(_DWORD *)(a1 - 36);
  else
    return a1 + 88;
}


// ======================================================================
// ADDR: 0x222b18
// SYMBOL: sub_222B18
int __fastcall sub_222B18(int a1)
{
  int v1; // r0
  int v2; // r1
  _DWORD v4[10]; // [sp+0h] [bp-28h] BYREF

  v1 = sub_222E9C(a1, v4);
  v2 = v4[2];
  if ( v1 )
    return 0;
  return v2;
}


// ======================================================================
// ADDR: 0x222b44
// SYMBOL: sub_222B44
int __fastcall sub_222B44(int a1)
{
  int v1; // r0
  int v2; // r1
  _DWORD v4[10]; // [sp+0h] [bp-28h] BYREF

  v1 = sub_222E9C(a1, v4);
  v2 = v4[0];
  if ( v1 )
    return 0;
  return v2;
}


// ======================================================================
