// ADDR: 0x124658
// SYMBOL: sub_124658
int sub_124658()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_263D24;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_263D24);
    if ( result )
    {
      sub_125EB4(dword_263C74);
      _cxa_atexit((void (*)(void *))sub_EDE5C, dword_263C74, &off_22A540);
      return sub_2242B0(&byte_263D24);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1246cc
// SYMBOL: sub_1246CC
int __fastcall sub_1246CC(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4
  unsigned int v8; // r5
  void *v9; // r0
  char *v10; // r10
  int v11; // r4
  __int64 v12; // d17
  int v13; // r5
  int v14; // r2
  const void *v15; // r1
  int v16; // r2
  int v17; // r0
  void *v18; // r0
  const void *v19; // r1
  int v20; // r0
  void *v21; // r0
  const void *v22; // r1
  int v23; // r0
  _DWORD *v24; // r4
  __int64 v25; // d17
  int v26; // r2
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r0
  void *v31; // r10
  void *v32; // r5
  int v33; // r0
  int v34; // r5
  int v35; // r0
  char *v37; // [sp+14h] [bp-3Ch]
  char *dest; // [sp+18h] [bp-38h]
  int v39; // [sp+1Ch] [bp-34h]
  int v40; // [sp+28h] [bp-28h]

  v6 = a3 << 6;
  v8 = (a3 << 6) + 224 * a2 + 88 * a4 + 60 * a5 + 20;
  v39 = 7 * a2;
  v40 = operator new[](v8);
  sub_22178C(v40, v8);
  v9 = (void *)(v40 + 20);
  v10 = (char *)(v40 + 20 + 32 * v39);
  dest = &v10[v6];
  v37 = &v10[88 * a4 + v6];
  if ( dword_263C44 )
  {
    v11 = dword_238E90;
    v12 = *(_QWORD *)(dword_263C44 + 8);
    v13 = dword_263C44 + 20;
    v14 = *(_DWORD *)(dword_263C44 + 16);
    v15 = (const void *)(dword_263C44 + 20);
    *(_QWORD *)v40 = *(_QWORD *)dword_263C44;
    *(_QWORD *)(v40 + 8) = v12;
    *(_DWORD *)(v40 + 16) = v14;
    v16 = a2;
    if ( v11 < a2 )
      v16 = v11;
    j_memcpy(v9, v15, 224 * v16);
    v17 = dword_238E94;
    if ( dword_238E94 >= a3 )
      v17 = a3;
    v18 = j_memcpy(v10, (const void *)(v13 + 224 * v11), v17 << 6);
    v19 = (const void *)sub_125974(v18);
    v20 = dword_238E98;
    if ( dword_238E98 >= a4 )
      v20 = a4;
    v21 = j_memcpy(dest, v19, 88 * v20);
    v22 = (const void *)sub_1259CC(v21);
    v23 = dword_238E9C;
    if ( dword_238E9C >= a5 )
      v23 = a5;
    j_memcpy(v37, v22, 60 * v23);
    if ( dword_263C44 )
      operator delete[]((void *)dword_263C44);
  }
  else
  {
    v24 = (_DWORD *)dword_23DF24;
    v25 = *(_QWORD *)(dword_23DF24 + 10512064);
    *(_QWORD *)v40 = *(_QWORD *)(dword_23DF24 + 10512056);
    *(_QWORD *)(v40 + 8) = v25;
    *(_DWORD *)(v40 + 16) = v24[2628018];
    v26 = a2;
    LOWORD(v27) = 26316;
    if ( a2 >= 210 )
      v26 = 210;
    HIWORD(v27) = 160;
    j_memcpy(v9, (char *)v24 + v27, 224 * v26);
    v28 = a3;
    if ( a3 >= 13 )
      v28 = 13;
    j_memcpy(v10, v24 + 2639779, v28 << 6);
    v29 = a4;
    if ( a4 >= 24 )
      v29 = 24;
    j_memcpy(dest, v24 + 2639987, 88 * v29);
    v30 = a5;
    if ( a5 >= 12 )
      v30 = 12;
    j_memcpy(v37, v24 + 2640515, 60 * v30);
  }
  v31 = (void *)operator new[](2 * v39);
  sub_22178C((int)v31, 2 * v39);
  v32 = (void *)dword_263C48;
  if ( dword_263C48 )
  {
    v33 = dword_238E90;
    if ( dword_238E90 >= a2 )
      v33 = a2;
    j_memcpy(v31, (const void *)dword_263C48, 14 * v33);
    operator delete[](v32);
    v34 = dword_23DF24;
  }
  else
  {
    v34 = dword_23DF24;
    v35 = a2;
    if ( a2 >= 210 )
      v35 = 210;
    j_memcpy(v31, (const void *)(dword_23DF24 + 7014060), 14 * v35);
  }
  sub_1641C4(v34 + 6780872);
  *(_DWORD *)(dword_23DF24 + 6780872) = v40;
  sub_1641C4(dword_23DF24 + 6788276);
  *(_DWORD *)(dword_23DF24 + 6788276) = v31;
  dword_263C44 = v40;
  dword_263C48 = (int)v31;
  dword_238E90 = a2;
  dword_238E94 = a3;
  dword_238E98 = a4;
  dword_238E9C = a5;
  _android_log_print(4, "AXL", "CHandlingHook: New entries count - %d", a2);
  _android_log_print(4, "AXL", "CHandlingHook: New bikes count - %d", a3);
  _android_log_print(4, "AXL", "CHandlingHook: New flyings count - %d", a4);
  return sub_2242C8(4, "AXL", "CHandlingHook: New boats count - %d", a5);
}


// ======================================================================
// ADDR: 0x12528c
// SYMBOL: sub_12528C
int __fastcall sub_12528C(int a1, char *a2)
{
  int v3; // r1
  int v4; // r0
  _DWORD *v5; // r5
  size_t v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  int v9; // r0
  int v10; // r5
  _BYTE v12[20]; // [sp+4h] [bp-14h] BYREF

  v3 = sub_125A8C(a1, a2);
  if ( v3 != dword_238E90 )
    return sub_2242C8(
             5,
             "AXL",
             "CHandlingHook: Can't add handling for car \"%s\". Handling with this name already exists",
             a2);
  v4 = dword_238EA0 + 1;
  if ( dword_238EA0 + 1 >= v3 )
  {
    _android_log_print(4, "AXL", "CHandlingHook: No free entries for car \"%s\". Extending pools", a2);
    sub_1246CC(dword_238E94, dword_238E90 + 1, dword_238E94, dword_238E98, dword_238E9C);
    v4 = dword_238EA0 + 1;
  }
  sub_125AF0(v4, a2);
  sub_124658();
  v5 = sub_FB2B4(dword_263C74, (int)"{ eVehicle_t::VEHICLE, \"", 24);
  v6 = strlen(a2);
  v7 = sub_FB2B4(v5, (int)a2, v6);
  v8 = sub_FB2B4(v7, (int)"\" },", 4);
  std::ios_base::getloc((std::ios_base *)v12);
  v9 = std::locale::use_facet((std::locale *)v12, (std::locale::id *)&std::ctype<char>::id);
  v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v9 + 28))(v9, 10);
  std::locale::~locale((std::locale *)v12);
  std::ostream::put(v8, v10);
  return std::ostream::flush(v8);
}


