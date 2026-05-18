// ADDR: 0xdcac4
// SYMBOL: sub_DCAC4
char *__fastcall sub_DCAC4(int a1, char *s, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  char *v9; // r4
  char *result; // r0
  char *v12; // r5
  char *v13; // r6
  int v14; // r0
  char *v15; // r1
  char *v16; // r0
  char *v17; // r1
  void *v18; // r6
  int v19; // r2
  char *v20; // r4
  int v21; // r1
  _BYTE *v22; // r1
  int v23; // r2
  _DWORD v24[2]; // [sp+0h] [bp-78h] BYREF
  int v25; // [sp+8h] [bp-70h]
  int v26; // [sp+Ch] [bp-6Ch]
  int v27; // [sp+10h] [bp-68h]
  int v28; // [sp+14h] [bp-64h]
  int v29; // [sp+18h] [bp-60h]
  int v30; // [sp+1Ch] [bp-5Ch]
  int v31; // [sp+20h] [bp-58h]
  int v32; // [sp+24h] [bp-54h]
  int v33; // [sp+28h] [bp-50h]
  _DWORD v34[4]; // [sp+30h] [bp-48h] BYREF
  int v35; // [sp+40h] [bp-38h]
  int v36; // [sp+44h] [bp-34h]
  int v37; // [sp+48h] [bp-30h]
  _DWORD v38[9]; // [sp+54h] [bp-24h] BYREF

  v9 = s;
  if ( a3 == 2 )
  {
    a4 = *(unsigned __int16 *)s;
    result = (_BYTE *)(&stru_7D70 + 11);
    if ( a4 == 32123 )
    {
      if ( a6 <= -1 )
      {
        if ( a5 <= 0 || (v19 = *(_DWORD *)(a7 + 8)) == 0 )
LABEL_46:
          fmt::v8::detail::error_handler::on_error(
            (fmt::v8::detail::error_handler *)v24,
            (fmt::v8::detail *)"argument not found");
      }
      else
      {
        v19 = a5 & 0xF;
        if ( (a5 & 0xF) == 0 )
          goto LABEL_46;
      }
      a4 = *(_DWORD *)(a7 + 4);
      v20 = *(char **)a7;
      v35 = a7;
      v21 = v19 - 1;
      v34[2] = a5;
      v34[3] = a6;
      v37 = a9;
      v34[0] = a1;
      switch ( v19 )
      {
        case 1:
          result = (char *)sub_DCE00(a1, v20);
          break;
        case 2:
          result = (char *)sub_DCF8C(a1, v20);
          break;
        case 3:
          result = (char *)sub_DCFF4(a1, v21, v20, a4);
          break;
        case 4:
          result = (char *)sub_DD160(a1, v21, v20, a4);
          break;
        case 7:
          result = (char *)sub_DCD9A(v34);
          break;
        case 8:
          result = *(char **)(a1 + 8);
          v22 = result + 1;
          if ( *(_DWORD *)(a1 + 12) < (unsigned int)(result + 1) )
          {
            (**(void (__fastcall ***)(int))a1)(a1);
            result = *(char **)(a1 + 8);
            v22 = result + 1;
          }
          v23 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)(a1 + 8) = v22;
          result[v23] = (char)v20;
          break;
        case 9:
          result = (char *)sub_DE234(a1, v20);
          break;
        case 10:
          result = (char *)sub_DEF2C(a1, v21, v20, a4);
          break;
        case 11:
          result = (char *)sub_DF9F0(a1, v21, v20, a4);
          break;
        case 12:
          result = (char *)sub_DFA8C(a1, v20);
          break;
        case 13:
          v17 = &v20[a4];
          v16 = v20;
          return (char *)sub_DFAB8(v16, v17, a1, a4);
        case 14:
          result = (char *)sub_DCDCC(v34, v20);
          break;
        case 15:
          memset(v38, 0, 12);
          v27 = v35;
          v28 = v36;
          v29 = a9;
          v25 = a5;
          v26 = a6;
          v24[0] = a1;
          result = (char *)((int (__fastcall *)(char *, _DWORD *, _DWORD *))a4)(v20, v38, v24);
          break;
        default:
          return result;
      }
      return result;
    }
  }
  v29 = a5;
  v12 = &s[a3];
  v31 = a7;
  v33 = a9;
  v27 = a1;
  v26 = 0;
  v24[1] = s;
  v25 = a3;
  v32 = a8;
  v30 = a6;
  if ( a3 > 31 )
  {
    v34[0] = v24;
    while ( 1 )
    {
      v18 = v9;
      if ( *v9 != 123 )
      {
        v18 = memchr(v9 + 1, 123, v12 - (v9 + 1));
        if ( !v18 )
          break;
      }
      sub_DFEDC((int)v34, v9);
      result = (char *)sub_DFC00((int)v18, (int)v12, (fmt::v8::detail::error_handler *)v24);
      v9 = result;
      if ( result == v12 )
        return result;
    }
    return (char *)sub_DFEDC((int)v34, v9);
  }
  else
  {
    if ( a3 )
    {
      v13 = s;
      do
      {
        v15 = v13 + 1;
        v14 = (unsigned __int8)*v13;
        if ( v14 == 125 )
        {
          if ( v15 == v12 || *v15 != 125 )
            fmt::v8::detail::error_handler::on_error(
              (fmt::v8::detail::error_handler *)v24,
              (fmt::v8::detail *)"unmatched '}' in format string");
          v13 += 2;
          v27 = sub_DFAB8(v9, v15, v27, a4);
          v9 = v13;
        }
        else if ( v14 == 123 )
        {
          v27 = sub_DFAB8(v9, v13, v27, a4);
          v13 = (char *)sub_DFC00((int)v13, (int)v12, (fmt::v8::detail::error_handler *)v24);
          v9 = v13;
        }
        else
        {
          ++v13;
        }
      }
      while ( v13 != v12 );
      a1 = v27;
    }
    v16 = v9;
    v17 = v12;
    return (char *)sub_DFAB8(v16, v17, a1, a4);
  }
}


// ======================================================================
// ADDR: 0xdccde
// SYMBOL: sub_DCCDE
unsigned int __fastcall sub_DCCDE(_DWORD *a1)
{
  unsigned int *v2; // r5
  unsigned int result; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r5
  unsigned int v7; // r6
  unsigned __int8 *v8; // r4
  int v9; // t1

  v2 = a1 + 4;
  result = a1[2];
  v4 = *v2;
  v5 = v2[1];
  v6 = v2[2];
  a1[4] = v4 + result;
  v7 = v5 - v4;
  a1[2] = 0;
  if ( v5 < v4 )
    v7 = 0;
  if ( v7 > result )
    v7 = result;
  if ( v7 )
  {
    v8 = (unsigned __int8 *)(a1 + 7);
    do
    {
      v9 = *v8++;
      result = std::string::push_back(v6, v9);
      --v7;
    }
    while ( v7 );
  }
  a1[6] = v6;
  return result;
}


// ======================================================================
