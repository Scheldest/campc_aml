// ADDR: 0xe6108
// SYMBOL: sub_E6108
int __fastcall sub_E6108(int a1)
{
  std::locale *v2; // r0
  int has_facet; // r5
  std::locale *v4; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  _BYTE v7[20]; // [sp+4h] [bp-14h] BYREF

  std::streambuf::basic_streambuf(a1);
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = &off_22A7C8;
  *(_DWORD *)(a1 + 87) = 0;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 60) = 0LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_DWORD *)(a1 + 83) = 0;
  v2 = (std::locale *)std::locale::locale((std::locale *)v7, (const std::locale *)(a1 + 4));
  has_facet = std::locale::has_facet(v2, (std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  std::locale::~locale((std::locale *)v7);
  if ( has_facet )
  {
    v4 = (std::locale *)std::locale::locale((std::locale *)&v6, (const std::locale *)(a1 + 4));
    *(_DWORD *)(a1 + 68) = std::locale::use_facet(v4, (std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
    std::locale::~locale((std::locale *)&v6);
    *(_BYTE *)(a1 + 90) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 68) + 28))(*(_DWORD *)(a1 + 68));
  }
  (*(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 12))(a1, 0, 4096);
  return a1;
}


// ======================================================================
// ADDR: 0xe61bc
// SYMBOL: sub_E61BC
int __fastcall sub_E61BC(int a1, char *filename, int a3)
{
  int v4; // r6
  signed int v7; // r0
  const char *v8; // r2
  FILE *v9; // r0

  if ( *(_DWORD *)(a1 + 64) )
    return 0;
  v7 = a3 & 0xFFFFFFFD;
  v4 = 0;
  v8 = "we";
  if ( v7 > 47 )
  {
    if ( v7 > 55 )
    {
      if ( v7 == 56 )
      {
        v8 = "w+e";
      }
      else
      {
        if ( v7 != 60 )
          return v4;
        v8 = "w+be";
      }
    }
    else if ( v7 != 48 )
    {
      if ( v7 != 52 )
        return v4;
LABEL_10:
      v8 = "wbe";
    }
LABEL_22:
    v9 = fopen(filename, v8);
    *(_DWORD *)(a1 + 64) = v9;
    if ( !v9 )
      return 0;
    *(_DWORD *)(a1 + 80) = a3;
    if ( (a3 & 2) != 0 && (v4 = 0, fseek(v9, 0, 2)) )
    {
      fclose(*(FILE **)(a1 + 64));
      *(_DWORD *)(a1 + 64) = 0;
    }
    else
    {
      return a1;
    }
  }
  else
  {
    switch ( v7 )
    {
      case 1:
      case 17:
        v8 = "ae";
        goto LABEL_22;
      case 5:
      case 21:
        v8 = "abe";
        goto LABEL_22;
      case 8:
        v8 = "re";
        goto LABEL_22;
      case 9:
      case 25:
        v8 = "a+e";
        goto LABEL_22;
      case 12:
        v8 = "rbe";
        goto LABEL_22;
      case 13:
      case 29:
        v8 = "a+be";
        goto LABEL_22;
      case 16:
        goto LABEL_22;
      case 20:
        goto LABEL_10;
      case 24:
        v8 = "r+e";
        goto LABEL_22;
      case 28:
        v8 = "r+be";
        goto LABEL_22;
      default:
        return v4;
    }
  }
  return v4;
}


// ======================================================================
