// ADDR: 0x15a1ee
// SYMBOL: sub_15A1EE
void sub_15A1EE()
{
  std::error_code *v0; // r2
  _BYTE v1[8]; // [sp+4h] [bp-14h] BYREF
  void *v2; // [sp+Ch] [bp-Ch]

  sub_15A150((int)v1);
  std::__fs::filesystem::__remove_all((std::__fs::filesystem *)v1, 0, v0);
  if ( v1[0] << 31 )
    operator delete(v2);
}


// ======================================================================
// ADDR: 0x15c8a0
// SYMBOL: sub_15C8A0
int __fastcall sub_15C8A0(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0

  v2 = *(_DWORD **)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}


// ======================================================================
// ADDR: 0x15c8c6
// SYMBOL: sub_15C8C6
void **__fastcall sub_15C8C6(void **a1)
{
  void *v2; // r0

  sub_15C8E2();
  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x15c902
// SYMBOL: sub_15C902
void **__fastcall sub_15C902(void **a1)
{
  void *v2; // r0

  sub_15C91E();
  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
