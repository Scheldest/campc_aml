// ADDR: 0xf1dd4
// SYMBOL: sub_F1DD4
int __fastcall sub_F1DD4(int a1, int a2, int a3)
{
  int v4; // r0

  v4 = std::string::basic_string(a1, a2);
  return std::__fs::filesystem::path::operator/=(v4, a3);
}


// ======================================================================
// ADDR: 0xfa9e4
// SYMBOL: sub_FA9E4
int __fastcall sub_FA9E4(int a1, int a2, int a3, int a4)
{
  _DWORD v6[5]; // [sp+4h] [bp-14h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  v6[2] = a3;
  v6[0] = a4;
  v6[1] = a2;
  sub_FB098(a1, v6);
  return a1;
}


// ======================================================================
// ADDR: 0xfaa20
// SYMBOL: sub_FAA20
_DWORD *__fastcall sub_FAA20(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  char *v5; // r5
  int v6; // r2
  void *v7; // r6

  v5 = (char *)*((_DWORD *)a2 + 2);
  v6 = *a2 << 31;
  v7 = a1 + 2;
  *a1 = &off_22A798;
  a1[1] = 0;
  if ( !v6 )
    v5 = (char *)(a2 + 1);
  a1[25] = &off_22A7AC;
  std::ios_base::init((std::ios_base *)(a1 + 25), v7);
  a1[43] = 0;
  a1[44] = -1;
  a1[25] = &off_22A774;
  *a1 = &off_22A760;
  sub_E6108((int)v7);
  if ( !sub_E61BC((int)v7, v5, a3 | 8) )
    std::ios_base::clear(
      (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16) | 4);
  return a1;
}


// ======================================================================
// ADDR: 0xfaf68
// SYMBOL: sub_FAF68
int sub_FAF68()
{
  int v0; // r0
  int result; // r0

  v0 = (unsigned __int8)byte_247390;
  __dmb(0xBu);
  result = v0 << 31;
  if ( !result )
  {
    result = j___cxa_guard_acquire((__guard *)&byte_247390);
    if ( result )
    {
      dword_247388 = 0;
      _cxa_atexit((void (*)(void *))sub_FAE00, &unk_247378, &off_22A540);
      return sub_2242B0(&byte_247390);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xfafc0
// SYMBOL: sub_FAFC0
int __fastcall sub_FAFC0(int a1, int a2)
{
  int v3; // r0
  int v4; // r0

  v3 = *(_DWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( a2 == v3 )
    {
      *(_DWORD *)(a1 + 16) = a1;
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
      return a1;
    }
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(a1 + 16) = v4;
  return a1;
}


// ======================================================================
// ADDR: 0xfafec
// SYMBOL: sub_FAFEC
_DWORD *__fastcall sub_FAFEC(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0
  int v5; // r1
  int v6; // r0

  v3 = (_DWORD *)a1[4];
  a1[4] = 0;
  if ( a1 == v3 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v3 )
      goto LABEL_6;
    v5 = 5;
  }
  (*(void (**)(void))(*v3 + 4 * v5))();
LABEL_6:
  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    if ( a2 == v6 )
    {
      a1[4] = a1;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), a1);
    }
    else
    {
      a1[4] = v6;
      *(_DWORD *)(a2 + 16) = 0;
    }
  }
  else
  {
    a1[4] = 0;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x12cd48
// SYMBOL: sub_12CD48
void __fastcall sub_12CD48(int a1, int a2, const char *a3, size_t a4, int a5)
{
  char *v9; // r6
  char *v10; // r1
  _BYTE v11[4]; // [sp+8h] [bp-40h] BYREF
  int v12; // [sp+Ch] [bp-3Ch] BYREF
  _DWORD v13[2]; // [sp+10h] [bp-38h] BYREF
  void *v14; // [sp+18h] [bp-30h]
  _BYTE v15[4]; // [sp+1Ch] [bp-2Ch] BYREF
  int *v16; // [sp+20h] [bp-28h] BYREF
  int **v17; // [sp+24h] [bp-24h] BYREF

  _android_log_print(3, "AXL", "Register chat command %s", a3);
  if ( *a3 == 47 )
  {
    v16 = (int *)sub_12DC50(v15, a3, a4);
    v17 = &v16;
    sub_12E28C(v13, a2 + 84);
    sub_12DD34(a1, v13[0] + 20, a5);
    return;
  }
  if ( a4 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v13);
  if ( a4 >= 0xB )
  {
    v9 = (char *)operator new((a4 + 16) & 0xFFFFFFF0);
    v13[1] = a4;
    v14 = v9;
    v13[0] = ((a4 + 16) & 0xFFFFFFF0) + 1;
  }
  else
  {
    LOBYTE(v13[0]) = 2 * a4;
    v9 = (char *)v13 + 1;
    if ( !a4 )
      goto LABEL_9;
  }
  j_memcpy(v9, a3, a4);
LABEL_9:
  v9[a4] = 0;
  v10 = (char *)v14;
  if ( !(LOBYTE(v13[0]) << 31) )
    v10 = (char *)v13 + 1;
  std::string::insert(v13, v10, 47);
  v12 = sub_12DE18(v11, v13);
  v16 = &v12;
  sub_12E28C(&v17, a2 + 84);
  sub_12DD34(a1, v17 + 5, a5);
  if ( LOBYTE(v13[0]) << 31 )
    operator delete(v14);
}


// ======================================================================
