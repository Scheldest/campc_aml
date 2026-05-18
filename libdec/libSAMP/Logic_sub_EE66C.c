// ADDR: 0xee924
// SYMBOL: sub_EE924
_DWORD *__fastcall sub_EE924(std::runtime_error *a1, const char *a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)std::runtime_error::runtime_error(a1, a2);
  *result = &off_23113C;
  return result;
}


// ======================================================================
// ADDR: 0xee978
// SYMBOL: sub_EE978
int __fastcall sub_EE978(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // r0
  char v7; // r1
  int v8; // r0
  int v9; // r4
  _DWORD v11[4]; // [sp+0h] [bp-28h] BYREF
  _BYTE v12[4]; // [sp+10h] [bp-18h] BYREF
  char v13; // [sp+14h] [bp-14h]

  v4 = a3[6];
  v7 = v4;
  if ( v4 )
    v7 = 1;
  v13 = v7;
  v11[0] = v4;
  if ( v4 )
    fmt::v8::detail::locale_ref::get<std::locale>(v12, v11);
  v8 = sub_EEA04(v12);
  ((void (__fastcall *)(_DWORD *, int, _DWORD, int))sub_EEA64)(v11, v8, *a3, a2);
  if ( *a1 == 2 )
  {
    sub_EEBD8(v11);
  }
  else if ( *a1 == 1 )
  {
    sub_EEADC(v11);
  }
  else
  {
    sub_EEC74(a1[1], a1[2] + a1[1], v11);
  }
  v9 = v11[2];
  if ( v13 )
    std::locale::~locale((std::locale *)v12);
  return v9;
}


// ======================================================================
