// ADDR: 0xee66c
// SYMBOL: sub_EE66C
int __fastcall sub_EE66C(int a1, int a2, int a3, int a4, int a5)
{
  void *exception; // r4
  struct tm v8; // [sp+0h] [bp-80h] BYREF
  _DWORD v9[2]; // [sp+30h] [bp-50h] BYREF
  time_t timer; // [sp+38h] [bp-48h] BYREF
  struct tm v11; // [sp+3Ch] [bp-44h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  timer = std::chrono::system_clock::to_time_t(v9);
  if ( !localtime_r(&timer, &v11) )
  {
    exception = j___cxa_allocate_exception(8u);
    sub_EE924(exception, "time_t value out of range");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'fmt::v8::format_error,
      (void (*)(void *))fmt::v8::format_error::~format_error);
  }
  v8 = v11;
  return ((int (__fastcall *)(int, struct tm *, int))sub_EE978)(a1, &v8, a5);
}


// ======================================================================
// ADDR: 0xee6f0
// SYMBOL: sub_EE6F0
const char *sub_EE6F0(int *a1, const char *a2, const char *a3, int a4, ...)
{
  const char *v6; // r6
  const char *result; // r0
  int v8; // r1
  _BYTE *v9; // r1
  int v10; // r1
  int v11; // r1
  char v12[20]; // [sp+4h] [bp-14h] BYREF

  if ( a2 == a3 )
  {
    v6 = a2;
  }
  else
  {
    v6 = a2 + 1;
    if ( *a2 != 58 )
      v6 = a2;
  }
  result = (const char *)sub_EE754(v6, a3, v12);
  if ( result == v6 && a4 )
  {
    v8 = a1[2];
  }
  else
  {
    v8 = result - v6;
    a1[1] = (int)v6;
    a1[2] = result - v6;
  }
  if ( v8 == 2 )
  {
    v9 = (_BYTE *)a1[1];
    if ( *v9 == 37 )
    {
      v10 = (unsigned __int8)v9[1];
      if ( v10 == 70 )
      {
        v11 = 1;
      }
      else
      {
        if ( v10 != 84 )
          return result;
        v11 = 2;
      }
      *a1 = v11;
    }
  }
  return result;
}


// ======================================================================
