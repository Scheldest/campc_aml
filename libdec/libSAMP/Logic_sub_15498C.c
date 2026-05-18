// ADDR: 0x155624
// SYMBOL: sub_155624
unsigned __int8 *__fastcall sub_155624(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  int v4; // r0
  int v6; // r0
  unsigned __int8 *v8; // r0
  _DWORD *exception; // r4
  char *v11; // r0
  int v12; // r0
  unsigned __int64 v13; // d16
  unsigned __int8 *v14; // [sp+0h] [bp-30h] BYREF
  int v15; // [sp+4h] [bp-2Ch]
  int v16; // [sp+8h] [bp-28h]
  int v17; // [sp+Ch] [bp-24h]
  unsigned __int64 v18; // [sp+10h] [bp-20h] BYREF
  int v19; // [sp+18h] [bp-18h]
  unsigned int v20; // [sp+1Ch] [bp-14h]

  if ( *a1 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v11 = (char *)sub_E9DFC((char *)a1);
    sub_DC6DC(&v14, v11);
    v12 = std::string::insert((int)&v14, 0, "cannot use value() with ");
    v13 = *(_QWORD *)v12;
    v19 = *(_DWORD *)(v12 + 8);
    v18 = v13;
    *(_DWORD *)v12 = 0;
    *(_DWORD *)(v12 + 4) = 0;
    *(_DWORD *)(v12 + 8) = 0;
    sub_E9CB0(exception, 306, (unsigned __int8 *)&v18);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v4 = *((_DWORD *)a1 + 2);
  v20 = 0x80000000;
  v19 = 0;
  v18 = __PAIR64__(sub_EC2C0(v4, a2), (unsigned int)a1);
  v6 = *a1;
  v16 = 0;
  v17 = 0x80000000;
  v14 = a1;
  v15 = 0;
  if ( v6 == 2 )
  {
    v16 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 4);
  }
  else if ( v6 == 1 )
  {
    v15 = *((_DWORD *)a1 + 2) + 4;
  }
  else
  {
    v17 = 1;
  }
  if ( sub_EC314((unsigned __int8 **)&v18, &v14) )
    return *(unsigned __int8 **)a3;
  v8 = sub_EC238((unsigned __int8 **)&v18);
  v14 = 0;
  sub_15601C(v8, &v14);
  return v14;
}


// ======================================================================
// ADDR: 0x15a2ac
// SYMBOL: sub_15A2AC
void __fastcall sub_15A2AC(int a1)
{
  _BYTE v2[8]; // [sp+4h] [bp-14h] BYREF
  void *v3; // [sp+Ch] [bp-Ch]

  std::__fs::filesystem::path::path<char [12],void>((int)v2);
  sub_F1DD4(a1, (int)&dword_381A30, (int)v2);
  if ( v2[0] << 31 )
    operator delete(v3);
}


// ======================================================================
