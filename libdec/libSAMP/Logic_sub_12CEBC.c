// ADDR: 0xe4f34
// SYMBOL: sub_E4F34
int __fastcall sub_E4F34(int a1)
{
  int result; // r0

  dword_237518 = a1;
  result = dword_381BF4;
  if ( dword_381BF4 )
    return sub_17C948();
  return result;
}


// ======================================================================
// ADDR: 0xf1e90
// SYMBOL: sub_F1E90
int *__fastcall sub_F1E90(int a1, char *s)
{
  size_t v4; // r3
  int *result; // r0
  __int64 v6; // [sp+0h] [bp-10h] BYREF

  v4 = strlen(s);
  result = &dword_23FBB8;
  if ( dword_23FBB8 )
  {
    Arz_tr::tr(&v6, dword_23FBB8, s, v4);
    result = (int *)v6;
    *(_QWORD *)a1 = v6;
  }
  else
  {
    *(_DWORD *)a1 = s;
    *(_DWORD *)(a1 + 4) = v4;
  }
  return result;
}


// ======================================================================
// ADDR: 0x12d5e8
// SYMBOL: sub_12D5E8
void sub_12D5E8(int a1, const char *a2, ...)
{
  __int64 v3[2]; // [sp+8h] [bp-230h] BYREF
  void *v4[4]; // [sp+18h] [bp-220h] BYREF
  char var210[536]; // [sp+28h] [bp-210h] BYREF
  va_list va; // [sp+240h] [bp+8h] BYREF

  va_start(va, a2);
  va_copy(&v4[3], va);
  _vsprintf_chk(var210, 0, 512, a2, va);
  sub_DC6DC(v4, var210);
  v3[0] = 0x3F3EBEBF3F3EBEBFLL;
  v3[1] = 0x3F8000003F3EBEBFLL;
  sub_12D3E0(a1, (int)v4, v3);
  if ( LOBYTE(v4[0]) << 31 )
    operator delete(v4[2]);
}


// ======================================================================
