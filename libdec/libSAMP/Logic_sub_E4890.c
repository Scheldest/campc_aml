// ADDR: 0xec238
// SYMBOL: sub_EC238
unsigned __int8 *__fastcall sub_EC238(unsigned __int8 **a1)
{
  unsigned __int8 *result; // r0
  int v3; // r1
  _DWORD *exception; // r4
  _DWORD v5[7]; // [sp+4h] [bp-1Ch] BYREF

  result = *a1;
  v3 = *result;
  if ( v3 == 2 )
    return a1[2];
  if ( v3 == 1 )
    return a1[1] + 32;
  if ( a1[3] )
  {
    exception = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(v5, "cannot get value");
    sub_E9B38(exception, 214, (unsigned __int8 *)v5);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  return result;
}


// ======================================================================
// ADDR: 0xec2c0
// SYMBOL: sub_EC2C0
int __fastcall sub_EC2C0(int a1, unsigned __int8 *a2)
{
  int v2; // r6
  int v3; // r8
  int v5; // r5
  bool v6; // zf
  int *v7; // r0
  int v8; // r0

  v3 = a1 + 4;
  v2 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
    return v3;
  v5 = a1 + 4;
  do
  {
    v6 = sub_EA270(v3 + 4, (unsigned __int8 *)(v2 + 16), a2) == 0;
    v7 = (int *)v2;
    if ( !v6 )
      v7 = (int *)(v2 + 4);
    v8 = *v7;
    if ( v6 )
      v5 = v2;
    v2 = v8;
  }
  while ( v8 );
  if ( v5 == v3 || sub_EA270(v3 + 4, a2, (unsigned __int8 *)(v5 + 16)) )
    return v3;
  return v5;
}


// ======================================================================
// ADDR: 0xec314
// SYMBOL: sub_EC314
bool __fastcall sub_EC314(unsigned __int8 **a1, unsigned __int8 **a2)
{
  unsigned __int8 *v3; // r0
  int v4; // r0
  unsigned __int8 *v5; // r0
  unsigned __int8 *v6; // r1
  _DWORD *exception; // r4
  _DWORD v9[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = *a1;
  if ( v3 != *a2 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(v9, "cannot compare iterators of different containers");
    sub_E9B38(exception, 212, (unsigned __int8 *)v9);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  v4 = *v3;
  if ( v4 == 2 )
  {
    v5 = a2[2];
    v6 = a1[2];
  }
  else if ( v4 == 1 )
  {
    v5 = a2[1];
    v6 = a1[1];
  }
  else
  {
    v5 = a2[3];
    v6 = a1[3];
  }
  return v6 == v5;
}


// ======================================================================
// ADDR: 0xec3ac
// SYMBOL: sub_EC3AC
int __fastcall sub_EC3AC(_DWORD *a1, int a2)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return sub_EC3D4(a2, a1);
}


// ======================================================================
