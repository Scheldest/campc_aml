// ADDR: 0xe8dd4
// SYMBOL: sub_E8DD4
int __fastcall sub_E8DD4(_DWORD *a1, std::__itoa *a2)
{
  _DWORD *v4; // r5
  __int64 v5; // r0
  char *v6; // r0
  bool v7; // zf
  unsigned int v8; // r0
  unsigned int v9; // r0
  void *exception; // r5
  int v12; // r0
  double v13; // d16
  _BYTE v14[12]; // [sp+4h] [bp-34h] BYREF
  double v15; // [sp+10h] [bp-28h] BYREF
  int v16; // [sp+18h] [bp-20h]
  _BYTE v17[4]; // [sp+1Ch] [bp-1Ch] BYREF
  int v18; // [sp+20h] [bp-18h] BYREF
  unsigned __int8 v19[17]; // [sp+27h] [bp-11h] BYREF

  v4 = a1 + 1;
  v19[0] = sub_E9460(a1 + 12, (a1[2] - a1[1]) >> 2, 0, a1 + 20);
  sub_E8994(a1 + 4, v19);
  LOBYTE(v15) = 1;
  sub_E9484(v17, a1, &v15, 1);
  v5 = *((_QWORD *)a1 + 1);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    sub_E9658(v4, &v18);
    v6 = (char *)a1[2];
  }
  else
  {
    *(_DWORD *)v5 = v18;
    v6 = (char *)(v5 + 4);
    a1[2] = v6;
  }
  v7 = (std::__itoa *)((char *)a2 + 1) == 0;
  if ( a2 != (std::__itoa *)-1 )
  {
    v6 = (char *)*((_DWORD *)v6 - 1);
    v7 = v6 == 0;
  }
  if ( !v7 )
  {
    v8 = *v6;
    if ( v8 > 2 )
      v9 = 1;
    else
      v9 = dword_92190[v8];
    if ( v9 < (unsigned int)a2 )
    {
      exception = j___cxa_allocate_exception(0x10u);
      std::to_string((std::__ndk1 *)v14, a2);
      v12 = std::string::insert((int)v14, 0, "excessive object size: ");
      v13 = *(double *)v12;
      v16 = *(_DWORD *)(v12 + 8);
      v15 = v13;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      sub_E92EC(exception, 408, &v15, *(_DWORD *)(a1[2] - 4));
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::out_of_range,
        (void (*)(void *))sub_E9438);
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xe8f0c
// SYMBOL: sub_E8F0C
int __fastcall sub_E8F0C(int a1)
{
  int v2; // r0
  int v3; // r3
  unsigned __int8 *v4; // r0
  char *v5; // r1
  __int64 v6; // kr00_8
  char v7; // r3
  int v8; // r5
  int v9; // r0
  unsigned __int8 *v10; // r1
  int v11; // r2
  bool v12; // zf
  unsigned __int8 *v14; // r0
  int v15; // r1
  int v16; // r1
  int v17; // [sp+0h] [bp-58h] BYREF
  double v18; // [sp+4h] [bp-54h]
  int v19; // [sp+Ch] [bp-4Ch]
  unsigned __int8 *v20; // [sp+10h] [bp-48h] BYREF
  int v21; // [sp+14h] [bp-44h]
  int v22; // [sp+18h] [bp-40h]
  int v23; // [sp+1Ch] [bp-3Ch]
  int v24; // [sp+20h] [bp-38h] BYREF
  double v25; // [sp+24h] [bp-34h]
  int v26; // [sp+2Ch] [bp-2Ch]
  _BYTE v27[8]; // [sp+30h] [bp-28h] BYREF
  __int64 v28; // [sp+38h] [bp-20h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(v2 - 4);
  if ( v3 && !sub_E9460(a1 + 48, ((v2 - *(_DWORD *)(a1 + 4)) >> 2) - 1, 1, v3) )
  {
    v4 = (unsigned __int8 *)sub_E4834((int)v27, (unsigned __int8 *)(a1 + 80));
    v5 = *(char **)(*(_DWORD *)(a1 + 8) - 4);
    v6 = *((_QWORD *)v5 + 1);
    v7 = *v5;
    *v5 = v27[0];
    v8 = HIDWORD(v28);
    *((_DWORD *)v5 + 2) = v28;
    *((_DWORD *)v5 + 3) = v8;
    v27[0] = v7;
    v28 = v6;
    sub_E3F7A(v4);
  }
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(unsigned __int8 **)(a1 + 4);
  v11 = *(_DWORD *)(a1 + 20) - 1;
  *(_DWORD *)(a1 + 8) = v9 - 4;
  *(_DWORD *)(a1 + 20) = v11;
  v12 = v10 == (unsigned __int8 *)(v9 - 4);
  if ( v10 != (unsigned __int8 *)(v9 - 4) )
  {
    v10 = *(unsigned __int8 **)(v9 - 8);
    v12 = v10 == 0;
  }
  if ( !v12 && (unsigned int)*v10 - 1 <= 1 )
  {
    sub_E9766(&v24);
    while ( 1 )
    {
      v14 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 8) - 4);
      v23 = 0x80000000;
      v15 = *v14;
      v22 = 0;
      v20 = v14;
      v21 = 0;
      if ( v15 == 2 )
      {
        v22 = *(_DWORD *)(*((_DWORD *)v14 + 2) + 4);
      }
      else if ( v15 == 1 )
      {
        v21 = *((_DWORD *)v14 + 2) + 4;
      }
      else
      {
        v23 = 1;
      }
      if ( sub_E9AA0(&v24, &v20) )
        break;
      if ( *(_BYTE *)sub_E979C(&v24) == 9 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)(a1 + 8) - 4);
        v19 = v26;
        v17 = v24;
        v18 = v25;
        ((void (__fastcall *)(unsigned __int8 **, int, int *))sub_E9824)(&v20, v16, &v17);
        return 1;
      }
      sub_E9A4C(&v24);
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xe9018
// SYMBOL: sub_E9018
int __fastcall sub_E9018(int a1, int a2)
{
  int v4; // r0
  __int64 v5; // kr00_8
  int v6; // r1
  int v7; // r5
  int v8; // r2
  int v9; // r0
  char v10; // r12
  __int64 v11; // kr08_8
  _DWORD v13[2]; // [sp+8h] [bp-40h] BYREF
  __int64 v14; // [sp+10h] [bp-38h]
  unsigned __int8 v15; // [sp+1Fh] [bp-29h] BYREF
  unsigned __int8 v16[8]; // [sp+20h] [bp-28h] BYREF
  int v17; // [sp+28h] [bp-20h]
  int v18; // [sp+2Ch] [bp-1Ch]
  _BYTE v19[4]; // [sp+30h] [bp-18h] BYREF
  int v20; // [sp+34h] [bp-14h] BYREF
  _DWORD v21[4]; // [sp+38h] [bp-10h] BYREF

  v17 = 0;
  v18 = 0;
  v16[0] = 3;
  v4 = sub_EA114(a2);
  v5 = *(_QWORD *)(a1 + 4);
  v17 = v4;
  v15 = sub_E9460(a1 + 48, (HIDWORD(v5) - (int)v5) >> 2, 4, v16);
  sub_E8994((_DWORD *)(a1 + 28), &v15);
  if ( v15 && *(_DWORD *)(*(_DWORD *)(a1 + 8) - 4) )
  {
    sub_E4834((int)v13, (unsigned __int8 *)(a1 + 80));
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) - 4) + 8);
    v20 = a2;
    sub_EA136(v21, v6, a2, &unk_9216D, &v20, v19, v13[0]);
    v7 = HIDWORD(v14);
    v8 = v14;
    v9 = v21[0] + 32;
    v10 = *(_BYTE *)(v21[0] + 32);
    v11 = *(_QWORD *)(v21[0] + 40);
    *(_BYTE *)(v21[0] + 32) = v13[0];
    *(_DWORD *)(v9 + 8) = v8;
    *(_DWORD *)(v9 + 12) = v7;
    *(_DWORD *)(a1 + 40) = v9;
    LOBYTE(v13[0]) = v10;
    v14 = v11;
    sub_E3F7A((unsigned __int8 *)v13);
  }
  sub_E3F7A(v16);
  return 1;
}


