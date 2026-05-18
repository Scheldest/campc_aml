// ADDR: 0xf01c4
// SYMBOL: sub_F01C4
int __fastcall sub_F01C4(int a1, int a2, int a3, std::locale *this)
{
  int *v7; // r0
  int v8; // r2
  int result; // r0
  std::runtime_error *exception; // r4
  int v11; // [sp+10h] [bp-18h] BYREF
  _DWORD v12[5]; // [sp+14h] [bp-14h] BYREF

  v7 = (int *)std::locale::use_facet(this, (std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  v12[0] = 0;
  v8 = *v7;
  v11 = 0;
  result = (*(int (__fastcall **)(int *, _DWORD *, int, int, int *, int, int, int))(v8 + 16))(
             v7,
             v12,
             a2,
             a2 + a3,
             &v11,
             a1,
             a1 + 128,
             a1 + 128);
  if ( result )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    sub_EE924(exception, "failed to format time");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'fmt::v8::format_error,
      (void (*)(void *))fmt::v8::format_error::~format_error);
  }
  return result;
}


// ======================================================================
// ADDR: 0xf0248
// SYMBOL: sub_F0248
void __fastcall sub_F0248(_DWORD *a1, unsigned int a2)
{
  char *v3; // r8
  unsigned int v4; // r6
  _BYTE *v5; // r0
  const std::nothrow_t *v6; // r1
  char *v7; // r2
  _BYTE *v8; // r3
  char v9; // t1

  v3 = (char *)a1[1];
  v4 = a1[3] + (a1[3] >> 1);
  if ( v4 < a2 )
    v4 = a2;
  v5 = (_BYTE *)operator new(v4);
  v6 = (const std::nothrow_t *)a1[2];
  if ( v6 )
  {
    v7 = v3;
    v8 = v5;
    do
    {
      v9 = *v7++;
      v6 = (const std::nothrow_t *)((char *)v6 - 1);
      *v8++ = v9;
    }
    while ( v6 );
  }
  a1[1] = v5;
  a1[3] = v4;
  if ( v3 != (char *)(a1 + 4) )
    operator delete(v3, v6);
}


// ======================================================================
