// ADDR: 0xf4af8
// SYMBOL: sub_F4AF8
int __fastcall sub_F4AF8(int a1, char *a2, const char *a3)
{
  size_t v6; // r0
  char *v7; // r5
  size_t v8; // r0
  int result; // r0

  _android_log_print(4, "AXL", "CustomMapIcon: AddIconModel(%i, %s, \"%s\")", *(_DWORD *)(a1 + 1524), a2, a3);
  v6 = strlen(a3);
  v7 = (char *)operator new[](v6 + 1);
  *(_DWORD *)(a1 + 8 * *(_DWORD *)(a1 + 1524)) = v7;
  v8 = strlen(a3);
  sub_22178C((int)v7, v8 + 1);
  strcpy(v7, a3);
  std::string::assign(a1 + 12 * *(_DWORD *)(a1 + 1524) + 1528, a2);
  result = *(_DWORD *)(a1 + 1524) + 1;
  *(_DWORD *)(a1 + 1524) = result;
  return result;
}


// ======================================================================
// ADDR: 0xf4bbc
// SYMBOL: sub_F4BBC
int __fastcall sub_F4BBC(int *a1, char *a2)
{
  int v3; // r5
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r3
  __int64 v11; // d16
  int v12; // r2
  int v13; // r1
  int v14; // r6
  int v16; // [sp+4h] [bp-24h] BYREF
  int v17; // [sp+8h] [bp-20h]
  int v18; // [sp+Ch] [bp-1Ch]
  int v19; // [sp+10h] [bp-18h]

  v3 = *a1;
  v5 = 357913941;
  v6 = -1431655765 * ((a1[1] - *a1) >> 2) + 1;
  if ( v6 > 0x15555555 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  if ( v6 <= 1431655766 * ((a1[2] - v3) >> 2) )
    v6 = 1431655766 * ((a1[2] - v3) >> 2);
  if ( (unsigned int)(-1431655765 * ((a1[2] - v3) >> 2)) < 0xAAAAAAA )
    v5 = v6;
  sub_F4C90(&v16, v5);
  sub_DC6DC((_DWORD *)v18, a2);
  v7 = v17;
  v9 = a1[1];
  v8 = *a1;
  v10 = v18 + 12;
  v18 += 12;
  if ( v9 == v8 )
  {
    v12 = v8;
  }
  else
  {
    do
    {
      v11 = *(_QWORD *)(v9 - 12);
      *(_DWORD *)(v7 - 4) = *(_DWORD *)(v9 - 4);
      *(_QWORD *)(v7 - 12) = v11;
      *(_DWORD *)(v9 - 12) = 0;
      *(_DWORD *)(v9 - 8) = 0;
      *(_DWORD *)(v9 - 4) = 0;
      v9 -= 12;
      v7 = v17 - 12;
      v17 -= 12;
    }
    while ( v9 != v8 );
    v10 = v18;
    v8 = a1[1];
    v12 = *a1;
  }
  *a1 = v7;
  v13 = a1[2];
  v14 = v19;
  v16 = v12;
  v17 = v12;
  v18 = v8;
  v19 = v13;
  a1[1] = v10;
  a1[2] = v14;
  return sub_F4CE8(&v16);
}


// ======================================================================
// ADDR: 0xf4d2e
// SYMBOL: sub_F4D2E
void **__fastcall sub_F4D2E(void **a1)
{
  if ( *a1 )
  {
    sub_F4D48(a1);
    operator delete(*a1);
  }
  return a1;
}


// ======================================================================