// ======================================================================
// ADDR: 0xe90dc
// SYMBOL: sub_E90DC
int __fastcall sub_E90DC(_DWORD *a1, std::__itoa *a2)
{
  _DWORD *v4; // r5
  __int64 v5; // r0
  char *v6; // r0
  bool v7; // zf
  unsigned int v8; // r0
  unsigned int v9; // r0
  void *exception; // r5
  int v12; // r0
  double v13; // d16
  _BYTE v14[12]; // [sp+4h] [bp-34h] BYREF
  double v15; // [sp+10h] [bp-28h] BYREF
  int v16; // [sp+18h] [bp-20h]
  _BYTE v17[4]; // [sp+1Ch] [bp-1Ch] BYREF
  int v18; // [sp+20h] [bp-18h] BYREF
  unsigned __int8 v19[17]; // [sp+27h] [bp-11h] BYREF

  v4 = a1 + 1;
  v19[0] = sub_E9460(a1 + 12, (a1[2] - a1[1]) >> 2, 2, a1 + 20);
  sub_E8994(a1 + 4, v19);
  LOBYTE(v15) = 2;
  sub_E9484(v17, a1, &v15, 1);
  v5 = *((_QWORD *)a1 + 1);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    sub_E9658(v4, &v18);
    v6 = (char *)a1[2];
  }
  else
  {
    *(_DWORD *)v5 = v18;
    v6 = (char *)(v5 + 4);
    a1[2] = v6;
  }
  v7 = (std::__itoa *)((char *)a2 + 1) == 0;
  if ( a2 != (std::__itoa *)-1 )
  {
    v6 = (char *)*((_DWORD *)v6 - 1);
    v7 = v6 == 0;
  }
  if ( !v7 )
  {
    v8 = *v6;
    if ( v8 > 2 )
      v9 = 1;
    else
      v9 = dword_92190[v8];
    if ( v9 < (unsigned int)a2 )
    {
      exception = j___cxa_allocate_exception(0x10u);
      std::to_string((std::__ndk1 *)v14, a2);
      v12 = std::string::insert((int)v14, 0, "excessive array size: ");
      v13 = *(double *)v12;
      v16 = *(_DWORD *)(v12 + 8);
      v15 = v13;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      sub_E92EC(exception, 408, &v15, *(_DWORD *)(a1[2] - 4));
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::out_of_range,
        (void (*)(void *))sub_E9438);
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xe9214
// SYMBOL: sub_E9214
int __fastcall sub_E9214(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r3
  int v5; // r1
  int v6; // r0
  int v7; // r0
  unsigned __int8 *v9; // r0
  char *v10; // r1
  __int64 v11; // kr00_8
  char v12; // r3
  int v13; // r5
  __int64 v14; // kr08_8
  int v15; // r2
  int v16; // r0
  int v17; // r4
  _BYTE v18[8]; // [sp+0h] [bp-18h] BYREF
  __int64 v19; // [sp+8h] [bp-10h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = v2 - 4;
  v4 = *(_DWORD *)(v2 - 4);
  if ( !v4 )
  {
    v7 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 8) = v3;
    v6 = v7 - 1;
    goto LABEL_5;
  }
  if ( sub_E9460(a1 + 48, ((v2 - *(_DWORD *)(a1 + 4)) >> 2) - 1, 3, v4) )
  {
    v5 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 8) -= 4;
    v6 = v5 - 1;
LABEL_5:
    *(_DWORD *)(a1 + 20) = v6;
    return 1;
  }
  v9 = (unsigned __int8 *)sub_E4834((int)v18, (unsigned __int8 *)(a1 + 80));
  v10 = *(char **)(*(_DWORD *)(a1 + 8) - 4);
  v11 = *((_QWORD *)v10 + 1);
  v12 = *v10;
  *v10 = v18[0];
  v13 = HIDWORD(v19);
  *((_DWORD *)v10 + 2) = v19;
  *((_DWORD *)v10 + 3) = v13;
  v18[0] = v12;
  v19 = v11;
  sub_E3F7A(v9);
  v14 = *(_QWORD *)(a1 + 4);
  v15 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 8) = HIDWORD(v14) - 4;
  *(_DWORD *)(a1 + 20) = v15 - 1;
  if ( (_DWORD)v14 != HIDWORD(v14) - 4 )
  {
    v16 = *(_DWORD *)(HIDWORD(v14) - 8);
    if ( *(_BYTE *)v16 == 2 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      *(_DWORD *)(v17 + 4) = sub_E3F7A((unsigned __int8 *)(*(_DWORD *)(v17 + 4) - 16));
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0xe92b4
// SYMBOL: sub_E92B4
int __fastcall sub_E92B4(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  void *exception; // r0
  void *v8; // r0

  v4 = *(unsigned __int8 *)(a1 + 72);
  *(_BYTE *)(a1 + 44) = 1;
  if ( v4 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v8 = (void *)sub_EA428(exception, a4);
    j___cxa_throw(v8, (struct type_info *)&`typeinfo for'nlohmann::detail::out_of_range, (void (*)(void *))sub_E9438);
  }
  return 0;
}


// ======================================================================
// ADDR: 0xe92ec
// SYMBOL: sub_E92EC
void __fastcall sub_E92EC(_DWORD *a1, int a2, unsigned __int8 *a3)
{
  _DWORD *v6; // r0
  void *v7; // r1
  void *v8; // r2
  int v9; // r0
  double v10; // d16
  unsigned int v11; // r0
  unsigned __int8 *v12; // r1
  unsigned int v13; // r2
  int v14; // r0
  double v15; // d16
  char *v16; // r2
  int v17; // r1
  void *v18[2]; // [sp+4h] [bp-54h] BYREF
  void *v19; // [sp+Ch] [bp-4Ch]
  void *v20[3]; // [sp+10h] [bp-48h] BYREF
  _BYTE v21[8]; // [sp+1Ch] [bp-3Ch] BYREF
  void *v22; // [sp+24h] [bp-34h]
  double v23; // [sp+28h] [bp-30h] BYREF
  void *v24; // [sp+30h] [bp-28h]
  double v25; // [sp+38h] [bp-20h] BYREF
  void *v26; // [sp+40h] [bp-18h]

  sub_DC6DC(v20, "out_of_range");
  sub_E5F8C((int)v21, (int)v20, a2);
  v6 = sub_DC6DC(v18, &byte_8F794);
  v8 = v18[1];
  v7 = v19;
  if ( ((int)v18[0] & 1) == 0 )
  {
    v7 = (char *)v6 + 1;
    v8 = (void *)(LOBYTE(v18[0]) >> 1);
  }
  v9 = std::string::append(v21, v7, v8, LOBYTE(v18[0]));
  v10 = *(double *)v9;
  v24 = *(void **)(v9 + 8);
  v23 = v10;
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  v11 = *a3;
  v12 = (unsigned __int8 *)*((_DWORD *)a3 + 2);
  v13 = *((_DWORD *)a3 + 1);
  if ( (v11 & 1) == 0 )
  {
    v12 = a3 + 1;
    v13 = v11 >> 1;
  }
  v14 = std::string::append(&v23, v12, v13, v11 & 1);
  v15 = *(double *)v14;
  v26 = *(void **)(v14 + 8);
  v25 = v15;
  *(_DWORD *)v14 = 0;
  *(_DWORD *)(v14 + 4) = 0;
  *(_DWORD *)(v14 + 8) = 0;
  if ( LOBYTE(v23) << 31 )
    operator delete(v24);
  if ( LOBYTE(v18[0]) << 31 )
    operator delete(v19);
  if ( v21[0] << 31 )
    operator delete(v22);
  if ( LOBYTE(v20[0]) << 31 )
    operator delete(v20[2]);
  v16 = (char *)v26;
  if ( !(LOBYTE(v25) << 31) )
    v16 = (char *)&v25 + 1;
  sub_E60A8(__SPAIR64__(a2, (unsigned int)a1), v16);
  v17 = LOBYTE(v25);
  *a1 = &off_22A880;
  if ( v17 << 31 )
    operator delete(v26);
}


// ======================================================================
// ADDR: 0xea484
// SYMBOL: sub_EA484
unsigned __int8 *__fastcall sub_EA484(int a1, int *a2, __int64 *a3, int a4)
{
  __int64 v6; // r0
  int v8; // r3
  int v9; // r1
  __int64 v10; // d16
  __int64 v11; // kr00_8
  int v12; // r0
  int v13; // r6
  __int64 v14; // kr08_8
  unsigned int v15; // r2
  unsigned __int8 *result; // r0
  unsigned int v17; // r2
  int v18; // r3
  unsigned int v19; // r0
  unsigned __int8 v20; // r1
  unsigned __int64 v21; // kr10_8
  int v22; // r6
  int v23; // r1
  __int64 v24; // r0
  unsigned int v25; // r2
  int v26; // r3
  unsigned int v27; // r0
  unsigned __int8 v28; // r1
  unsigned __int64 v29; // kr18_8
  int v30; // r6
  __int64 v31; // r0
  unsigned int v32; // r3
  _BYTE *v33; // r0
  unsigned int v34; // r2
  int v35; // r0
  unsigned __int8 v36[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v37; // [sp+8h] [bp-50h]
  unsigned __int8 v38[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v39; // [sp+18h] [bp-40h]
  unsigned __int8 v40[8]; // [sp+20h] [bp-38h] BYREF
  unsigned int v41; // [sp+28h] [bp-30h]
  unsigned int v42; // [sp+2Ch] [bp-2Ch]
  _DWORD v43[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v44; // [sp+3Ch] [bp-1Ch]

  v6 = *((_QWORD *)a2 + 2);
  v8 = --HIDWORD(v6) >> 5;
  v9 = BYTE4(v6) & 0x1F;
  if ( !(*(_DWORD *)(v6 + 4 * v8) >> v9 << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v10 = *a3;
  v41 = 0;
  v42 = 0;
  v40[0] = 0;
  sub_EA660(v40, v9, v10, HIDWORD(v10));
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v11 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v11 != HIDWORD(v11) )
  {
    v12 = *(_DWORD *)(HIDWORD(v11) - 4);
    if ( v12 )
    {
      if ( *(_BYTE *)v12 == 2 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        v14 = *(_QWORD *)(v13 + 4);
        if ( (unsigned int)v14 >= HIDWORD(v14) )
        {
          HIDWORD(v31) = (((int)v14 - *(_DWORD *)v13) >> 4) + 1;
          if ( HIDWORD(v31) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v13);
          LODWORD(v31) = HIDWORD(v14) - *(_DWORD *)v13;
          LOWORD(v32) = -16;
          if ( HIDWORD(v31) <= (int)v31 >> 3 )
            HIDWORD(v31) = (int)v31 >> 3;
          HIWORD(v32) = 0x7FFF;
          if ( (unsigned int)v31 >= v32 )
            HIDWORD(v31) = 0xFFFFFFF;
          LODWORD(v31) = v43;
          sub_E5D88(v31, (int)v14 >> 4, v13 + 8);
          v33 = v44;
          *v44 = v40[0];
          v34 = v42;
          *((_DWORD *)v33 + 2) = v41;
          *((_DWORD *)v33 + 3) = v34;
          v40[0] = 0;
          v41 = 0;
          v42 = 0;
          v44 += 16;
          sub_E5DD0((int *)v13, v43);
          sub_E5E26((int)v43);
        }
        else
        {
          *(_BYTE *)v14 = v40[0];
          v15 = v42;
          *(_DWORD *)(v14 + 8) = v41;
          *(_DWORD *)(v14 + 12) = v15;
          v41 = 0;
          v42 = 0;
          *(_DWORD *)(v13 + 4) = v14 + 16;
          v40[0] = 0;
        }
        v35 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v35 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v40);
      }
      v24 = *(_QWORD *)(a2 + 7);
      LODWORD(v24) = *(_DWORD *)(v24 + 4 * (--HIDWORD(v24) >> 5));
      a2[8] = HIDWORD(v24);
      if ( (unsigned int)v24 >> (BYTE4(v24) & 0x1F) << 31 )
      {
        v25 = v42;
        v26 = a2[10];
        v27 = v41;
        v28 = v40[0];
        v41 = 0;
        v42 = 0;
        v37 = __PAIR64__(v25, v27);
        v40[0] = 0;
        LOBYTE(v27) = *(_BYTE *)v26;
        *(_BYTE *)v26 = v28;
        v36[0] = v27;
        v29 = *(_QWORD *)(v26 + 8);
        v30 = HIDWORD(v37);
        *(_DWORD *)(v26 + 8) = v37;
        *(_DWORD *)(v26 + 12) = v30;
        v37 = v29;
        sub_E3F7A(v36);
        v23 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v40);
  }
  v17 = v42;
  v18 = *a2;
  v19 = v41;
  v20 = v40[0];
  v41 = 0;
  v42 = 0;
  v39 = __PAIR64__(v17, v19);
  v40[0] = 0;
  LOBYTE(v19) = *(_BYTE *)v18;
  *(_BYTE *)v18 = v20;
  v38[0] = v19;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = HIDWORD(v39);
  *(_DWORD *)(v18 + 8) = v39;
  *(_DWORD *)(v18 + 12) = v22;
  v39 = v21;
  sub_E3F7A(v38);
  v23 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v23;
  return sub_E3F7A(v40);
}


// ======================================================================
// ADDR: 0xea68c
// SYMBOL: sub_EA68C
unsigned __int8 *__fastcall sub_EA68C(int a1, int *a2, unsigned __int8 *a3, int a4)
{
  int v7; // r1
  __int64 v8; // kr00_8
  int v9; // r0
  int v10; // r6
  __int64 v11; // kr08_8
  unsigned int v12; // r2
  unsigned __int8 *result; // r0
  unsigned int v14; // r2
  int v15; // r3
  unsigned int v16; // r0
  unsigned __int8 v17; // r1
  unsigned __int64 v18; // kr10_8
  int v19; // r6
  int v20; // r1
  __int64 v21; // r0
  unsigned int v22; // r2
  int v23; // r3
  unsigned int v24; // r0
  unsigned __int8 v25; // r1
  unsigned __int64 v26; // kr18_8
  int v27; // r6
  __int64 v28; // r0
  unsigned int v29; // r3
  _BYTE *v30; // r0
  unsigned int v31; // r2
  int v32; // r0
  unsigned __int8 v33[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v34; // [sp+8h] [bp-50h]
  unsigned __int8 v35[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v36; // [sp+18h] [bp-40h]
  unsigned __int8 v37[8]; // [sp+20h] [bp-38h] BYREF
  unsigned int v38; // [sp+28h] [bp-30h]
  unsigned int v39; // [sp+2Ch] [bp-2Ch]
  _DWORD v40[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v41; // [sp+3Ch] [bp-1Ch]

  if ( !(*(_DWORD *)(a2[4] + 4 * ((unsigned int)(a2[5] - 1) >> 5)) >> ((a2[5] - 1) & 0x1F) << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v7 = *a3;
  v38 = 0;
  v39 = 0;
  v37[0] = 0;
  sub_EA862(v37, v7);
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v8 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v8 != HIDWORD(v8) )
  {
    v9 = *(_DWORD *)(HIDWORD(v8) - 4);
    if ( v9 )
    {
      if ( *(_BYTE *)v9 == 2 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v10 + 4);
        if ( (unsigned int)v11 >= HIDWORD(v11) )
        {
          HIDWORD(v28) = (((int)v11 - *(_DWORD *)v10) >> 4) + 1;
          if ( HIDWORD(v28) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v10);
          LODWORD(v28) = HIDWORD(v11) - *(_DWORD *)v10;
          LOWORD(v29) = -16;
          if ( HIDWORD(v28) <= (int)v28 >> 3 )
            HIDWORD(v28) = (int)v28 >> 3;
          HIWORD(v29) = 0x7FFF;
          if ( (unsigned int)v28 >= v29 )
            HIDWORD(v28) = 0xFFFFFFF;
          LODWORD(v28) = v40;
          sub_E5D88(v28, (int)v11 >> 4, v10 + 8);
          v30 = v41;
          *v41 = v37[0];
          v31 = v39;
          *((_DWORD *)v30 + 2) = v38;
          *((_DWORD *)v30 + 3) = v31;
          v37[0] = 0;
          v38 = 0;
          v39 = 0;
          v41 += 16;
          sub_E5DD0((int *)v10, v40);
          sub_E5E26((int)v40);
        }
        else
        {
          *(_BYTE *)v11 = v37[0];
          v12 = v39;
          *(_DWORD *)(v11 + 8) = v38;
          *(_DWORD *)(v11 + 12) = v12;
          v38 = 0;
          v39 = 0;
          *(_DWORD *)(v10 + 4) = v11 + 16;
          v37[0] = 0;
        }
        v32 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v32 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v37);
      }
      v21 = *(_QWORD *)(a2 + 7);
      LODWORD(v21) = *(_DWORD *)(v21 + 4 * (--HIDWORD(v21) >> 5));
      a2[8] = HIDWORD(v21);
      if ( (unsigned int)v21 >> (BYTE4(v21) & 0x1F) << 31 )
      {
        v22 = v39;
        v23 = a2[10];
        v24 = v38;
        v25 = v37[0];
        v38 = 0;
        v39 = 0;
        v34 = __PAIR64__(v22, v24);
        v37[0] = 0;
        LOBYTE(v24) = *(_BYTE *)v23;
        *(_BYTE *)v23 = v25;
        v33[0] = v24;
        v26 = *(_QWORD *)(v23 + 8);
        v27 = HIDWORD(v34);
        *(_DWORD *)(v23 + 8) = v34;
        *(_DWORD *)(v23 + 12) = v27;
        v34 = v26;
        sub_E3F7A(v33);
        v20 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v37);
  }
  v14 = v39;
  v15 = *a2;
  v16 = v38;
  v17 = v37[0];
  v38 = 0;
  v39 = 0;
  v36 = __PAIR64__(v14, v16);
  v37[0] = 0;
  LOBYTE(v16) = *(_BYTE *)v15;
  *(_BYTE *)v15 = v17;
  v35[0] = v16;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = HIDWORD(v36);
  *(_DWORD *)(v15 + 8) = v36;
  *(_DWORD *)(v15 + 12) = v19;
  v36 = v18;
  sub_E3F7A(v35);
  v20 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v20;
  return sub_E3F7A(v37);
}


// ======================================================================
// ADDR: 0xea882
// SYMBOL: sub_EA882
unsigned __int8 *__fastcall sub_EA882(int a1, int *a2, int a3, int a4)
{
  __int64 v6; // kr00_8
  int v7; // r0
  int v8; // r6
  __int64 v9; // kr08_8
  unsigned int v10; // r2
  unsigned __int8 *result; // r0
  unsigned int v12; // r2
  int v13; // r3
  unsigned int v14; // r0
  unsigned __int8 v15; // r1
  unsigned __int64 v16; // kr10_8
  int v17; // r6
  int v18; // r1
  __int64 v19; // r0
  unsigned int v20; // r2
  int v21; // r3
  unsigned int v22; // r0
  unsigned __int8 v23; // r1
  unsigned __int64 v24; // kr18_8
  int v25; // r6
  __int64 v26; // r0
  unsigned int v27; // r3
  _BYTE *v28; // r0
  unsigned int v29; // r2
  int v30; // r0
  unsigned __int8 v31[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v32; // [sp+8h] [bp-50h]
  unsigned __int8 v33[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v34; // [sp+18h] [bp-40h]
  unsigned __int8 v35[8]; // [sp+20h] [bp-38h] BYREF
  unsigned int v36; // [sp+28h] [bp-30h]
  unsigned int v37; // [sp+2Ch] [bp-2Ch]
  _DWORD v38[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v39; // [sp+3Ch] [bp-1Ch]

  if ( !(*(_DWORD *)(a2[4] + 4 * ((unsigned int)(a2[5] - 1) >> 5)) >> ((a2[5] - 1) & 0x1F) << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v36 = 0;
  v35[0] = 0;
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v6 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    v7 = *(_DWORD *)(HIDWORD(v6) - 4);
    if ( v7 )
    {
      if ( *(_BYTE *)v7 == 2 )
      {
        v8 = *(_DWORD *)(v7 + 8);
        v9 = *(_QWORD *)(v8 + 4);
        if ( (unsigned int)v9 >= HIDWORD(v9) )
        {
          HIDWORD(v26) = (((int)v9 - *(_DWORD *)v8) >> 4) + 1;
          if ( HIDWORD(v26) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v8);
          LODWORD(v26) = HIDWORD(v9) - *(_DWORD *)v8;
          LOWORD(v27) = -16;
          if ( HIDWORD(v26) <= (int)v26 >> 3 )
            HIDWORD(v26) = (int)v26 >> 3;
          HIWORD(v27) = 0x7FFF;
          if ( (unsigned int)v26 >= v27 )
            HIDWORD(v26) = 0xFFFFFFF;
          LODWORD(v26) = v38;
          sub_E5D88(v26, (int)v9 >> 4, v8 + 8);
          v28 = v39;
          *v39 = v35[0];
          v29 = v37;
          *((_DWORD *)v28 + 2) = v36;
          *((_DWORD *)v28 + 3) = v29;
          v35[0] = 0;
          v36 = 0;
          v37 = 0;
          v39 += 16;
          sub_E5DD0((int *)v8, v38);
          sub_E5E26((int)v38);
        }
        else
        {
          *(_BYTE *)v9 = v35[0];
          v10 = v37;
          *(_DWORD *)(v9 + 8) = v36;
          *(_DWORD *)(v9 + 12) = v10;
          v36 = 0;
          v37 = 0;
          *(_DWORD *)(v8 + 4) = v9 + 16;
          v35[0] = 0;
        }
        v30 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v30 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v35);
      }
      v19 = *(_QWORD *)(a2 + 7);
      LODWORD(v19) = *(_DWORD *)(v19 + 4 * (--HIDWORD(v19) >> 5));
      a2[8] = HIDWORD(v19);
      if ( (unsigned int)v19 >> (BYTE4(v19) & 0x1F) << 31 )
      {
        v20 = v37;
        v21 = a2[10];
        v22 = v36;
        v23 = v35[0];
        v36 = 0;
        v37 = 0;
        v32 = __PAIR64__(v20, v22);
        v35[0] = 0;
        LOBYTE(v22) = *(_BYTE *)v21;
        *(_BYTE *)v21 = v23;
        v31[0] = v22;
        v24 = *(_QWORD *)(v21 + 8);
        v25 = HIDWORD(v32);
        *(_DWORD *)(v21 + 8) = v32;
        *(_DWORD *)(v21 + 12) = v25;
        v32 = v24;
        sub_E3F7A(v31);
        v18 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v35);
  }
  v12 = v37;
  v13 = *a2;
  v14 = v36;
  v15 = v35[0];
  v36 = 0;
  v37 = 0;
  v34 = __PAIR64__(v12, v14);
  v35[0] = 0;
  LOBYTE(v14) = *(_BYTE *)v13;
  *(_BYTE *)v13 = v15;
  v33[0] = v14;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = HIDWORD(v34);
  *(_DWORD *)(v13 + 8) = v34;
  *(_DWORD *)(v13 + 12) = v17;
  v34 = v16;
  sub_E3F7A(v33);
  v18 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v18;
  return sub_E3F7A(v35);
}


// ======================================================================
// ADDR: 0xeaa4c
// SYMBOL: sub_EAA4C
unsigned __int8 *__fastcall sub_EAA4C(int a1, int *a2, __int64 *a3, int a4)
{
  __int64 v6; // r0
  int v8; // r3
  int v9; // r1
  __int64 v10; // r2
  __int64 v11; // kr00_8
  int v12; // r0
  int v13; // r6
  __int64 v14; // kr08_8
  unsigned int v15; // r2
  unsigned __int8 *result; // r0
  unsigned int v17; // r2
  int v18; // r3
  unsigned int v19; // r0
  unsigned __int8 v20; // r1
  unsigned __int64 v21; // kr10_8
  int v22; // r6
  int v23; // r1
  __int64 v24; // r0
  unsigned int v25; // r2
  int v26; // r3
  unsigned int v27; // r0
  unsigned __int8 v28; // r1
  unsigned __int64 v29; // kr18_8
  int v30; // r6
  __int64 v31; // r0
  unsigned int v32; // r3
  _BYTE *v33; // r0
  unsigned int v34; // r2
  int v35; // r0
  unsigned __int8 v36[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v37; // [sp+8h] [bp-50h]
  unsigned __int8 v38[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v39; // [sp+18h] [bp-40h]
  unsigned __int8 v40[8]; // [sp+20h] [bp-38h] BYREF
  unsigned int v41; // [sp+28h] [bp-30h]
  unsigned int v42; // [sp+2Ch] [bp-2Ch]
  _DWORD v43[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v44; // [sp+3Ch] [bp-1Ch]

  v6 = *((_QWORD *)a2 + 2);
  v8 = --HIDWORD(v6) >> 5;
  v9 = BYTE4(v6) & 0x1F;
  if ( !(*(_DWORD *)(v6 + 4 * v8) >> v9 << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v10 = *a3;
  v41 = 0;
  v42 = 0;
  v40[0] = 0;
  sub_EAC24(v40, v9, v10, HIDWORD(v10));
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v11 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v11 != HIDWORD(v11) )
  {
    v12 = *(_DWORD *)(HIDWORD(v11) - 4);
    if ( v12 )
    {
      if ( *(_BYTE *)v12 == 2 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        v14 = *(_QWORD *)(v13 + 4);
        if ( (unsigned int)v14 >= HIDWORD(v14) )
        {
          HIDWORD(v31) = (((int)v14 - *(_DWORD *)v13) >> 4) + 1;
          if ( HIDWORD(v31) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v13);
          LODWORD(v31) = HIDWORD(v14) - *(_DWORD *)v13;
          LOWORD(v32) = -16;
          if ( HIDWORD(v31) <= (int)v31 >> 3 )
            HIDWORD(v31) = (int)v31 >> 3;
          HIWORD(v32) = 0x7FFF;
          if ( (unsigned int)v31 >= v32 )
            HIDWORD(v31) = 0xFFFFFFF;
          LODWORD(v31) = v43;
          sub_E5D88(v31, (int)v14 >> 4, v13 + 8);
          v33 = v44;
          *v44 = v40[0];
          v34 = v42;
          *((_DWORD *)v33 + 2) = v41;
          *((_DWORD *)v33 + 3) = v34;
          v40[0] = 0;
          v41 = 0;
          v42 = 0;
          v44 += 16;
          sub_E5DD0((int *)v13, v43);
          sub_E5E26((int)v43);
        }
        else
        {
          *(_BYTE *)v14 = v40[0];
          v15 = v42;
          *(_DWORD *)(v14 + 8) = v41;
          *(_DWORD *)(v14 + 12) = v15;
          v41 = 0;
          v42 = 0;
          *(_DWORD *)(v13 + 4) = v14 + 16;
          v40[0] = 0;
        }
        v35 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v35 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v40);
      }
      v24 = *(_QWORD *)(a2 + 7);
      LODWORD(v24) = *(_DWORD *)(v24 + 4 * (--HIDWORD(v24) >> 5));
      a2[8] = HIDWORD(v24);
      if ( (unsigned int)v24 >> (BYTE4(v24) & 0x1F) << 31 )
      {
        v25 = v42;
        v26 = a2[10];
        v27 = v41;
        v28 = v40[0];
        v41 = 0;
        v42 = 0;
        v37 = __PAIR64__(v25, v27);
        v40[0] = 0;
        LOBYTE(v27) = *(_BYTE *)v26;
        *(_BYTE *)v26 = v28;
        v36[0] = v27;
        v29 = *(_QWORD *)(v26 + 8);
        v30 = HIDWORD(v37);
        *(_DWORD *)(v26 + 8) = v37;
        *(_DWORD *)(v26 + 12) = v30;
        v37 = v29;
        sub_E3F7A(v36);
        v23 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v40);
  }
  v17 = v42;
  v18 = *a2;
  v19 = v41;
  v20 = v40[0];
  v41 = 0;
  v42 = 0;
  v39 = __PAIR64__(v17, v19);
  v40[0] = 0;
  LOBYTE(v19) = *(_BYTE *)v18;
  *(_BYTE *)v18 = v20;
  v38[0] = v19;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = HIDWORD(v39);
  *(_DWORD *)(v18 + 8) = v39;
  *(_DWORD *)(v18 + 12) = v22;
  v39 = v21;
  sub_E3F7A(v38);
  v23 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v23;
  return sub_E3F7A(v40);
}


// ======================================================================
// ADDR: 0xeac4c
// SYMBOL: sub_EAC4C
unsigned __int8 *__fastcall sub_EAC4C(int a1, int *a2, int a3, int a4)
{
  __int64 v7; // kr00_8
  int v8; // r0
  int v9; // r6
  __int64 v10; // kr08_8
  unsigned int v11; // r2
  unsigned __int8 *result; // r0
  unsigned int v13; // r2
  int v14; // r3
  int v15; // r0
  unsigned __int8 v16; // r1
  unsigned __int64 v17; // kr10_8
  int v18; // r6
  int v19; // r1
  __int64 v20; // r0
  unsigned int v21; // r2
  int v22; // r3
  int v23; // r0
  unsigned __int8 v24; // r1
  unsigned __int64 v25; // kr18_8
  int v26; // r6
  __int64 v27; // r0
  unsigned int v28; // r3
  _BYTE *v29; // r0
  unsigned int v30; // r2
  int v31; // r0
  unsigned __int8 v32[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v33; // [sp+8h] [bp-50h]
  unsigned __int8 v34[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v35; // [sp+18h] [bp-40h]
  unsigned __int8 v36[8]; // [sp+20h] [bp-38h] BYREF
  int v37; // [sp+28h] [bp-30h]
  unsigned int v38; // [sp+2Ch] [bp-2Ch]
  _DWORD v39[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v40; // [sp+3Ch] [bp-1Ch]

  if ( !(*(_DWORD *)(a2[4] + 4 * ((unsigned int)(a2[5] - 1) >> 5)) >> ((a2[5] - 1) & 0x1F) << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v38 = 0;
  v36[0] = 3;
  v37 = sub_EA114(a3);
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v7 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    v8 = *(_DWORD *)(HIDWORD(v7) - 4);
    if ( v8 )
    {
      if ( *(_BYTE *)v8 == 2 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        v10 = *(_QWORD *)(v9 + 4);
        if ( (unsigned int)v10 >= HIDWORD(v10) )
        {
          HIDWORD(v27) = (((int)v10 - *(_DWORD *)v9) >> 4) + 1;
          if ( HIDWORD(v27) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v9);
          LODWORD(v27) = HIDWORD(v10) - *(_DWORD *)v9;
          LOWORD(v28) = -16;
          if ( HIDWORD(v27) <= (int)v27 >> 3 )
            HIDWORD(v27) = (int)v27 >> 3;
          HIWORD(v28) = 0x7FFF;
          if ( (unsigned int)v27 >= v28 )
            HIDWORD(v27) = 0xFFFFFFF;
          LODWORD(v27) = v39;
          sub_E5D88(v27, (int)v10 >> 4, v9 + 8);
          v29 = v40;
          *v40 = v36[0];
          v30 = v38;
          *((_DWORD *)v29 + 2) = v37;
          *((_DWORD *)v29 + 3) = v30;
          v36[0] = 0;
          v37 = 0;
          v38 = 0;
          v40 += 16;
          sub_E5DD0((int *)v9, v39);
          sub_E5E26((int)v39);
        }
        else
        {
          *(_BYTE *)v10 = v36[0];
          v11 = v38;
          *(_DWORD *)(v10 + 8) = v37;
          *(_DWORD *)(v10 + 12) = v11;
          v37 = 0;
          v38 = 0;
          *(_DWORD *)(v9 + 4) = v10 + 16;
          v36[0] = 0;
        }
        v31 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v31 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v36);
      }
      v20 = *(_QWORD *)(a2 + 7);
      LODWORD(v20) = *(_DWORD *)(v20 + 4 * (--HIDWORD(v20) >> 5));
      a2[8] = HIDWORD(v20);
      if ( (unsigned int)v20 >> (BYTE4(v20) & 0x1F) << 31 )
      {
        v21 = v38;
        v22 = a2[10];
        v23 = v37;
        v24 = v36[0];
        v37 = 0;
        v38 = 0;
        v33 = __PAIR64__(v21, v23);
        v36[0] = 0;
        LOBYTE(v23) = *(_BYTE *)v22;
        *(_BYTE *)v22 = v24;
        v32[0] = v23;
        v25 = *(_QWORD *)(v22 + 8);
        v26 = HIDWORD(v33);
        *(_DWORD *)(v22 + 8) = v33;
        *(_DWORD *)(v22 + 12) = v26;
        v33 = v25;
        sub_E3F7A(v32);
        v19 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v36);
  }
  v13 = v38;
  v14 = *a2;
  v15 = v37;
  v16 = v36[0];
  v37 = 0;
  v38 = 0;
  v35 = __PAIR64__(v13, v15);
  v36[0] = 0;
  LOBYTE(v15) = *(_BYTE *)v14;
  *(_BYTE *)v14 = v16;
  v34[0] = v15;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = HIDWORD(v35);
  *(_DWORD *)(v14 + 8) = v35;
  *(_DWORD *)(v14 + 12) = v18;
  v35 = v17;
  sub_E3F7A(v34);
  v19 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v19;
  return sub_E3F7A(v36);
}


// ======================================================================
// ADDR: 0xeae24
// SYMBOL: sub_EAE24
unsigned __int8 *__fastcall sub_EAE24(int a1, int *a2, __int64 *a3, int a4)
{
  __int64 v6; // r0
  int v8; // r3
  int v9; // r1
  __int64 v10; // r2
  __int64 v11; // kr00_8
  int v12; // r0
  int v13; // r6
  __int64 v14; // kr08_8
  unsigned int v15; // r2
  unsigned __int8 *result; // r0
  unsigned int v17; // r2
  int v18; // r3
  unsigned int v19; // r0
  unsigned __int8 v20; // r1
  unsigned __int64 v21; // kr10_8
  int v22; // r6
  int v23; // r1
  __int64 v24; // r0
  unsigned int v25; // r2
  int v26; // r3
  unsigned int v27; // r0
  unsigned __int8 v28; // r1
  unsigned __int64 v29; // kr18_8
  int v30; // r6
  __int64 v31; // r0
  unsigned int v32; // r3
  _BYTE *v33; // r0
  unsigned int v34; // r2
  int v35; // r0
  unsigned __int8 v36[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v37; // [sp+8h] [bp-50h]
  unsigned __int8 v38[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v39; // [sp+18h] [bp-40h]
  unsigned __int8 v40[8]; // [sp+20h] [bp-38h] BYREF
  unsigned int v41; // [sp+28h] [bp-30h]
  unsigned int v42; // [sp+2Ch] [bp-2Ch]
  _DWORD v43[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v44; // [sp+3Ch] [bp-1Ch]

  v6 = *((_QWORD *)a2 + 2);
  v8 = --HIDWORD(v6) >> 5;
  v9 = BYTE4(v6) & 0x1F;
  if ( !(*(_DWORD *)(v6 + 4 * v8) >> v9 << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v10 = *a3;
  v41 = 0;
  v42 = 0;
  v40[0] = 0;
  sub_EAFFC(v40, v9, v10, HIDWORD(v10));
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v11 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v11 != HIDWORD(v11) )
  {
    v12 = *(_DWORD *)(HIDWORD(v11) - 4);
    if ( v12 )
    {
      if ( *(_BYTE *)v12 == 2 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        v14 = *(_QWORD *)(v13 + 4);
        if ( (unsigned int)v14 >= HIDWORD(v14) )
        {
          HIDWORD(v31) = (((int)v14 - *(_DWORD *)v13) >> 4) + 1;
          if ( HIDWORD(v31) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v13);
          LODWORD(v31) = HIDWORD(v14) - *(_DWORD *)v13;
          LOWORD(v32) = -16;
          if ( HIDWORD(v31) <= (int)v31 >> 3 )
            HIDWORD(v31) = (int)v31 >> 3;
          HIWORD(v32) = 0x7FFF;
          if ( (unsigned int)v31 >= v32 )
            HIDWORD(v31) = 0xFFFFFFF;
          LODWORD(v31) = v43;
          sub_E5D88(v31, (int)v14 >> 4, v13 + 8);
          v33 = v44;
          *v44 = v40[0];
          v34 = v42;
          *((_DWORD *)v33 + 2) = v41;
          *((_DWORD *)v33 + 3) = v34;
          v40[0] = 0;
          v41 = 0;
          v42 = 0;
          v44 += 16;
          sub_E5DD0((int *)v13, v43);
          sub_E5E26((int)v43);
        }
        else
        {
          *(_BYTE *)v14 = v40[0];
          v15 = v42;
          *(_DWORD *)(v14 + 8) = v41;
          *(_DWORD *)(v14 + 12) = v15;
          v41 = 0;
          v42 = 0;
          *(_DWORD *)(v13 + 4) = v14 + 16;
          v40[0] = 0;
        }
        v35 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v35 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v40);
      }
      v24 = *(_QWORD *)(a2 + 7);
      LODWORD(v24) = *(_DWORD *)(v24 + 4 * (--HIDWORD(v24) >> 5));
      a2[8] = HIDWORD(v24);
      if ( (unsigned int)v24 >> (BYTE4(v24) & 0x1F) << 31 )
      {
        v25 = v42;
        v26 = a2[10];
        v27 = v41;
        v28 = v40[0];
        v41 = 0;
        v42 = 0;
        v37 = __PAIR64__(v25, v27);
        v40[0] = 0;
        LOBYTE(v27) = *(_BYTE *)v26;
        *(_BYTE *)v26 = v28;
        v36[0] = v27;
        v29 = *(_QWORD *)(v26 + 8);
        v30 = HIDWORD(v37);
        *(_DWORD *)(v26 + 8) = v37;
        *(_DWORD *)(v26 + 12) = v30;
        v37 = v29;
        sub_E3F7A(v36);
        v23 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v40);
  }
  v17 = v42;
  v18 = *a2;
  v19 = v41;
  v20 = v40[0];
  v41 = 0;
  v42 = 0;
  v39 = __PAIR64__(v17, v19);
  v40[0] = 0;
  LOBYTE(v19) = *(_BYTE *)v18;
  *(_BYTE *)v18 = v20;
  v38[0] = v19;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = HIDWORD(v39);
  *(_DWORD *)(v18 + 8) = v39;
  *(_DWORD *)(v18 + 12) = v22;
  v39 = v21;
  sub_E3F7A(v38);
  v23 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v23;
  return sub_E3F7A(v40);
}


// ======================================================================
