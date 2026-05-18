// ADDR: 0x108564
// SYMBOL: sub_108564
int __fastcall sub_108564(unsigned int a1)
{
  int v1; // r0

  if ( a1 <= 0x4E20 )
    v1 = *(_DWORD *)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1) + 52;
  else
    v1 = 52;
  return *(_DWORD *)v1;
}


// ======================================================================
// ADDR: 0x12d520
// SYMBOL: sub_12D520
void sub_12D520(int a1, char *s, ...)
{
  size_t v4; // r0
  const char *v5; // r3
  __int64 v6[2]; // [sp+8h] [bp-240h] BYREF
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
  v6[0] = 0x3F3EBEBF3F3EBEBFLL;
  v6[1] = 0x3F8000003F3EBEBFLL;
  sub_12D3E0(a1, (int)v7, v6);
  if ( LOBYTE(v7[0]) << 31 )
    operator delete(v7[2]);
  if ( v8 << 31 )
    operator delete(v10);
}


// ======================================================================
