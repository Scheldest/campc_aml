// ADDR: 0xf0bc0
// SYMBOL: sub_F0BC0
int sub_F0BC0()
{
  int v0; // r0
  char *v1; // r0
  int v2; // r0
  double v3; // d16
  int v4; // r0
  double v5; // d16
  int v6; // r6
  float v7; // s2
  void (__fastcall *v8)(int); // r1
  int v9; // r4
  int v10; // r4
  int v11; // r4
  int v12; // r0
  void *v14[3]; // [sp+4h] [bp-3Ch] BYREF
  double v15; // [sp+10h] [bp-30h] BYREF
  void *v16; // [sp+18h] [bp-28h]
  double v17; // [sp+20h] [bp-20h] BYREF
  void *v18; // [sp+28h] [bp-18h]

  v0 = _android_log_print(4, "AXL", "Resolution: %i x %i", *(_DWORD *)(dword_2636B4 + 4), *(_DWORD *)(dword_2636B4 + 8));
  v1 = (char *)sub_F97EC(v0);
  sub_DC6DC(v14, v1);
  v2 = std::string::append((int)v14, "fonts/");
  v3 = *(double *)v2;
  v16 = *(void **)(v2 + 8);
  v15 = v3;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  v4 = std::string::append((int)&v15, "arial_bold.ttf");
  v5 = *(double *)v4;
  v18 = *(void **)(v4 + 8);
  v17 = v5;
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  if ( LOBYTE(v15) << 31 )
    operator delete(v16);
  if ( LOBYTE(v14[0]) << 31 )
    operator delete(v14[2]);
  v6 = operator new(0x88u);
  v7 = (float)*(int *)(dword_2636B4 + 8);
  *(float *)&v15 = (float)*(int *)(dword_2636B4 + 4);
  *((float *)&v15 + 1) = v7;
  sub_129E70(v6, &v15, &v17);
  v8 = *(void (__fastcall **)(int))(*(_DWORD *)v6 + 48);
  dword_23DEEC = v6;
  v8(v6);
  (*(void (__fastcall **)(int))(*(_DWORD *)dword_23DEEC + 8))(dword_23DEEC);
  if ( LOBYTE(v17) << 31 )
    operator delete(v18);
  sub_17C21C(dword_381BF4);
  v9 = operator new(0xCu);
  sub_F1414();
  dword_23DEF8 = v9;
  v10 = operator new(1u);
  sub_F1F46();
  dword_23DF10 = v10;
  v11 = operator new(0x2Cu);
  sub_10E584();
  dword_23DF14 = v11;
  v12 = sub_F421C();
  return sub_F5398(v12);
}


// ======================================================================
// ADDR: 0xf6580
// SYMBOL: sub_F6580
char *sub_F6580()
{
  int v0; // r0
  char *v1; // r5
  char *v2; // r1
  int v3; // r0
  char *result; // r0

  v0 = (unsigned __int8)byte_2401E8;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_2401E8) )
  {
    sub_DC6DC(&byte_2400E0, "karbon");
    sub_DC6DC(dword_2400EC, "wad1");
    sub_DC6DC(&dword_2400EC[3], "wad2");
    sub_DC6DC(&dword_2400EC[6], "wad3");
    sub_DC6DC(&dword_2400EC[9], "wad4");
    sub_DC6DC(&dword_2400EC[12], "wad5");
    sub_DC6DC(&dword_2400EC[15], "wad6");
    sub_DC6DC(&dword_2400EC[18], "wad7");
    sub_DC6DC(&dword_2400EC[21], "wad8");
    sub_DC6DC(&dword_2400EC[24], "wad9");
    sub_DC6DC(&dword_2400EC[27], "wad10");
    sub_DC6DC(&dword_2400EC[30], "wad11");
    sub_DC6DC(&dword_2400EC[33], "wad12");
    sub_DC6DC(&dword_2400EC[36], "wad13");
    sub_DC6DC(&dword_2400EC[39], "wad14");
    sub_DC6DC(&dword_2400EC[42], "wad15");
    sub_DC6DC(&dword_2400EC[45], "wad16");
    sub_DC6DC(&dword_2400EC[48], "wad17");
    sub_DC6DC(&dword_2400EC[51], "white");
    sub_DC6DC(&dword_2400EC[54], "fire_8years");
    sub_DC6DC(&dword_2400EC[57], "eagle_8years");
    sub_DC6DC(&dword_2400EC[60], "blue_8years");
    _cxa_atexit((void (*)(void *))sub_F682C, 0, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_2401E8);
  }
  v1 = &byte_2400E0;
  do
  {
    v2 = (char *)*((_DWORD *)v1 + 2);
    if ( !((unsigned __int8)*v1 << 31) )
      v2 = v1 + 1;
    v3 = sub_1085C0("vinils", v2);
    sub_F68D4(v1, v3);
    v1 += 12;
  }
  while ( v1 != &byte_2401E8 );
  sub_164196(dword_23DF24 + 6757028, sub_F6538, &off_2400D8);
  sub_164196(dword_23DF24 + 6759036, sub_F655C, &off_2400DC);
  _android_log_print(4, "AXL", "[VehicleMaterials]: call install");
  result = &byte_2401EC;
  byte_2401EC = 1;
  return result;
}


// ======================================================================
// ADDR: 0xfb9f8
// SYMBOL: sub_FB9F8
bool __fastcall sub_FB9F8(_BYTE *a1, _BYTE *a2)
{
  int v2; // r3
  int v4; // r2
  unsigned int v6; // r4
  unsigned int v7; // lr
  unsigned int v8; // r2

  if ( *a1 )
  {
    v2 = 0;
    while ( a1[++v2] )
      ;
  }
  else
  {
    v2 = 0;
  }
  if ( *a2 )
  {
    v4 = 0;
    while ( a2[++v4] )
      ;
  }
  else
  {
    v4 = 0;
  }
  if ( v2 != v4 )
    return 0;
  v6 = 0;
  do
  {
    v7 = v6;
    v8 = 0;
    if ( *a1 )
    {
      while ( a1[++v8] )
        ;
    }
    if ( v7 >= v8 )
      break;
    v6 = v7 + 1;
  }
  while ( a1[v7] == a2[v7] );
  return v7 >= v8;
}


// ======================================================================
// ADDR: 0x163a28
// SYMBOL: sub_163A28
int __fastcall sub_163A28(int a1, int a2, int a3, int (__fastcall **a4)(int))
{
  int result; // r0
  bool v6; // zf
  int (__fastcall *v7)(int); // r3

  result = 0;
  v6 = dword_23DF24 == 0;
  if ( dword_23DF24 )
  {
    a4 = (int (__fastcall **)(int))(dword_23DF24 + 6765348);
    v6 = dword_23DF24 == -6765348;
  }
  if ( !v6 )
  {
    v7 = *a4;
    if ( v7 )
      return v7(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
