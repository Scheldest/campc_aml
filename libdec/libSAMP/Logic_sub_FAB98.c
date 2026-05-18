// ADDR: 0xf1e60
// SYMBOL: sub_F1E60
int *__fastcall sub_F1E60(unsigned __int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // r2
  int *result; // r0
  unsigned __int64 v6; // [sp+0h] [bp-10h] BYREF

  v4 = __PAIR64__(a3, a2);
  result = &dword_23FBB8;
  if ( dword_23FBB8 )
  {
    Arz_tr::tr(&v6, dword_23FBB8, a2, HIDWORD(v4));
    result = (int *)v6;
    *a1 = v6;
  }
  else
  {
    *a1 = v4;
  }
  return result;
}


// ======================================================================
// ADDR: 0xfad2c
// SYMBOL: sub_FAD2C
_DWORD *__fastcall sub_FAD2C(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  char *v5; // r5
  void *v6; // r6
  int v7; // r2

  v5 = (char *)*((_DWORD *)a2 + 2);
  v6 = a1 + 1;
  v7 = *a2 << 31;
  *a1 = &off_22A95C;
  if ( !v7 )
    v5 = (char *)(a2 + 1);
  a1[24] = &off_22A970;
  std::ios_base::init((std::ios_base *)(a1 + 24), v6);
  a1[42] = 0;
  a1[43] = -1;
  a1[24] = &off_22A938;
  *a1 = &off_22A924;
  sub_E6108((int)v6);
  if ( !sub_E61BC((int)v6, v5, a3 | 0x10) )
    std::ios_base::clear(
      (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16) | 4);
  return a1;
}


// ======================================================================
// ADDR: 0xfb2b4
// SYMBOL: sub_FB2B4
_DWORD *__fastcall sub_FB2B4(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r6
  int v7; // r4
  int v8; // r11
  int v9; // r8
  int v10; // r0
  int v11; // r2
  _BYTE v13[8]; // [sp+8h] [bp-28h] BYREF
  _BYTE v14[32]; // [sp+10h] [bp-20h] BYREF

  std::ostream::sentry::sentry(v13, a1);
  if ( v13[0] )
  {
    v6 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
    v7 = v6[19];
    v8 = v6[1];
    v9 = v6[6];
    if ( v7 == -1 )
    {
      std::ios_base::getloc((std::ios_base *)v14);
      v10 = std::locale::use_facet((std::locale *)v14, (std::locale::id *)&std::ctype<char>::id);
      v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v10 + 28))(v10, 32);
      std::locale::~locale((std::locale *)v14);
      v6[19] = v7;
    }
    v11 = a2 + a3;
    if ( (v8 & 0xB0) != 0x20 )
      v11 = a2;
    if ( !sub_FB398(v9, a2, v11, a2 + a3, v6, (unsigned __int8)v7) )
      std::ios_base::clear(
        (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16) | 5);
  }
  std::ostream::sentry::~sentry(v13);
  return a1;
}


// ======================================================================
// ADDR: 0x12d318
// SYMBOL: sub_12D318
void sub_12D318(int a1, char *s, ...)
{
  size_t v4; // r0
  const char *v5; // r3
  _QWORD v6[2]; // [sp+8h] [bp-240h] BYREF
  void *v7[4]; // [sp+1Ch] [bp-22Ch] BYREF
  unsigned __int8 v8; // [sp+2Ch] [bp-21Ch] BYREF
  _BYTE v9[3]; // [sp+2Dh] [bp-21Bh] BYREF
  void *v10; // [sp+34h] [bp-214h]
  char sa[536]; // [sp+38h] [bp-210h] BYREF
  va_list va; // [sp+250h] [bp+8h] BYREF

  va_start(va, s);
  v4 = strlen(s);
  sub_164D04(&v8, s, v4);
  v5 = (const char *)v10;
  va_copy(&v7[3], va);
  if ( !(v8 << 31) )
    v5 = v9;
  _vsprintf_chk(sa, 0, 512, v5, va);
  sub_DC6DC(v7, sa);
  v6[0] = 0x3F48C8CA00000000LL;
  v6[1] = 0x3F8000003F48C8CALL;
  sub_12D3E0(a1, v7, v6);
  if ( LOBYTE(v7[0]) << 31 )
    operator delete(v7[2]);
  if ( v8 << 31 )
    operator delete(v10);
}


// ======================================================================
