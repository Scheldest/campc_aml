// ADDR: 0x138d5c
// SYMBOL: sub_138D5C
int __fastcall sub_138D5C(unsigned __int8 *a1, int a2)
{
  int v3; // r0
  _DWORD *v5; // r0
  int v6; // r1
  _DWORD *exception; // r4
  char *v9; // r0
  int v10; // r0
  double v11; // d16
  _DWORD v12[3]; // [sp+Ch] [bp-2Ch] BYREF
  double v13; // [sp+18h] [bp-20h] BYREF
  int v14; // [sp+20h] [bp-18h]
  _BYTE v15[20]; // [sp+24h] [bp-14h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      exception = j___cxa_allocate_exception(0x10u);
      v9 = (char *)sub_E9DFC((char *)a1);
      sub_DC6DC(v12, v9);
      v10 = std::string::insert((int)v12, 0, "cannot use operator[] with a string argument with ");
      v11 = *(double *)v10;
      v14 = *(_DWORD *)(v10 + 8);
      v13 = v11;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_DWORD *)(v10 + 8) = 0;
      sub_E9CB0(exception, 305, (unsigned __int8 *)&v13);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
        (void (*)(void *))sub_E9438);
    }
  }
  else
  {
    *a1 = 1;
    v5 = (_DWORD *)operator new(0xCu);
    v5[1] = 0;
    v5[2] = 0;
    *v5 = v5 + 1;
    *((_DWORD *)a1 + 2) = v5;
  }
  v6 = *((_DWORD *)a1 + 2);
  v12[0] = a2;
  sub_EA136((int)&v13, v6, a2, (int)&unk_B9357, (int)v12, (int)v15);
  return LODWORD(v13) + 32;
}


// ======================================================================