// ======================================================================
// ADDR: 0x1253b8
// SYMBOL: sub_1253B8
int __fastcall sub_1253B8(int a1, char *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r4
  unsigned int v7; // r5
  void *v8; // r6
  int v9; // r4
  _DWORD *v10; // r4
  size_t v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r4
  int v14; // r0
  int v15; // r5
  _BYTE v17[28]; // [sp+4h] [bp-1Ch] BYREF

  v3 = sub_125A8C(a1, a2);
  if ( v3 != dword_238E90 )
    return _android_log_print(
             5,
             "AXL",
             "CHandlingHook: Can't add handling for bike \"%s\". Handling with this name already exists at %d",
             a2,
             v3);
  v4 = dword_238EA0 + 1;
  if ( dword_238EA0 + 1 >= v3 || (v5 = dword_238EA4, dword_238EA4 >= dword_238E94 + 161) )
  {
    _android_log_print(4, "AXL", "CHandlingHook: No free entries for bike \"%s\". Extending pools", a2);
    sub_1246CC(dword_238E90, dword_238E90 + 1, dword_238E94 + 1, dword_238E98, dword_238E9C);
    v5 = dword_238EA4;
    v4 = dword_238EA0 + 1;
  }
  dword_238EA4 = v5 + 1;
  dword_238EA0 = v4;
  sub_125B8C();
  v6 = dword_238EA4;
  v7 = 14 * (dword_238E90 - dword_238EA4);
  v8 = (void *)operator new[](v7);
  v9 = dword_263C48 + 14 * v6;
  j_memcpy(v8, (const void *)v9, v7);
  j_memcpy((void *)(v9 + 14), v8, v7);
  operator delete[](v8);
  sub_125AF0(dword_238EA4, a2);
  sub_124658();
  v10 = sub_FB2B4(dword_263C74, (int)"{ eVehicle_t::BIKE, \"", 21);
  v11 = strlen(a2);
  v12 = sub_FB2B4(v10, (int)a2, v11);
  v13 = sub_FB2B4(v12, (int)"\" },", 4);
  std::ios_base::getloc((std::ios_base *)v17);
  v14 = std::locale::use_facet((std::locale *)v17, (std::locale::id *)&std::ctype<char>::id);
  v15 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 28))(v14, 10);
  std::locale::~locale((std::locale *)v17);
  std::ostream::put(v13, v15);
  return std::ostream::flush(v13);
}


