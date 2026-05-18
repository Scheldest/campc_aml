// ADDR: 0x150670
// SYMBOL: sub_150670
int __fastcall sub_150670(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  char v10; // r6
  int v11; // r2
  int v12; // r10
  int v13; // r0
  unsigned int *v14; // r1
  unsigned int v15; // r2
  _DWORD *v16; // r6
  int v17; // r5
  int v18; // r3
  _BOOL4 v19; // r5
  int result; // r0
  unsigned int *v21; // r1
  unsigned int v22; // r2
  _BYTE v23[8]; // [sp+Ch] [bp-2Ch] BYREF
  void *v24; // [sp+14h] [bp-24h]
  int v25; // [sp+18h] [bp-20h] BYREF
  int v26[7]; // [sp+1Ch] [bp-1Ch] BYREF

  v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
  std::string::basic_string(v23, a2);
  v11 = a4;
  if ( a4 )
    v11 = 4;
  sub_157FD4(&v25, v23, v11 & 0xFFFFFFF5 | (2 * (v10 & 1)) & 0xF7 | (8 * (v10 & 1)));
  if ( v23[0] << 31 )
    operator delete(v24);
  v12 = operator new(0x38u);
  v26[0] = v25;
  v25 = 0;
  sub_151890(v12, v26, a3, a4, a5, a6);
  v13 = v26[0];
  if ( v26[0] )
  {
    v14 = (unsigned int *)(v26[0] + 4);
    __dmb(0xBu);
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 - 1, v14) );
    __dmb(0xBu);
    if ( !v15 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
  }
  v16 = (_DWORD *)operator new(0xCu);
  v17 = a1[3];
  v18 = a1[1];
  *v16 = v18;
  v16[1] = a1 + 1;
  a1[3] = v17 + 1;
  v19 = __CFADD__(v17, 1);
  a1[1] = v16;
  v16[2] = v12;
  *(_DWORD *)(v18 + 4) = v16;
  if ( j___dynamic_cast(
         a1,
         (const struct __class_type_info *)&`typeinfo for'AudioChannel,
         (const struct __class_type_info *)&`typeinfo for'AudioChannelVehicle,
         0)
    && !v19 )
  {
    sub_151D54(v16[2], *(_DWORD *)(dword_381A0C + 116));
  }
  result = v25;
  if ( v25 )
  {
    v21 = (unsigned int *)(v25 + 4);
    __dmb(0xBu);
    do
      v22 = __ldrex(v21);
    while ( __strex(v22 - 1, v21) );
    __dmb(0xBu);
    if ( !v22 )
      return (*(int (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
  }
  return result;
}


// ======================================================================
// ADDR: 0x150800
// SYMBOL: sub_150800
_DWORD *__fastcall sub_150800(_DWORD *a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r4
  int v11; // r0
  __int64 v12; // r2
  int v13; // r8
  std::__shared_weak_count *v14; // r4
  unsigned int *v15; // r0
  unsigned int v16; // r1
  _DWORD *result; // r0
  int v18; // r2
  int v19; // r3
  __int64 v20; // [sp+10h] [bp-20h] BYREF

  v10 = (*(int (__fastcall **)(_DWORD *))(*a1 + 8))(a1);
  v11 = operator new(0x40u);
  v12 = *a2;
  v13 = v11;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  v20 = v12;
  sub_1518C8(v11, &v20, v10, a3, a4, a5, a6);
  v14 = (std::__shared_weak_count *)HIDWORD(v20);
  if ( HIDWORD(v20) )
  {
    v15 = (unsigned int *)(HIDWORD(v20) + 4);
    __dmb(0xBu);
    do
      v16 = __ldrex(v15);
    while ( __strex(v16 - 1, v15) );
    __dmb(0xBu);
    if ( !v16 )
    {
      (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v14 + 8))(v14);
      std::__shared_weak_count::__release_weak(v14);
    }
  }
  if ( !sub_1504C0(a1, v13) )
    return (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
  if ( j___dynamic_cast(
         a1,
         (const struct __class_type_info *)&`typeinfo for'AudioChannel,
         (const struct __class_type_info *)&`typeinfo for'AudioChannelVehicle,
         0) )
  {
    sub_151D54(v13, *(_DWORD *)(dword_381A0C + 116));
  }
  result = (_DWORD *)operator new(0xCu);
  v18 = a1[1];
  v19 = a1[3];
  *result = v18;
  result[1] = a1 + 1;
  a1[1] = result;
  result[2] = v13;
  a1[3] = v19 + 1;
  *(_DWORD *)(v18 + 4) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1526b2
// SYMBOL: sub_1526B2
int __fastcall sub_1526B2(int a1, __int16 a2)
{
  int v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v7; // [sp+8h] [bp-30h] BYREF
  __int16 v8; // [sp+Eh] [bp-2Ah] BYREF
  int *v9; // [sp+10h] [bp-28h] BYREF
  __int16 *v10; // [sp+14h] [bp-24h] BYREF
  _DWORD v11[6]; // [sp+18h] [bp-20h] BYREF

  v2 = a1 + 12;
  v8 = a2;
  v3 = 0;
  if ( !sub_15426C(a1 + 12, &v8) )
  {
    v4 = operator new(0x48u);
    *(_QWORD *)(v4 + 36) = 0LL;
    *(_QWORD *)(v4 + 44) = 0LL;
    *(_DWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 52) = 0LL;
    *(_QWORD *)(v4 + 60) = 0LL;
    *(_DWORD *)v4 = &off_22F3C4;
    *(_DWORD *)(v4 + 4) = v4 + 4;
    *(_QWORD *)(v4 + 12) = 0LL;
    *(_QWORD *)(v4 + 20) = 0LL;
    *(_DWORD *)(v4 + 68) = 0;
    *(_DWORD *)(v4 + 32) = 1065353216;
    *(_DWORD *)(v4 + 8) = v4 + 4;
    v7 = v4;
    *(_DWORD *)(v4 + 28) = 0;
    v10 = &v8;
    v9 = &v7;
    sub_1537D6(v11, v2, &v8, &unk_B998D, &v10, &v9);
    v5 = v7;
    v3 = *(_DWORD *)(v11[0] + 12);
    v7 = 0;
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
  return v3;
}


// ======================================================================
// ADDR: 0x152768
// SYMBOL: sub_152768
int __fastcall sub_152768(int a1, int a2, __int16 a3)
{
  int v3; // r4
  _WORD v5[5]; // [sp+Eh] [bp-Ah] BYREF

  v5[0] = a3;
  v3 = sub_1527B0(a1, a2, v5);
  sub_150D14(v3, 1077936128, 1133903872, 45, 270, 1053609165);
  *(_DWORD *)(v3 + 96) = 1147207680;
  return v3;
}


// ======================================================================
// ADDR: 0x152874
// SYMBOL: sub_152874
int __fastcall sub_152874(int a1, int a2, __int16 a3)
{
  int v3; // r4
  _WORD v5[5]; // [sp+Eh] [bp-Ah] BYREF

  v5[0] = a3;
  v3 = sub_1528BC(a1, a2, v5);
  sub_150D14(v3, 1077936128, 1133903872, -1, -1, -1082130432);
  *(_DWORD *)(v3 + 96) = 1159479296;
  return v3;
}


// ======================================================================
// ADDR: 0x15297c
// SYMBOL: sub_15297C
int __fastcall sub_15297C(int a1, int a2, float a3, int a4, int a5, int a6)
{
  int v6; // s0
  int v7; // r4
  int result; // r0
  float v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v9[0] = a3;
  v6 = 1133903872;
  v7 = sub_1529E4(a1, a2, v9, a4, a5, a6);
  if ( v9[0] > 300.0 )
    v6 = LODWORD(v9[0]);
  sub_150D14(v7, 1077936128, v6, 45, 270, 1053609165);
  result = v7;
  *(float *)(v7 + 96) = v9[0] * v9[0];
  return result;
}


// ======================================================================
// ADDR: 0x1552a0
// SYMBOL: sub_1552A0
int __fastcall sub_1552A0(int a1, int a2)
{
  return sub_15C65C(a1, a2 + 20);
}


// ======================================================================
// ADDR: 0x155b70
// SYMBOL: sub_155B70
// attributes: thunk
int sub_155B70()
{
  return sub_15E6C4();
}


// ======================================================================
// ADDR: 0x15b308
// SYMBOL: sub_15B308
int __fastcall sub_15B308(int a1, unsigned __int8 *a2)
{
  int v2; // r5
  int result; // r0
  const char *v6; // r0
  FILE *v7; // r8
  unsigned __int8 *v8; // r6
  int v9; // [sp+8h] [bp-30h] BYREF
  unsigned __int8 v10[8]; // [sp+Ch] [bp-2Ch] BYREF
  void *v11; // [sp+14h] [bp-24h]
  _BYTE v12[4]; // [sp+18h] [bp-20h] BYREF
  _DWORD v13[7]; // [sp+1Ch] [bp-1Ch] BYREF

  v2 = a1 + 136;
  v13[0] = a2;
  sub_138B9C((int)v10, a1 + 136, (int)a2, (int)&unk_BA5E4, (int)v13, (int)&v9);
  result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
  if ( !*(_BYTE *)(*(_DWORD *)v10 + 28) )
  {
    v13[0] = a2;
    sub_138B9C((int)v10, v2, (int)a2, (int)&unk_BA5E4, (int)v13, (int)&v9);
    *(_BYTE *)(*(_DWORD *)v10 + 28) = 1;
    sub_15A2AC((int)v10);
    v6 = (const char *)v11;
    if ( !(v10[0] << 31) )
      v6 = (const char *)&v10[1];
    v7 = fopen(v6, "r");
    if ( v10[0] << 31 )
      operator delete(v11);
    if ( v7 )
    {
      v9 = 1065353216;
      v8 = sub_155624((unsigned __int8 *)(a1 + 96), a2, (int)&v9);
      v13[0] = a2;
      sub_138B9C((int)v10, v2, (int)a2, (int)&unk_BA5E4, (int)v13, (int)v12);
      result = *(_DWORD *)v10;
      *(_DWORD *)(*(_DWORD *)v10 + 32) = v8;
    }
    else
    {
      v13[0] = a2;
      sub_138B9C((int)v10, v2, (int)a2, (int)&unk_BA5E4, (int)v13, (int)&v9);
      result = *(_DWORD *)v10;
      *(_DWORD *)(*(_DWORD *)v10 + 32) = 1065353216;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x15b3f8
// SYMBOL: sub_15B3F8
int __fastcall sub_15B3F8(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r3
  int v6; // r5
  int v7; // r2
  int v8; // r6
  int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  void *exception; // r4
  int v18; // r0
  double v19; // d16
  int v20; // r0
  double v21; // d16
  _DWORD v22[3]; // [sp+4h] [bp-54h] BYREF
  double v23; // [sp+10h] [bp-48h] BYREF
  int v24; // [sp+18h] [bp-40h]
  double v25; // [sp+20h] [bp-38h] BYREF
  int v26; // [sp+28h] [bp-30h]
  int v27; // [sp+2Ch] [bp-2Ch] BYREF
  int v28; // [sp+30h] [bp-28h] BYREF
  int v29; // [sp+34h] [bp-24h] BYREF
  int v30; // [sp+38h] [bp-20h] BYREF
  _DWORD *v31; // [sp+3Ch] [bp-1Ch] BYREF
  int v32; // [sp+40h] [bp-18h] BYREF
  int v33[4]; // [sp+47h] [bp-11h] BYREF

  sub_17D786(a1, (int)v33);
  if ( LOBYTE(v33[0]) == 2 )
  {
    v10 = operator new(0x20u);
    *(_QWORD *)(v10 + 8) = 1145569280LL;
    *(_QWORD *)(v10 + 16) = 1063004406LL;
    *(_DWORD *)(v10 + 24) = 0;
    *(_DWORD *)v10 = &off_22F874;
    *(_DWORD *)(v10 + 4) = 1;
    *(_DWORD *)(v10 + 28) = -1;
    v30 = v10;
    sub_150A20(a2, (int)&v30);
    v11 = v30;
    v30 = 0;
    if ( v11 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
    v12 = operator new(0x20u);
    *(_QWORD *)(v12 + 8) = 1153957888LL;
    *(_QWORD *)(v12 + 16) = 1062501089LL;
    *(_DWORD *)(v12 + 24) = 0;
    *(_DWORD *)v12 = &off_22F874;
    *(_DWORD *)(v12 + 4) = 0;
    *(_DWORD *)(v12 + 28) = -1;
    v29 = v12;
    sub_150A20(a2, (int)&v29);
    v13 = v29;
    v29 = 0;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = operator new(0x1Cu);
    *(_QWORD *)(v14 + 8) = 1050253722LL;
    *(_QWORD *)(v14 + 16) = 0x4150000044834000LL;
    *(_DWORD *)v14 = &off_22F8A8;
    *(_DWORD *)(v14 + 4) = 0;
    *(_DWORD *)(v14 + 24) = -1;
    v28 = v14;
    sub_150A20(a2, (int)&v28);
    v15 = v28;
    v28 = 0;
    if ( v15 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 4))(v15);
    v16 = operator new(0x1Cu);
    *(_DWORD *)v16 = &off_22F8A8;
    *(_DWORD *)(v16 + 4) = 1;
    *(_QWORD *)(v16 + 8) = 1053609165LL;
    *(_QWORD *)(v16 + 16) = 0x4150000044AF0000LL;
    *(_DWORD *)(v16 + 24) = -1;
    v27 = v16;
    sub_150A20(a2, (int)&v27);
    result = v27;
    v27 = 0;
  }
  else
  {
    if ( LOBYTE(v33[0]) != 1 )
    {
      LODWORD(v25) = LOBYTE(v33[0]);
      sub_15B720("Unknown effect - %d (throw)", &v25);
      exception = j___cxa_allocate_exception(8u);
      std::to_string((std::__ndk1 *)v22, LOBYTE(v33[0]));
      v18 = std::string::insert((int)v22, 0, "Effect type ");
      v19 = *(double *)v18;
      v24 = *(_DWORD *)(v18 + 8);
      v23 = v19;
      *(_DWORD *)v18 = 0;
      *(_DWORD *)(v18 + 4) = 0;
      *(_DWORD *)(v18 + 8) = 0;
      v20 = std::string::append((int)&v23, "is unknown");
      v21 = *(double *)v20;
      v26 = *(_DWORD *)(v20 + 8);
      v25 = v21;
      *(_DWORD *)v20 = 0;
      *(_DWORD *)(v20 + 4) = 0;
      *(_DWORD *)(v20 + 8) = 0;
      std::runtime_error::runtime_error(exception, &v25);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::runtime_error,
        (void (*)(void *))std::underflow_error::~underflow_error);
    }
    sub_17D786(a1, (int)&v25);
    sub_17D786(a1, (int)&v23);
    sub_17D786(a1, (int)v22);
    sub_17D786(a1, (int)&v32);
    v4 = (_DWORD *)operator new(0x1Cu);
    v5 = v32;
    v6 = v22[0];
    v7 = LODWORD(v25);
    v8 = LODWORD(v23);
    *v4 = &off_22F840;
    v4[1] = v7;
    v4[2] = v8;
    v4[3] = v6;
    v4[4] = v5;
    v4[5] = 0;
    v4[6] = -1;
    v31 = v4;
    sub_150A20(a2, (int)&v31);
    result = (int)v31;
    v31 = 0;
  }
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  return result;
}


// ======================================================================
// ADDR: 0x15b6d8
// SYMBOL: sub_15B6D8
int __fastcall sub_15B6D8(__int64 a1, int a2, int a3)
{
  __int64 v3; // r4
  int v5; // r2

  v3 = a1;
  LODWORD(a1) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = a3;
  if ( HIDWORD(a1) )
  {
    if ( HIDWORD(a1) >= 0x10000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    LODWORD(a1) = operator new(16 * HIDWORD(a1));
  }
  HIDWORD(a1) = a1 + 16 * a2;
  v5 = a1 + 16 * HIDWORD(v3);
  *(_QWORD *)v3 = a1;
  LODWORD(a1) = v3;
  *(_DWORD *)(v3 + 8) = HIDWORD(a1);
  *(_DWORD *)(v3 + 12) = v5;
  return a1;
}


// ======================================================================
