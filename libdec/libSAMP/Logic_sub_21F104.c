// ADDR: 0x21f0b4
// SYMBOL: sub_21F0B4
int __fastcall sub_21F0B4(int a1, void *lpsrc)
{
  _BOOL4 v4; // r2
  _BYTE *v5; // r0

  if ( (*(_BYTE *)(a1 + 8) & 0x18) != 0 )
  {
    v4 = 1;
    return sub_21EEBC(a1, (int)lpsrc, v4);
  }
  if ( lpsrc )
  {
    v5 = j___dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pbase_type_info,
           0);
    if ( v5 )
    {
      v4 = (v5[8] & 0x18) != 0;
      return sub_21EEBC(a1, (int)lpsrc, v4);
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x21f308
// SYMBOL: sub_21F308
int __fastcall sub_21F308(_DWORD *a1, void *lpsrc)
{
  int v3; // r6
  _DWORD *v4; // r0
  int v5; // r1
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  const void *v9; // r0
  void *v10; // r0

  v3 = 0;
  while ( 1 )
  {
    if ( !lpsrc )
      return 0;
    v4 = j___dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v4 )
      return v3;
    v5 = a1[2];
    v6 = v4;
    if ( (v4[2] & ~v5) != 0 )
      return 0;
    v7 = (_DWORD *)a1[3];
    if ( v7[1] == *(_DWORD *)(v6[3] + 4) )
      return 1;
    if ( !(v5 << 31) )
      return 0;
    v8 = j___dynamic_cast(
           v7,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
           (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_type_info,
           0);
    if ( !v8 )
      break;
    lpsrc = (void *)v6[3];
    a1 = v8;
  }
  v9 = (const void *)a1[3];
  if ( !v9 )
    return 0;
  v3 = 0;
  v10 = j___dynamic_cast(
          v9,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
          (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
          0);
  if ( v10 )
    return sub_21F3A0((int)v10, (void *)v6[3]);
  return v3;
}


// ======================================================================
// ADDR: 0x21f3a0
// SYMBOL: sub_21F3A0
bool __fastcall sub_21F3A0(_DWORD *a1, void *lpsrc)
{
  int v3; // r5
  _DWORD *v4; // r0

  if ( !lpsrc )
    return 0;
  v3 = 0;
  v4 = j___dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__shim_type_info,
         (const struct __class_type_info *)&`typeinfo for'__cxxabiv1::__pointer_to_member_type_info,
         0);
  if ( v4 )
  {
    if ( (v4[2] & ~a1[2]) == 0 && *(_DWORD *)(a1[3] + 4) == *(_DWORD *)(v4[3] + 4) )
      return *(_DWORD *)(a1[4] + 4) == *(_DWORD *)(v4[4] + 4);
    return 0;
  }
  return v3;
}


// ======================================================================
