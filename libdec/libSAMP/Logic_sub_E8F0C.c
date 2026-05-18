// ADDR: 0xe9766
// SYMBOL: sub_E9766
int __fastcall sub_E9766(_DWORD *a1, unsigned __int8 *a2)
{
  int v2; // r2
  _DWORD *v3; // r1

  *a1 = a2;
  a1[3] = 0x80000000;
  v2 = *a2;
  a1[2] = 0;
  a1[1] = 0;
  v3 = a1 + 1;
  if ( v2 == 2 )
  {
    v3 = a1 + 2;
  }
  else if ( v2 != 1 )
  {
    return sub_E9A78(a1, v3);
  }
  *v3 = 0;
  return sub_E9A78(a1, v3);
}


// ======================================================================
// ADDR: 0xe979c
// SYMBOL: sub_E979C
unsigned __int8 *__fastcall sub_E979C(_DWORD *a1)
{
  unsigned __int8 *result; // r0
  int v3; // r1
  void *exception; // r4
  _DWORD v5[7]; // [sp+4h] [bp-1Ch] BYREF

  result = (unsigned __int8 *)*a1;
  v3 = *result;
  if ( v3 == 2 )
    return (unsigned __int8 *)a1[2];
  if ( v3 == 1 )
    return (unsigned __int8 *)(a1[1] + 32);
  if ( a1[3] )
  {
    exception = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(v5, "cannot get value");
    sub_E9B38(exception, 214, v5, *a1);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  return result;
}


// ======================================================================
// ADDR: 0xe9824
// SYMBOL: sub_E9824
unsigned __int8 *__fastcall sub_E9824(unsigned __int8 **a1, unsigned __int8 *a2, unsigned __int8 **a3)
{
  int v5; // r0
  unsigned __int8 *result; // r0
  int v7; // r9
  unsigned __int8 *v8; // r8
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r6
  unsigned __int8 v11; // r2
  char v12; // r1
  __int64 v13; // kr00_8
  __int64 v14; // kr08_8
  unsigned __int8 *v15; // r6
  void **v16; // r0
  void *v17; // r0
  void *v18; // r1
  void *exception; // r4
  void *v20; // r4
  void *v21; // r4
  char *v22; // r0
  int v23; // r0
  double v24; // d16
  void *v25[2]; // [sp+4h] [bp-3Ch] BYREF
  double v26; // [sp+10h] [bp-30h] BYREF
  __int64 v27; // [sp+18h] [bp-28h]

  if ( *a3 != a2 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(&v26, "iterator does not fit current value");
    sub_E9B38(exception, 202, &v26, a2);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  v5 = *a2;
  *a1 = a2;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = (unsigned __int8 *)0x80000000;
  if ( v5 == 2 )
  {
    v7 = *((_DWORD *)a2 + 2);
    v8 = a3[2];
    v9 = *(unsigned __int8 **)(v7 + 4);
    v10 = v8 + 16;
    a1[2] = v9;
    if ( v8 + 16 == v9 )
    {
      v15 = v8;
    }
    else
    {
      result = (unsigned __int8 *)&v26;
      do
      {
        v11 = *v10;
        v12 = *(v10 - 16);
        v13 = *((_QWORD *)v10 + 1);
        *((_DWORD *)v10 + 2) = 0;
        *((_DWORD *)v10 + 3) = 0;
        *v10 = 0;
        *(v10 - 16) = v11;
        LOBYTE(v26) = v12;
        v14 = *((_QWORD *)v10 - 1);
        *((_QWORD *)v10 - 1) = v13;
        v27 = v14;
        result = sub_E3F7A(result);
        v10 += 16;
      }
      while ( v10 != v9 );
      v9 = *(unsigned __int8 **)(v7 + 4);
      v15 = v10 - 16;
      if ( v15 == v9 )
        goto LABEL_18;
    }
    do
    {
      v9 -= 16;
      result = sub_E3F7A(v9);
    }
    while ( v9 != v15 );
LABEL_18:
    a1[2] = v8;
    *(_DWORD *)(v7 + 4) = v15;
    return result;
  }
  if ( v5 == 1 )
  {
    a1[1] = (unsigned __int8 *)(*((_DWORD *)a2 + 2) + 4);
    result = (unsigned __int8 *)sub_E9E1C();
    a1[1] = result;
    return result;
  }
  a1[3] = (_BYTE *)(&dword_0 + 1);
  if ( (unsigned int)(v5 - 3) > 5 )
  {
    v21 = j___cxa_allocate_exception(0x10u);
    v22 = (char *)sub_E9DFC(a2);
    sub_DC6DC(v25, v22);
    v23 = std::string::insert((int)v25, 0, "cannot use erase() with ");
    v24 = *(double *)v23;
    LODWORD(v27) = *(_DWORD *)(v23 + 8);
    v26 = v24;
    *(_DWORD *)v23 = 0;
    *(_DWORD *)(v23 + 4) = 0;
    *(_DWORD *)(v23 + 8) = 0;
    sub_E9CB0(v21, 307, &v26, a2);
    j___cxa_throw(v21, (struct type_info *)&`typeinfo for'nlohmann::detail::type_error, (void (*)(void *))sub_E9438);
  }
  if ( a3[3] )
  {
    v20 = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(&v26, "iterator out of range");
    sub_E9B38(v20, 205, &v26, a2);
    j___cxa_throw(
      v20,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  if ( v5 == 8 )
  {
    v16 = (void **)*((_DWORD *)a2 + 2);
    v18 = *v16;
    if ( *v16 )
    {
      v16[1] = v18;
      v17 = v18;
      goto LABEL_21;
    }
LABEL_22:
    operator delete(v16);
    *((_DWORD *)a2 + 2) = 0;
    goto LABEL_23;
  }
  if ( v5 == 3 )
  {
    v16 = (void **)*((_DWORD *)a2 + 2);
    if ( *(unsigned __int8 *)v16 << 31 )
    {
      v17 = v16[2];
LABEL_21:
      operator delete(v17);
      v16 = (void **)*((_DWORD *)a2 + 2);
      goto LABEL_22;
    }
    goto LABEL_22;
  }
LABEL_23:
  result = 0;
  *a2 = 0;
  return result;
}


// ======================================================================
// ADDR: 0xe9a4c
// SYMBOL: sub_E9A4C
int *__fastcall sub_E9A4C(int *a1)
{
  int v2; // r0

  v2 = *(unsigned __int8 *)*a1;
  if ( v2 == 2 )
  {
    a1[2] += 16;
  }
  else if ( v2 == 1 )
  {
    sub_E5E4C(a1 + 1);
  }
  else
  {
    ++a1[3];
  }
  return a1;
}


// ======================================================================
// ADDR: 0xe9aa0
// SYMBOL: sub_E9AA0
bool __fastcall sub_E9AA0(unsigned __int8 **a1, unsigned __int8 **a2)
{
  unsigned __int8 *v3; // r0
  int v4; // r0
  unsigned __int8 *v5; // r0
  unsigned __int8 *v6; // r1
  void *exception; // r4
  _DWORD v9[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = *a1;
  if ( v3 != *a2 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(v9, "cannot compare iterators of different containers");
    sub_E9B38(exception, 212, v9, *a1);
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