// ======================================================================
// ADDR: 0x125590
// SYMBOL: sub_125590
int __fastcall sub_125590(int a1, char *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r4
  unsigned int v7; // r5
  void *v8; // r6
  int v9; // r4
  _DWORD *v10; // r4
  size_t v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r4
  int v14; // r0
  int v15; // r5
  _BYTE v17[32]; // [sp+8h] [bp-20h] BYREF

  v3 = sub_125A8C(a1, a2);
  if ( v3 != dword_238E90 )
    return sub_2242C8(
             5,
             "AXL",
             "CHandlingHook: Can't add handling for flying \"%s\". Handling with this name already exists",
             a2);
  v4 = dword_238EA0 + 1;
  if ( dword_238EA0 + 1 >= v3
    || (v5 = dword_238EA8 + 1, dword_238EA8 + 1 >= dword_238E94 + dword_238E9C + dword_238E98 + 161) )
  {
    _android_log_print(4, "AXL", "CHandlingHook: No free entries for flying \"%s\". Extending pools", a2);
    sub_1246CC(dword_238E90, dword_238E90 + 1, dword_238E94, dword_238E98 + 1, dword_238E9C);
    v5 = dword_238EA8 + 1;
    v4 = dword_238EA0 + 1;
  }
  dword_238EA8 = v5;
  dword_238EA0 = v4;
  sub_125B8C();
  v6 = dword_238EA8;
  v7 = 14 * (dword_238E90 - dword_238EA8);
  v8 = (void *)operator new[](v7);
  v9 = dword_263C48 + 14 * v6;
  j_memcpy(v8, (const void *)v9, v7);
  j_memcpy((void *)(v9 + 14), v8, v7);
  operator delete[](v8);
  sub_125AF0(dword_238EA8, a2);
  sub_124658();
  v10 = sub_FB2B4(dword_263C74, (int)"{ eVehicle_t::FLYING, \"", 23);
  v11 = strlen(a2);
  v12 = sub_FB2B4(v10, (int)a2, v11);
  v13 = sub_FB2B4(v12, (int)"\" },", 4);
  std::ios_base::getloc((std::ios_base *)v17);
  v14 = std::locale::use_facet((std::locale *)v17, (std::locale::id *)&std::ctype<char>::id);
  v15 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14 + 28))(v14, 10);
  std::locale::~locale((std::locale *)v17);
  std::ostream::put(v13, v15);
  return std::ostream::flush(v13);
}


// ======================================================================
// ADDR: 0x125788
// SYMBOL: sub_125788
int __fastcall sub_125788(int a1, char *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v7; // r4
  unsigned int v8; // r5
  void *v9; // r6
  int v10; // r4
  _DWORD *v11; // r4
  size_t v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r5
  _BYTE v17[28]; // [sp+4h] [bp-1Ch] BYREF

  v3 = sub_125A8C(a1, a2);
  if ( v3 != dword_238E90 )
    return sub_2242C8(
             5,
             "AXL",
             "CHandlingHook: Can't add handling for boat \"%s\". Handling with this name already exists",
             a2);
  v4 = dword_238EA0 + 1;
  if ( dword_238EA0 + 1 >= v3 || (v5 = dword_238EAC + 1, dword_238EAC + 1 >= dword_238E9C + dword_238E94 + 161) )
  {
    _android_log_print(4, "AXL", "CHandlingHook: No free entries for boat \"%s\". Extending pools", a2);
    sub_1246CC(dword_238E90, dword_238E90 + 1, dword_238E94, dword_238E98, dword_238E9C + 1);
    v5 = dword_238EAC + 1;
    v4 = dword_238EA0 + 1;
  }
  dword_238EAC = v5;
  dword_238EA0 = v4;
  sub_125B8C();
  v7 = dword_238EAC;
  v8 = 14 * (dword_238E90 - dword_238EAC);
  v9 = (void *)operator new[](v8);
  v10 = dword_263C48 + 14 * v7;
  j_memcpy(v9, (const void *)v10, v8);
  j_memcpy((void *)(v10 + 14), v9, v8);
  operator delete[](v9);
  sub_125AF0(dword_238EAC, a2);
  sub_124658();
  v11 = sub_FB2B4(dword_263C74, (int)"{ eVehicle_t::BOAT, \"", 21);
  v12 = strlen(a2);
  v13 = sub_FB2B4(v11, (int)a2, v12);
  v14 = sub_FB2B4(v13, (int)"\" },", 4);
  std::ios_base::getloc((std::ios_base *)v17);
  v15 = std::locale::use_facet((std::locale *)v17, (std::locale::id *)&std::ctype<char>::id);
  v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 28))(v15, 10);
  std::locale::~locale((std::locale *)v17);
  std::ostream::put(v14, v16);
  return std::ostream::flush(v14);
}


// ======================================================================
