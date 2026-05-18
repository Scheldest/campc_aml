// ADDR: 0xea136
// SYMBOL: sub_EA136
int __fastcall sub_EA136(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v9; // r6
  int result; // r0
  char v11; // r1
  _DWORD v12[3]; // [sp+8h] [bp-20h] BYREF
  _DWORD v13[5]; // [sp+14h] [bp-14h] BYREF

  v9 = (int *)sub_EA184(a2, v13);
  result = *v9;
  if ( *v9 )
  {
    v11 = 0;
  }
  else
  {
    sub_EA1F4(v12, a2, a4, a5, a6);
    sub_EA246(a2, v13[0], v9, v12[0]);
    result = v12[0];
    v11 = 1;
  }
  *(_BYTE *)(a1 + 4) = v11;
  *(_DWORD *)a1 = result;
  return result;
}


// ======================================================================
// ADDR: 0xeb1e8
// SYMBOL: sub_EB1E8
int __fastcall sub_EB1E8(int a1, std::__itoa *a2)
{
  int v4; // r0
  __int64 v5; // kr00_8
  unsigned int v6; // r0
  unsigned int v7; // r0
  _DWORD *exception; // r4
  int v10; // r0
  double v11; // d16
  _BYTE v12[12]; // [sp+4h] [bp-2Ch] BYREF
  double v13; // [sp+10h] [bp-20h] BYREF
  int v14; // [sp+18h] [bp-18h]

  v12[0] = 1;
  v4 = sub_EB41C(a1, v12);
  v5 = *(_QWORD *)(a1 + 8);
  LODWORD(v13) = v4;
  if ( (unsigned int)v5 >= HIDWORD(v5) )
  {
    sub_EB4C8(a1 + 4, &v13);
  }
  else
  {
    *(_DWORD *)v5 = v4;
    *(_DWORD *)(a1 + 8) = v5 + 4;
  }
  if ( a2 != (std::__itoa *)-1 )
  {
    v6 = **(char **)(*(_DWORD *)(a1 + 8) - 4);
    if ( v6 > 2 )
      v7 = 1;
    else
      v7 = dword_92190[v6];
    if ( v7 < (unsigned int)a2 )
    {
      exception = j___cxa_allocate_exception(0x10u);
      std::to_string((std::__ndk1 *)v12, a2);
      v10 = std::string::insert((int)v12, 0, "excessive object size: ");
      v11 = *(double *)v10;
      v14 = *(_DWORD *)(v10 + 8);
      v13 = v11;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_DWORD *)(v10 + 8) = 0;
      sub_E92EC(exception, 408, (unsigned __int8 *)&v13);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::out_of_range,
        (void (*)(void *))sub_E9438);
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xeb2e8
// SYMBOL: sub_EB2E8
int __fastcall sub_EB2E8(int a1, std::__itoa *a2)
{
  int v4; // r0
  __int64 v5; // kr00_8
  unsigned int v6; // r0
  unsigned int v7; // r0
  _DWORD *exception; // r4
  int v10; // r0
  double v11; // d16
  _BYTE v12[12]; // [sp+4h] [bp-2Ch] BYREF
  double v13; // [sp+10h] [bp-20h] BYREF
  int v14; // [sp+18h] [bp-18h]

  v12[0] = 2;
  v4 = sub_EB41C(a1, v12);
  v5 = *(_QWORD *)(a1 + 8);
  LODWORD(v13) = v4;
  if ( (unsigned int)v5 >= HIDWORD(v5) )
  {
    sub_EB4C8(a1 + 4, &v13);
  }
  else
  {
    *(_DWORD *)v5 = v4;
    *(_DWORD *)(a1 + 8) = v5 + 4;
  }
  if ( a2 != (std::__itoa *)-1 )
  {
    v6 = **(char **)(*(_DWORD *)(a1 + 8) - 4);
    if ( v6 > 2 )
      v7 = 1;
    else
      v7 = dword_92190[v6];
    if ( v7 < (unsigned int)a2 )
    {
      exception = j___cxa_allocate_exception(0x10u);
      std::to_string((std::__ndk1 *)v12, a2);
      v10 = std::string::insert((int)v12, 0, "excessive array size: ");
      v11 = *(double *)v10;
      v14 = *(_DWORD *)(v10 + 8);
      v13 = v11;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_DWORD *)(v10 + 8) = 0;
      sub_E92EC(exception, 408, (unsigned __int8 *)&v13);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::out_of_range,
        (void (*)(void *))sub_E9438);
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xeb3e8
// SYMBOL: sub_EB3E8
int __fastcall sub_EB3E8(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  _DWORD *exception; // r0
  _DWORD *v8; // r0

  v4 = *(unsigned __int8 *)(a1 + 21);
  *(_BYTE *)(a1 + 20) = 1;
  if ( v4 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v8 = sub_EA428(exception, a4);
    j___cxa_throw(v8, (struct type_info *)&`typeinfo for'nlohmann::detail::out_of_range, (void (*)(void *))sub_E9438);
  }
  return 0;
}


// ======================================================================
// ADDR: 0xeb63e
// SYMBOL: sub_EB63E
int __fastcall sub_EB63E(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  __int64 v6; // r2
  unsigned __int8 *v7; // r0
  __int64 v8; // kr08_8
  unsigned __int8 v9; // r2
  int v10; // r6
  __int64 v11; // d16
  unsigned __int8 *v12; // r0
  __int64 v13; // kr10_8
  unsigned __int8 v14; // r2
  int v15; // r5
  unsigned __int8 v16[8]; // [sp+0h] [bp-30h] BYREF
  __int64 v17; // [sp+8h] [bp-28h]
  unsigned __int8 v18[8]; // [sp+10h] [bp-20h] BYREF
  __int64 v19; // [sp+18h] [bp-18h]

  v3 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v6 = *a2;
    v19 = 0LL;
    v18[0] = 0;
    sub_EA660(v18, (int)a2, v6, HIDWORD(v6));
    v7 = *a1;
    v8 = *((_QWORD *)*a1 + 1);
    v9 = **a1;
    *v7 = v18[0];
    v10 = HIDWORD(v19);
    *((_DWORD *)v7 + 2) = v19;
    *((_DWORD *)v7 + 3) = v10;
    v18[0] = v9;
    v19 = v8;
    sub_E3F7A(v18);
    return (int)*a1;
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( *(_BYTE *)v4 == 2 )
    {
      sub_EB6FC(*(_DWORD *)(v4 + 8));
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1[2] - 1) + 8) + 4) - 16;
    }
    else
    {
      v11 = *a2;
      v17 = 0LL;
      v16[0] = 0;
      sub_EA660(v16, (int)a2, v11, HIDWORD(v11));
      v12 = a1[4];
      v13 = *((_QWORD *)v12 + 1);
      v14 = *v12;
      *v12 = v16[0];
      v15 = HIDWORD(v17);
      *((_DWORD *)v12 + 2) = v17;
      *((_DWORD *)v12 + 3) = v15;
      v16[0] = v14;
      v17 = v13;
      sub_E3F7A(v16);
      return (int)a1[4];
    }
  }
}


// ======================================================================
// ADDR: 0xeb7b0
// SYMBOL: sub_EB7B0
int __fastcall sub_EB7B0(unsigned __int8 **a1, unsigned __int8 *a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  int v6; // r1
  unsigned __int8 *v7; // r0
  __int64 v8; // kr08_8
  unsigned __int8 v9; // r2
  int v10; // r6
  int v11; // r1
  unsigned __int8 *v12; // r0
  __int64 v13; // kr10_8
  unsigned __int8 v14; // r2
  int v15; // r5
  unsigned __int8 v16[8]; // [sp+0h] [bp-30h] BYREF
  __int64 v17; // [sp+8h] [bp-28h]
  unsigned __int8 v18[8]; // [sp+10h] [bp-20h] BYREF
  __int64 v19; // [sp+18h] [bp-18h]

  v3 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v6 = *a2;
    v19 = 0LL;
    v18[0] = 0;
    sub_EA862(v18, v6);
    v7 = *a1;
    v8 = *((_QWORD *)*a1 + 1);
    v9 = **a1;
    *v7 = v18[0];
    v10 = HIDWORD(v19);
    *((_DWORD *)v7 + 2) = v19;
    *((_DWORD *)v7 + 3) = v10;
    v18[0] = v9;
    v19 = v8;
    sub_E3F7A(v18);
    return (int)*a1;
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( *(_BYTE *)v4 == 2 )
    {
      sub_EB862(*(_DWORD *)(v4 + 8));
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1[2] - 1) + 8) + 4) - 16;
    }
    else
    {
      v11 = *a2;
      v17 = 0LL;
      v16[0] = 0;
      sub_EA862(v16, v11);
      v12 = a1[4];
      v13 = *((_QWORD *)v12 + 1);
      v14 = *v12;
      *v12 = v16[0];
      v15 = HIDWORD(v17);
      *((_DWORD *)v12 + 2) = v17;
      *((_DWORD *)v12 + 3) = v15;
      v16[0] = v14;
      v17 = v13;
      sub_E3F7A(v16);
      return (int)a1[4];
    }
  }
}


// ======================================================================
// ADDR: 0xeb90a
// SYMBOL: sub_EB90A
int __fastcall sub_EB90A(int *a1)
{
  __int64 v2; // kr00_8
  int v3; // r0
  int v4; // r5
  __int64 v5; // kr08_8
  int v6; // r0
  __int64 v7; // kr10_8
  unsigned __int8 v8; // r2
  int v9; // r5
  int v11; // r0
  __int64 v12; // kr18_8
  unsigned __int8 v13; // r2
  int v14; // r5
  int v15; // r2
  __int64 v16; // r0
  int v17; // r0
  bool v18; // cf
  int v19; // r2
  _BYTE *v20; // r0
  int v21; // r2
  unsigned __int8 v22[8]; // [sp+0h] [bp-48h] BYREF
  __int64 v23; // [sp+8h] [bp-40h]
  unsigned __int8 v24[8]; // [sp+10h] [bp-38h] BYREF
  __int64 v25; // [sp+18h] [bp-30h]
  _DWORD v26[2]; // [sp+24h] [bp-24h] BYREF
  int v27; // [sp+2Ch] [bp-1Ch]

  v2 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    v6 = *a1;
    LODWORD(v25) = 0;
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_BYTE *)v6;
    *(_BYTE *)v6 = 0;
    v9 = HIDWORD(v25);
    *(_DWORD *)(v6 + 8) = v25;
    *(_DWORD *)(v6 + 12) = v9;
    v24[0] = v8;
    v25 = v7;
    sub_E3F7A(v24);
    return *a1;
  }
  else
  {
    v3 = *(_DWORD *)(HIDWORD(v2) - 4);
    if ( *(_BYTE *)v3 == 2 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v4 + 4);
      if ( (unsigned int)v5 >= HIDWORD(v5) )
      {
        v15 = v5 - *(_DWORD *)v4;
        HIDWORD(v16) = (v15 >> 4) + 1;
        if ( HIDWORD(v16) >= 0x10000000 )
          std::__vector_base_common<true>::__throw_length_error(v4);
        v17 = HIDWORD(v5) - *(_DWORD *)v4;
        if ( (unsigned int)v5 <= v17 >> 3 )
          HIDWORD(v16) = v17 >> 3;
        v18 = (unsigned int)v17 >= 0x7FFFFFF0;
        v19 = v15 >> 4;
        LODWORD(v16) = v26;
        if ( v18 )
          HIDWORD(v16) = 0xFFFFFFF;
        sub_E5D88(v16, v19, v4 + 8);
        v20 = (_BYTE *)v27;
        *(_DWORD *)(v27 + 8) = 0;
        v21 = v27;
        *v20 = 0;
        v27 = v21 + 16;
        sub_E5DD0((int *)v4, v26);
        sub_E5E26((int)v26);
      }
      else
      {
        *(_DWORD *)(v5 + 8) = 0;
        *(_BYTE *)v5 = 0;
        *(_DWORD *)(v4 + 4) = v5 + 16;
      }
      return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[2] - 4) + 8) + 4) - 16;
    }
    else
    {
      v11 = a1[4];
      LODWORD(v23) = 0;
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_BYTE *)v11;
      *(_BYTE *)v11 = 0;
      v14 = HIDWORD(v23);
      *(_DWORD *)(v11 + 8) = v23;
      *(_DWORD *)(v11 + 12) = v14;
      v22[0] = v13;
      v23 = v12;
      sub_E3F7A(v22);
      return a1[4];
    }
  }
}


// ======================================================================
// ADDR: 0xeba0c
// SYMBOL: sub_EBA0C
int __fastcall sub_EBA0C(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  __int64 v6; // r2
  unsigned __int8 *v7; // r0
  __int64 v8; // kr08_8
  unsigned __int8 v9; // r2
  int v10; // r6
  __int64 v11; // r2
  unsigned __int8 *v12; // r0
  __int64 v13; // kr10_8
  unsigned __int8 v14; // r2
  int v15; // r5
  unsigned __int8 v16[8]; // [sp+0h] [bp-30h] BYREF
  __int64 v17; // [sp+8h] [bp-28h]
  unsigned __int8 v18[8]; // [sp+10h] [bp-20h] BYREF
  __int64 v19; // [sp+18h] [bp-18h]

  v3 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v6 = *a2;
    v19 = 0LL;
    v18[0] = 0;
    sub_EAC24(v18, (int)a2, v6, SHIDWORD(v6));
    v7 = *a1;
    v8 = *((_QWORD *)*a1 + 1);
    v9 = **a1;
    *v7 = v18[0];
    v10 = HIDWORD(v19);
    *((_DWORD *)v7 + 2) = v19;
    *((_DWORD *)v7 + 3) = v10;
    v18[0] = v9;
    v19 = v8;
    sub_E3F7A(v18);
    return (int)*a1;
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( *(_BYTE *)v4 == 2 )
    {
      sub_EBAC2(*(_DWORD *)(v4 + 8));
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1[2] - 1) + 8) + 4) - 16;
    }
    else
    {
      v11 = *a2;
      v17 = 0LL;
      v16[0] = 0;
      sub_EAC24(v16, (int)a2, v11, SHIDWORD(v11));
      v12 = a1[4];
      v13 = *((_QWORD *)v12 + 1);
      v14 = *v12;
      *v12 = v16[0];
      v15 = HIDWORD(v17);
      *((_DWORD *)v12 + 2) = v17;
      *((_DWORD *)v12 + 3) = v15;
      v16[0] = v14;
      v17 = v13;
      sub_E3F7A(v16);
      return (int)a1[4];
    }
  }
}


// ======================================================================
// ADDR: 0xebb6e
// SYMBOL: sub_EBB6E
int __fastcall sub_EBB6E(int *a1, int a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  int v6; // r0
  int v7; // r1
  __int64 v8; // kr08_8
  unsigned __int8 v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r1
  __int64 v13; // kr10_8
  unsigned __int8 v14; // r3
  int v15; // r0
  unsigned __int8 v16[8]; // [sp+0h] [bp-28h] BYREF
  __int64 v17; // [sp+8h] [bp-20h]
  unsigned __int8 v18[8]; // [sp+10h] [bp-18h] BYREF
  __int64 v19; // [sp+18h] [bp-10h]

  v3 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v19 = 0LL;
    v6 = sub_EA114(a2);
    v7 = *a1;
    LODWORD(v19) = v6;
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_BYTE *)v7;
    *(_BYTE *)v7 = 3;
    v10 = HIDWORD(v19);
    *(_DWORD *)(v7 + 8) = v19;
    *(_DWORD *)(v7 + 12) = v10;
    v18[0] = v9;
    v19 = v8;
    sub_E3F7A(v18);
    return *a1;
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( *(_BYTE *)v4 == 2 )
    {
      sub_EBC06(*(_DWORD *)(v4 + 8));
      return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[2] - 4) + 8) + 4) - 16;
    }
    else
    {
      v17 = 0LL;
      v11 = sub_EA114(a2);
      v12 = a1[4];
      LODWORD(v17) = v11;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(_BYTE *)v12;
      *(_BYTE *)v12 = 3;
      v15 = HIDWORD(v17);
      *(_DWORD *)(v12 + 8) = v17;
      *(_DWORD *)(v12 + 12) = v15;
      v16[0] = v14;
      v17 = v13;
      sub_E3F7A(v16);
      return a1[4];
    }
  }
}


// ======================================================================
// ADDR: 0xebcb6
// SYMBOL: sub_EBCB6
int __fastcall sub_EBCB6(unsigned __int8 **a1, __int64 *a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  __int64 v6; // r2
  unsigned __int8 *v7; // r0
  __int64 v8; // kr08_8
  unsigned __int8 v9; // r2
  int v10; // r6
  __int64 v11; // r2
  unsigned __int8 *v12; // r0
  __int64 v13; // kr10_8
  unsigned __int8 v14; // r2
  int v15; // r5
  unsigned __int8 v16[8]; // [sp+0h] [bp-30h] BYREF
  __int64 v17; // [sp+8h] [bp-28h]
  unsigned __int8 v18[8]; // [sp+10h] [bp-20h] BYREF
  __int64 v19; // [sp+18h] [bp-18h]

  v3 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v6 = *a2;
    v19 = 0LL;
    v18[0] = 0;
    sub_EAFFC(v18, (int)a2, v6, SHIDWORD(v6));
    v7 = *a1;
    v8 = *((_QWORD *)*a1 + 1);
    v9 = **a1;
    *v7 = v18[0];
    v10 = HIDWORD(v19);
    *((_DWORD *)v7 + 2) = v19;
    *((_DWORD *)v7 + 3) = v10;
    v18[0] = v9;
    v19 = v8;
    sub_E3F7A(v18);
    return (int)*a1;
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( *(_BYTE *)v4 == 2 )
    {
      sub_EBD6C(*(_DWORD *)(v4 + 8));
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1[2] - 1) + 8) + 4) - 16;
    }
    else
    {
      v11 = *a2;
      v17 = 0LL;
      v16[0] = 0;
      sub_EAFFC(v16, (int)a2, v11, SHIDWORD(v11));
      v12 = a1[4];
      v13 = *((_QWORD *)v12 + 1);
      v14 = *v12;
      *v12 = v16[0];
      v15 = HIDWORD(v17);
      *((_DWORD *)v12 + 2) = v17;
      *((_DWORD *)v12 + 3) = v15;
      v16[0] = v14;
      v17 = v13;
      sub_E3F7A(v16);
      return (int)a1[4];
    }
  }
}


// ======================================================================
