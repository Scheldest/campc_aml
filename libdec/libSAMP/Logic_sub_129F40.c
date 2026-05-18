// ADDR: 0xe4f28
// SYMBOL: sub_E4F28
int sub_E4F28()
{
  return dword_237518;
}


// ======================================================================
// ADDR: 0x12a778
// SYMBOL: sub_12A778
int __fastcall sub_12A778(int a1)
{
  int v2; // r5
  int v3; // r3
  int v4; // r0
  __int64 v5; // d17
  int v6; // r0
  _BYTE *v7; // r5
  int result; // r0
  _QWORD v9[3]; // [sp+8h] [bp-18h] BYREF

  if ( *(_DWORD *)(a1 + 88) )
    sub_12BE22(a1);
  v2 = operator new(0x94u);
  sub_12EF40();
  *(_DWORD *)(a1 + 88) = v2;
  sub_12BDF6(a1, v2);
  v3 = *(_DWORD *)(a1 + 88) + 20;
  v4 = unk_238EDC;
  v5 = *(_QWORD *)&dword_238ED8;
  *(_QWORD *)v3 = *(_QWORD *)&dword_238ED8;
  *(_QWORD *)(v3 + 8) = v5;
  v3 += 16;
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 4) = v4;
  v6 = *(_DWORD *)(a1 + 88);
  v9[0] = *(_QWORD *)&dword_238ED0;
  sub_12BD92(v6, v9);
  v7 = *(_BYTE **)(a1 + 88);
  if ( v7[80] )
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v7 + 36))(*(_DWORD *)(a1 + 88), 0);
  result = 0;
  v7[80] = 0;
  return result;
}


// ======================================================================
// ADDR: 0x12bd92
// SYMBOL: sub_12BD92
int __fastcall sub_12BD92(int a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 12) = *a2;
  return sub_12BD9E();
}


// ======================================================================
// ADDR: 0x12bdf6
// SYMBOL: sub_12BDF6
int __fastcall sub_12BDF6(int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r2
  int result; // r0
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = *(_DWORD **)(a1 + 72);
  v4 = *(_DWORD **)(a1 + 76);
  v6[0] = a2;
  if ( v3 == v4 )
  {
    sub_12C104(a1 + 68, v6);
  }
  else
  {
    *v3 = a2;
    *(_DWORD *)(a1 + 72) = v3 + 1;
  }
  result = v6[0];
  *(_DWORD *)(v6[0] + 8) = a1;
  return result;
}


// ======================================================================
// ADDR: 0x12be22
// SYMBOL: sub_12BE22
int __fastcall sub_12BE22(int a1, int a2)
{
  int v3; // r0
  int *v4; // r1
  int *v5; // t1
  int *v6; // r2
  int *v7; // r3
  bool v8; // zf
  int v9; // r4
  int result; // r0

  v5 = *(int **)(a1 + 68);
  v3 = a1 + 68;
  v4 = v5;
  v6 = *(int **)(v3 + 4);
  if ( v5 != v6 )
  {
    while ( 1 )
    {
      v7 = (int *)*v4;
      if ( *v4 == a2 )
        break;
      if ( ++v4 == v6 )
      {
        v4 = *(int **)(v3 + 4);
        goto LABEL_12;
      }
    }
    v8 = v4 == v6;
    if ( v4 != v6 )
    {
      v7 = v4 + 1;
      v8 = v4 + 1 == v6;
    }
    if ( !v8 )
    {
      do
      {
        v9 = *v7++;
        if ( v9 != a2 )
          *v4++ = v9;
      }
      while ( v7 != v6 );
    }
  }
LABEL_12:
  result = sub_12BE7A(v3, v4);
  if ( a2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 44))(a2);
  return result;
}


// ======================================================================
// ADDR: 0x12c214
// SYMBOL: sub_12C214
_DWORD *__fastcall sub_12C214(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  __int64 v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int i; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r1
  __int64 j; // r4
  _UNKNOWN **v20; // [sp+8h] [bp-48h] BYREF
  _DWORD *v21; // [sp+Ch] [bp-44h]
  void *v22; // [sp+10h] [bp-40h]
  int v23; // [sp+14h] [bp-3Ch]
  _DWORD *v24; // [sp+18h] [bp-38h]
  _DWORD v25[11]; // [sp+24h] [bp-2Ch] BYREF

  v2 = 0;
  sub_13D71C(a1, 0);
  a1[28] = 0;
  a1[31] = 0;
  *a1 = &off_22D970;
  *(_DWORD *)((char *)a1 + 117) = 0;
  a1[27] = 0;
  *(_DWORD *)((char *)a1 + 113) = 0;
  do
  {
    v3 = operator new(0x70u);
    sub_DC6DC(&v20, off_22D9A0[v2]);
    sub_13CE34(v3, &v20, *(float *)&dword_238EC0 * 0.5);
    v4 = *((_QWORD *)a1 + 14);
    v25[0] = v3;
    if ( (unsigned int)v4 >= HIDWORD(v4) )
    {
      sub_12C538(a1 + 27, v25);
    }
    else
    {
      *(_DWORD *)v4 = v3;
      a1[28] = v4 + 4;
    }
    if ( (unsigned __int8)v20 << 31 )
      operator delete(v22);
    ++v2;
  }
  while ( v2 != 10 );
  v5 = *(_DWORD *)a1[27];
  v24 = &v20;
  v21 = a1;
  v20 = &off_22D9DC;
  sub_12C504(v5 + 88, &v20);
  if ( &v20 == v24 )
  {
    v6 = 4;
  }
  else
  {
    if ( !v24 )
      goto LABEL_13;
    v6 = 5;
  }
  (*(void (**)(void))(*v24 + 4 * v6))();
LABEL_13:
  v7 = *(_DWORD *)(a1[27] + 4);
  v24 = &v20;
  v21 = a1;
  v20 = &off_22DA1C;
  sub_12C504(v7 + 88, &v20);
  if ( &v20 == v24 )
  {
    v8 = 4;
    goto LABEL_17;
  }
  if ( v24 )
  {
    v8 = 5;
LABEL_17:
    (*(void (**)(void))(*v24 + 4 * v8))();
  }
  for ( i = 2; i != 7; ++i )
  {
    v10 = *(_DWORD *)(a1[27] + 4 * i);
    v24 = &v20;
    v22 = (void *)i;
    v23 = 2;
    v20 = &off_22DA5C;
    v21 = a1;
    sub_12C504(v10 + 88, &v20);
    if ( &v20 == v24 )
    {
      v11 = 4;
    }
    else
    {
      if ( !v24 )
        continue;
      v11 = 5;
    }
    (*(void (**)(void))(*v24 + 4 * v11))();
  }
  v12 = *(_DWORD *)(a1[27] + 28);
  v24 = &v20;
  v21 = a1;
  v20 = &off_22DA9C;
  sub_12C504(v12 + 88, &v20);
  if ( &v20 == v24 )
  {
    v13 = 4;
LABEL_29:
    (*(void (**)(void))(*v24 + 4 * v13))();
  }
  else if ( v24 )
  {
    v13 = 5;
    goto LABEL_29;
  }
  v14 = *(_DWORD *)(a1[27] + 32);
  v24 = &v20;
  v21 = a1;
  v20 = &off_22DADC;
  sub_12C504(v14 + 88, &v20);
  if ( &v20 == v24 )
  {
    v15 = 4;
LABEL_34:
    (*(void (**)(void))(*v24 + 4 * v15))();
  }
  else if ( v24 )
  {
    v15 = 5;
    goto LABEL_34;
  }
  v16 = *(_DWORD *)(a1[27] + 36);
  v24 = &v20;
  v21 = a1;
  v20 = &off_22DB1C;
  sub_12C504(v16 + 88, &v20);
  if ( &v20 == v24 )
  {
    v17 = 4;
LABEL_39:
    (*(void (**)(void))(*v24 + 4 * v17))();
  }
  else if ( v24 )
  {
    v17 = 5;
    goto LABEL_39;
  }
  for ( j = *(_QWORD *)(a1 + 27); (_DWORD)j != HIDWORD(j); LODWORD(j) = j + 4 )
    sub_12BDF6((int)a1, *(_DWORD *)j);
  return a1;
}


// ======================================================================
// ADDR: 0x12ca24
// SYMBOL: sub_12CA24
_DWORD *__fastcall sub_12CA24(_DWORD *a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  _DWORD v12[4]; // [sp+8h] [bp-180h] BYREF
  _DWORD *v13; // [sp+18h] [bp-170h]
  _UNKNOWN **v14; // [sp+24h] [bp-164h] BYREF
  std::__shared_weak_count *v15; // [sp+2Ch] [bp-15Ch]
  _DWORD v16[4]; // [sp+30h] [bp-158h] BYREF
  _DWORD *v17; // [sp+40h] [bp-148h]
  _UNKNOWN **v18; // [sp+4Ch] [bp-13Ch] BYREF
  std::__shared_weak_count *v19; // [sp+54h] [bp-134h]
  _DWORD v20[4]; // [sp+58h] [bp-130h] BYREF
  _DWORD *v21; // [sp+68h] [bp-120h]
  _UNKNOWN **v22; // [sp+74h] [bp-114h] BYREF
  std::__shared_weak_count *v23; // [sp+7Ch] [bp-10Ch]
  _DWORD v24[4]; // [sp+80h] [bp-108h] BYREF
  _DWORD *v25; // [sp+90h] [bp-F8h]
  _UNKNOWN **v26; // [sp+9Ch] [bp-ECh] BYREF
  std::__shared_weak_count *v27; // [sp+A4h] [bp-E4h]
  _DWORD v28[4]; // [sp+A8h] [bp-E0h] BYREF
  _DWORD *v29; // [sp+B8h] [bp-D0h]
  _UNKNOWN **v30; // [sp+C4h] [bp-C4h] BYREF
  std::__shared_weak_count *v31; // [sp+CCh] [bp-BCh]
  _DWORD v32[4]; // [sp+D0h] [bp-B8h] BYREF
  _DWORD *v33; // [sp+E0h] [bp-A8h]
  _UNKNOWN **v34; // [sp+ECh] [bp-9Ch] BYREF
  std::__shared_weak_count *v35; // [sp+F4h] [bp-94h]
  _DWORD v36[4]; // [sp+F8h] [bp-90h] BYREF
  _DWORD *v37; // [sp+108h] [bp-80h]
  _UNKNOWN **v38; // [sp+114h] [bp-74h] BYREF
  std::__shared_weak_count *v39; // [sp+11Ch] [bp-6Ch]
  _DWORD v40[4]; // [sp+120h] [bp-68h] BYREF
  _DWORD *v41; // [sp+130h] [bp-58h]
  _UNKNOWN **v42; // [sp+13Ch] [bp-4Ch] BYREF
  std::__shared_weak_count *v43; // [sp+144h] [bp-44h]
  _DWORD v44[4]; // [sp+148h] [bp-40h] BYREF
  _DWORD *v45; // [sp+158h] [bp-30h]
  _UNKNOWN **v46; // [sp+160h] [bp-28h] BYREF
  std::__shared_weak_count *v47; // [sp+168h] [bp-20h]

  sub_12BC78((int)a1);
  a1[23] = 0;
  *a1 = &off_22DB5C;
  a1[22] = 0;
  a1[21] = a1 + 22;
  sub_22178C((int)(a1 + 24), 0x880u);
  a1[568] = 1065353216;
  a1[569] = sub_F0B30();
  v45 = v44;
  v44[1] = sub_12CE74;
  v44[0] = &off_22DBC0;
  sub_12CD48(&v46, a1, "q", 1, v44);
  v46 = &off_22AE84;
  if ( v47 )
    std::__shared_weak_count::__release_weak(v47);
  if ( v44 == v45 )
  {
    v2 = 4;
  }
  else
  {
    if ( !v45 )
      goto LABEL_8;
    v2 = 5;
  }
  (*(void (**)(void))(*v45 + 4 * v2))();
LABEL_8:
  v41 = v40;
  v40[0] = &off_22DBC0;
  v40[1] = sub_12CE74;
  sub_12CD48(&v42, a1, "quit", 4, v40);
  v42 = &off_22AE84;
  if ( v43 )
    std::__shared_weak_count::__release_weak(v43);
  if ( v40 == v41 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v41 )
      goto LABEL_15;
    v3 = 5;
  }
  (*(void (**)(void))(*v41 + 4 * v3))();
LABEL_15:
  v37 = v36;
  v36[0] = &off_22DBC0;
  v36[1] = sub_12CE78;
  sub_12CD48(&v38, a1, "voice", 5, v36);
  v38 = &off_22AE84;
  if ( v39 )
    std::__shared_weak_count::__release_weak(v39);
  if ( v36 == v37 )
  {
    v4 = 4;
  }
  else
  {
    if ( !v37 )
      goto LABEL_22;
    v4 = 5;
  }
  (*(void (**)(void))(*v37 + 4 * v4))();
LABEL_22:
  v33 = v32;
  v32[0] = &off_22DBC0;
  v32[1] = sub_12CE78;
  sub_12CD48(&v34, a1, "azvoice", 7, v32);
  v34 = &off_22AE84;
  if ( v35 )
    std::__shared_weak_count::__release_weak(v35);
  if ( v32 == v33 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v33 )
      goto LABEL_29;
    v5 = 5;
  }
  (*(void (**)(void))(*v33 + 4 * v5))();
LABEL_29:
  v29 = v28;
  v28[0] = &off_22DBC0;
  v28[1] = sub_12CE90;
  sub_12CD48(&v30, a1, "dl", 2, v28);
  v30 = &off_22AE84;
  if ( v31 )
    std::__shared_weak_count::__release_weak(v31);
  if ( v28 == v29 )
  {
    v6 = 4;
  }
  else
  {
    if ( !v29 )
      goto LABEL_36;
    v6 = 5;
  }
  (*(void (**)(void))(*v29 + 4 * v6))();
LABEL_36:
  v25 = v24;
  v24[0] = &off_22DBC0;
  v24[1] = sub_12CEA8;
  sub_12CD48(&v26, a1, "timestamp", 9, v24);
  v26 = &off_22AE84;
  if ( v27 )
    std::__shared_weak_count::__release_weak(v27);
  if ( v24 == v25 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v25 )
      goto LABEL_43;
    v7 = 5;
  }
  (*(void (**)(void))(*v25 + 4 * v7))();
LABEL_43:
  v21 = v20;
  v20[0] = &off_22DBC0;
  v20[1] = sub_12CEBC;
  sub_12CD48(&v22, a1, "pagesize", 8, v20);
  v22 = &off_22AE84;
  if ( v23 )
    std::__shared_weak_count::__release_weak(v23);
  if ( v20 == v21 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v21 )
      goto LABEL_50;
    v8 = 5;
  }
  (*(void (**)(void))(*v21 + 4 * v8))();
LABEL_50:
  v17 = v16;
  v16[0] = &off_22DBC0;
  v16[1] = sub_12D004;
  sub_12CD48(&v18, a1, "fontsize", 8, v16);
  v18 = &off_22AE84;
  if ( v19 )
    std::__shared_weak_count::__release_weak(v19);
  if ( v16 == v17 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v17 )
      goto LABEL_57;
    v9 = 5;
  }
  (*(void (**)(void))(*v17 + 4 * v9))();
LABEL_57:
  v13 = v12;
  v12[0] = &off_22DBC0;
  v12[1] = sub_12D134;
  sub_12CD48(&v14, a1, "odl", 3, v12);
  v14 = &off_22AE84;
  if ( v15 )
    std::__shared_weak_count::__release_weak(v15);
  if ( v12 == v13 )
  {
    v10 = 4;
    goto LABEL_63;
  }
  if ( v13 )
  {
    v10 = 5;
LABEL_63:
    (*(void (**)(void))(*v13 + 4 * v10))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x12e700
// SYMBOL: sub_12E700
_DWORD *__fastcall sub_12E700(_DWORD *a1)
{
  _DWORD *v2; // r10
  int v3; // r1
  int v4; // r6
  int v5; // r5
  int v6; // r5
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  std::runtime_error *exception; // r5
  int v13; // [sp+0h] [bp-38h] BYREF
  int v14; // [sp+4h] [bp-34h]
  int *v15; // [sp+10h] [bp-28h]
  int v16; // [sp+18h] [bp-20h] BYREF
  int v17; // [sp+1Ch] [bp-1Ch]

  sub_12BC78((int)a1);
  *a1 = &off_22DC6C;
  a1[23] = 0;
  a1[22] = 0;
  a1[21] = 0;
  v2 = a1 + 21;
  v3 = sub_1636F0("hud");
  if ( v3 == -1 )
    v3 = sub_1636F0("*");
  sub_163144(a1 + 21, v3, "express_menu");
  v4 = *v2;
  if ( !*v2 )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "express_menu UI: atlas texture not found");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  v14 = 1015021568;
  v13 = 1006632960;
  v17 = 1056964608;
  v16 = 1065353216;
  v5 = operator new(0x88u);
  ((void (__fastcall *)(int, int, int *, int *))sub_12EA0C)(v5, v4, &v13, &v16);
  sub_12EC4A(a1 + 22, v5);
  sub_12BDF6((int)a1, a1[22]);
  v14 = 1056964608;
  v13 = 1006632960;
  v16 = 1065353216;
  v17 = 1065353216;
  v6 = operator new(0x88u);
  sub_12EB2C(v6, *v2, &v13, &v16);
  sub_12EC64(a1 + 23, v6);
  sub_12BDF6((int)a1, a1[23]);
  v7 = a1[22];
  v15 = &v13;
  v13 = (int)&off_22DD38;
  sub_12C504(v7 + 88, (int)&v13);
  if ( &v13 == v15 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v15 )
      goto LABEL_9;
    v8 = 5;
  }
  (*(void (**)(void))(*v15 + 4 * v8))();
LABEL_9:
  v9 = a1[23];
  v15 = &v13;
  v13 = (int)&off_22DD78;
  sub_12C504(v9 + 88, (int)&v13);
  if ( &v13 == v15 )
  {
    v10 = 4;
    goto LABEL_13;
  }
  if ( v15 )
  {
    v10 = 5;
LABEL_13:
    (*(void (**)(void))(*v15 + 4 * v10))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x12ed94
// SYMBOL: sub_12ED94
_DWORD *__fastcall sub_12ED94(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  _DWORD v6[4]; // [sp+0h] [bp-28h] BYREF
  _DWORD *v7; // [sp+10h] [bp-18h]

  sub_13D71C(a1, 0);
  *a1 = &off_22DDB8;
  v2 = operator new(0x70u);
  sub_DC6DC(v6, &byte_8F794);
  sub_13CE34(v2, v6, *(float *)&dword_238EC0 * 0.5);
  v3 = LOBYTE(v6[0]);
  a1[27] = v2;
  if ( v3 << 31 )
  {
    operator delete((void *)v6[2]);
    v2 = a1[27];
  }
  v7 = v6;
  v6[0] = &off_22DDFC;
  sub_12C504(v2 + 88, (int)v6);
  if ( v6 == v7 )
  {
    v4 = 4;
    goto LABEL_7;
  }
  if ( v7 )
  {
    v4 = 5;
LABEL_7:
    (*(void (**)(void))(*v7 + 4 * v4))();
  }
  sub_12BDF6((int)a1, a1[27]);
  return a1;
}


// ======================================================================
// ADDR: 0x133310
// SYMBOL: sub_133310
int __fastcall sub_133310(int a1)
{
  _DWORD *v2; // r8
  int v3; // r5
  int v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r6
  int v8; // r5
  int v9; // r5
  int v10; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  std::runtime_error *exception; // r5
  std::runtime_error *v17; // r5
  _DWORD *v18; // [sp+8h] [bp-48h]
  _DWORD *v19; // [sp+Ch] [bp-44h]
  int v20; // [sp+10h] [bp-40h] BYREF
  int v21; // [sp+14h] [bp-3Ch]
  int *v22; // [sp+20h] [bp-30h]
  int v23; // [sp+2Ch] [bp-24h] BYREF
  int v24; // [sp+30h] [bp-20h]

  sub_12BC78(a1);
  v19 = (_DWORD *)(a1 + 84);
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_DWORD *)a1 = &off_22E16C;
  *(_DWORD *)(a1 + 100) = 0;
  v2 = (_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 104) = 0;
  v18 = (_DWORD *)(a1 + 92);
  v3 = sub_1636F0("hud");
  if ( v3 == -1 )
    v3 = sub_1636F0("*");
  sub_163144(v19, v3, "menu_bg");
  if ( !*v19 )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "menu UI: background texture not found");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  sub_163144(a1 + 88, v3, "menu_atlas");
  v4 = *v2;
  if ( !*v2 )
  {
    v17 = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(v17, "menu UI: atlas texture not found");
    j___cxa_throw(
      v17,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  v5 = operator new(0x8Cu);
  sub_133A40(v5, v4);
  sub_1343E8(v18, v5);
  sub_12BDF6(a1, *(_DWORD *)(a1 + 92));
  v6 = operator new(0x68u);
  v7 = *v2;
  v8 = v6;
  sub_12BC78(v6);
  *(_DWORD *)v8 = &off_22E214;
  *(_QWORD *)(v8 + 88) = 0x3E4B00003A800000LL;
  *(_QWORD *)(v8 + 96) = 0x3E7D00003E808000LL;
  *(_DWORD *)(v8 + 84) = v7;
  sub_134402(a1 + 96, v8);
  sub_12BDF6(a1, *(_DWORD *)(a1 + 96));
  v21 = 981467136;
  v20 = 1058521088;
  v24 = 1026293760;
  v23 = 1059209216;
  v9 = operator new(0x88u);
  sub_134140(v9, *v2, &v20, &v23);
  sub_13441C(a1 + 100, v9);
  sub_12BDF6(a1, *(_DWORD *)(a1 + 100));
  v21 = 1045102592;
  v20 = 1048674304;
  v24 = 1048051712;
  v23 = 1057013760;
  v10 = operator new(0x88u);
  sub_134294(v10, *v2, &v20, &v23);
  sub_134436(a1 + 104, v10);
  sub_12BDF6(a1, *(_DWORD *)(a1 + 104));
  sub_1335F8(*v18);
  v11 = *(_DWORD *)(a1 + 104);
  v22 = &v20;
  v21 = a1;
  v20 = (int)&off_22E304;
  sub_12C504(v11 + 88, (int)&v20);
  if ( &v20 == v22 )
  {
    v12 = 4;
  }
  else
  {
    if ( !v22 )
      goto LABEL_10;
    v12 = 5;
  }
  (*(void (**)(void))(*v22 + 4 * v12))();
LABEL_10:
  v13 = *(_DWORD *)(a1 + 100);
  v22 = &v20;
  v21 = a1;
  v20 = (int)&off_22E344;
  sub_12C504(v13 + 88, (int)&v20);
  if ( &v20 == v22 )
  {
    v14 = 4;
    goto LABEL_14;
  }
  if ( v22 )
  {
    v14 = 5;
LABEL_14:
    (*(void (**)(void))(*v22 + 4 * v14))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x134bcc
// SYMBOL: sub_134BCC
int __fastcall sub_134BCC(int a1)
{
  int v2; // r5
  int v3; // r3
  int v4; // r0
  __int64 v5; // d17
  int v6; // r0
  int v7; // r5
  int v8; // r3
  int v9; // r0
  __int64 v10; // d17
  int v11; // r0
  int v12; // r5
  int v13; // r3
  int v14; // r0
  __int64 v15; // d17
  int v16; // r0
  _QWORD v18[2]; // [sp+0h] [bp-10h] BYREF

  sub_12BC78(a1);
  *(_BYTE *)(a1 + 88) = 0;
  *(_DWORD *)a1 = &off_22E604;
  v2 = operator new(0x78u);
  sub_134EE8();
  *(_DWORD *)(a1 + 92) = v2;
  sub_12BDF6(a1, v2);
  v3 = *(_DWORD *)(a1 + 92) + 20;
  v4 = unk_238FA4;
  v5 = *(_QWORD *)&dword_238FA0;
  *(_QWORD *)v3 = *(_QWORD *)&dword_238FA0;
  *(_QWORD *)(v3 + 8) = v5;
  v3 += 16;
  *(_DWORD *)v3 = v5;
  *(_DWORD *)(v3 + 4) = v4;
  v6 = *(_DWORD *)(a1 + 92);
  v18[0] = *(_QWORD *)&dword_238F98;
  sub_12BD92(v6, v18);
  v7 = operator new(0x78u);
  sub_1350F4();
  *(_DWORD *)(a1 + 96) = v7;
  sub_12BDF6(a1, v7);
  v8 = *(_DWORD *)(a1 + 96) + 20;
  v9 = unk_238FB4;
  v10 = *(_QWORD *)&dword_238FB0;
  *(_QWORD *)v8 = *(_QWORD *)&dword_238FB0;
  *(_QWORD *)(v8 + 8) = v10;
  v8 += 16;
  *(_DWORD *)v8 = v10;
  *(_DWORD *)(v8 + 4) = v9;
  v11 = *(_DWORD *)(a1 + 96);
  v18[0] = *(_QWORD *)&dword_238FA8;
  sub_12BD92(v11, v18);
  v12 = operator new(0x78u);
  sub_135320();
  *(_DWORD *)(a1 + 100) = v12;
  sub_12BDF6(a1, v12);
  v13 = *(_DWORD *)(a1 + 100) + 20;
  v14 = unk_238FC4;
  v15 = *(_QWORD *)&dword_238FC0;
  *(_QWORD *)v13 = *(_QWORD *)&dword_238FC0;
  *(_QWORD *)(v13 + 8) = v15;
  v13 += 16;
  *(_DWORD *)v13 = v15;
  *(_DWORD *)(v13 + 4) = v14;
  v16 = *(_DWORD *)(a1 + 100);
  v18[0] = *(_QWORD *)&dword_238FB8;
  sub_12BD92(v16, v18);
  return a1;
}


// ======================================================================
// ADDR: 0x1362ec
// SYMBOL: sub_1362EC
_DWORD *__fastcall sub_1362EC(int a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_12BC78(a1);
  result[21] = 0;
  result[22] = 0;
  result[23] = 0;
  *result = &off_22E9A4;
  return result;
}


// ======================================================================
// ADDR: 0x13705c
// SYMBOL: sub_13705C
_DWORD *__fastcall sub_13705C(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  unsigned __int8 v15[8]; // [sp+0h] [bp-30h] BYREF
  void *v16; // [sp+8h] [bp-28h]
  unsigned __int8 *v17; // [sp+10h] [bp-20h]

  sub_13D71C(a1, 0);
  *a1 = &off_22E9E8;
  v2 = operator new(0x70u);
  sub_13055C((int)v15, "<<");
  sub_13CEBC(v2, v15, *(float *)&dword_238EC0 * 0.5);
  v3 = v15[0];
  a1[27] = v2;
  if ( v3 << 31 )
    operator delete(v16);
  v4 = operator new(0x70u);
  sub_13055C((int)v15, "Spawn");
  sub_13CEBC(v4, v15, *(float *)&dword_238EC0 * 0.5);
  v5 = v15[0];
  a1[28] = v4;
  if ( v5 << 31 )
    operator delete(v16);
  v6 = operator new(0x70u);
  sub_13055C((int)v15, ">>");
  sub_13CEBC(v6, v15, *(float *)&dword_238EC0 * 0.5);
  v7 = v15[0];
  a1[29] = v6;
  if ( v7 << 31 )
    operator delete(v16);
  v8 = a1[27];
  v17 = v15;
  *(_DWORD *)v15 = &off_22EA2C;
  sub_12C504(v8 + 88, (int)v15);
  if ( v15 == v17 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v17 )
      goto LABEL_12;
    v9 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v17 + 4 * v9))();
LABEL_12:
  v10 = a1[28];
  v17 = v15;
  *(_DWORD *)v15 = &off_22EA6C;
  sub_12C504(v10 + 88, (int)v15);
  if ( v15 == v17 )
  {
    v11 = 4;
  }
  else
  {
    if ( !v17 )
      goto LABEL_17;
    v11 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v17 + 4 * v11))();
LABEL_17:
  v12 = a1[29];
  v17 = v15;
  *(_DWORD *)v15 = &off_22EAAC;
  sub_12C504(v12 + 88, (int)v15);
  if ( v15 == v17 )
  {
    v13 = 4;
    goto LABEL_21;
  }
  if ( v17 )
  {
    v13 = 5;
LABEL_21:
    (*(void (**)(void))(*(_DWORD *)v17 + 4 * v13))();
  }
  sub_12BDF6((int)a1, a1[27]);
  sub_12BDF6((int)a1, a1[28]);
  sub_12BDF6((int)a1, a1[29]);
  return a1;
}


// ======================================================================
// ADDR: 0x1373b0
// SYMBOL: sub_1373B0
_DWORD *__fastcall sub_1373B0(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  _QWORD v6[2]; // [sp+8h] [bp-60h] BYREF
  _QWORD v7[2]; // [sp+18h] [bp-50h] BYREF
  _QWORD v8[2]; // [sp+28h] [bp-40h] BYREF
  __int64 v9; // [sp+38h] [bp-30h] BYREF
  __int64 v10; // [sp+40h] [bp-28h]
  __int64 v11; // [sp+48h] [bp-20h] BYREF
  __int64 v12; // [sp+50h] [bp-18h]

  sub_12BC78((int)a1);
  *a1 = &off_22EAEC;
  v2 = operator new(0x58u);
  sub_DC6DC(&v11, "samp");
  sub_DC6DC(&v9, "arz_logo");
  sub_13D2EC(v2, &v11, &v9);
  v3 = (unsigned __int8)v9;
  a1[21] = v2;
  if ( v3 << 31 )
    operator delete((void *)v10);
  if ( (unsigned __int8)v11 << 31 )
    operator delete((void *)v12);
  sub_12BDF6((int)a1, a1[21]);
  v4 = operator new(0xC0u);
  v11 = 0LL;
  v12 = 0x3F80000000000000LL;
  v9 = 1061076671LL;
  v10 = 0x3F80000000000000LL;
  v8[0] = 0x3EC8C8CA3F800000LL;
  v8[1] = 0x3F80000000000000LL;
  v7[0] = 0x3EC8C8CA3F800000LL;
  v7[1] = 0x3F80000000000000LL;
  v6[0] = 1061076671LL;
  v6[1] = 0x3F80000000000000LL;
  ((void (__fastcall *)(int, __int64 *, __int64 *, _QWORD *, _QWORD *, _QWORD *))sub_13DB74)(v4, &v11, &v9, v8, v7, v6);
  a1[22] = v4;
  sub_12BDF6((int)a1, v4);
  return a1;
}


// ======================================================================
// ADDR: 0x1375f0
// SYMBOL: sub_1375F0
int __fastcall sub_1375F0(int a1)
{
  int v2; // r1
  _DWORD *v3; // r4
  _BYTE *v4; // r6
  _BYTE *v5; // r5
  int v6; // r0
  int v7; // r1
  std::runtime_error *exception; // r5
  __int64 v10; // [sp+0h] [bp-58h] BYREF
  __int64 v11; // [sp+8h] [bp-50h]
  __int64 v12; // [sp+10h] [bp-48h] BYREF
  __int64 v13; // [sp+18h] [bp-40h]
  void *v14[2]; // [sp+24h] [bp-34h] BYREF
  void *v15; // [sp+2Ch] [bp-2Ch]
  void *v16[2]; // [sp+30h] [bp-28h] BYREF
  void *v17; // [sp+38h] [bp-20h]

  sub_12BC78(a1);
  *(_DWORD *)a1 = &off_22EB30;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  v2 = sub_1636F0("hud");
  if ( v2 == -1 )
    v2 = sub_1636F0("*");
  sub_163144(&dword_3141C4, v2, "icon_micro");
  if ( !dword_3141C4 )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "atlas texture not found!");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  sub_DC6DC(v16, byte_8F456);
  sub_DC6DC(v14, byte_89F68);
  v12 = 0x3C0000003B000000LL;
  v13 = 0x3F0000003E000000LL;
  v10 = 0x3F0000003B000000LL;
  v11 = 0x3F8000003E000000LL;
  ((void (__fastcall *)(void **, void **, __int64 *, __int64 *))sub_1379C0)(v16, v14, &v12, &v10);
  if ( LOBYTE(v14[0]) << 31 )
    operator delete(v15);
  if ( LOBYTE(v16[0]) << 31 )
    operator delete(v17);
  sub_DC6DC(v16, byte_874C9);
  sub_DC6DC(v14, byte_8ACDE);
  v12 = 0x3C8000003E000000LL;
  v13 = 0x3F0000003E7E0000LL;
  v10 = 0x3F0200003E020000LL;
  v11 = 0x3F8000003E7E0000LL;
  ((void (__fastcall *)(void **, void **, __int64 *, __int64 *))sub_1379C0)(v16, v14, &v12, &v10);
  if ( LOBYTE(v14[0]) << 31 )
    operator delete(v15);
  if ( LOBYTE(v16[0]) << 31 )
    operator delete(v17);
  sub_DC6DC(v16, byte_8ED1A);
  sub_DC6DC(v14, byte_82C5D);
  v12 = 0x3C8000003E800000LL;
  v13 = 0x3F0000003EBF0000LL;
  v10 = 0x3F0200003E810000LL;
  v11 = 0x3F8000003EBF0000LL;
  ((void (__fastcall *)(void **, void **, __int64 *, __int64 *))sub_1379C0)(v16, v14, &v12, &v10);
  if ( LOBYTE(v14[0]) << 31 )
    operator delete(v15);
  if ( LOBYTE(v16[0]) << 31 )
    operator delete(v17);
  sub_DC6DC(v16, byte_8D75A);
  sub_DC6DC(v14, byte_86B67);
  v12 = 0x3C8000003EC00000LL;
  v13 = 0x3F0000003EFF0000LL;
  v10 = 0x3F0200003EC10000LL;
  v11 = 0x3F8000003EFF0000LL;
  ((void (__fastcall *)(void **, void **, __int64 *, __int64 *))sub_1379C0)(v16, v14, &v12, &v10);
  if ( LOBYTE(v14[0]) << 31 )
    operator delete(v15);
  if ( LOBYTE(v16[0]) << 31 )
    operator delete(v17);
  sub_DC6DC(v16, byte_883A2);
  sub_DC6DC(v14, byte_8411A);
  v12 = 0x3C8000003F000000LL;
  v13 = 0x3F0000003F1F8000LL;
  v10 = 0x3F0200003F008000LL;
  v11 = 0x3F8000003F1F8000LL;
  ((void (__fastcall *)(void **, void **, __int64 *, __int64 *))sub_1379C0)(v16, v14, &v12, &v10);
  if ( LOBYTE(v14[0]) << 31 )
    operator delete(v15);
  if ( LOBYTE(v16[0]) << 31 )
    operator delete(v17);
  v3 = (_DWORD *)dword_3141D0;
  if ( dword_3141D0 )
  {
    do
    {
      v4 = (_BYTE *)v3[3];
      v5 = v4;
      if ( v4[80] )
      {
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v4 + 36))(v3[3], 0);
        v5 = (_BYTE *)v3[3];
      }
      v6 = *((_DWORD *)v5 + 29);
      v7 = dword_3141E0;
      v4[80] = 0;
      if ( v7 != v6 )
      {
        if ( v5[80] )
          (*(void (__fastcall **)(_BYTE *, _DWORD))(*(_DWORD *)v5 + 36))(v5, 0);
        v5[80] = 0;
      }
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  _android_log_print(4, "AXL", "VoiceButton: voice icon system loaded!");
  return a1;
}


// ======================================================================
// ADDR: 0x13a028
// SYMBOL: sub_13A028
int __fastcall sub_13A028(int a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r5

  sub_12BC78(a1);
  *(_DWORD *)a1 = &off_22EC08;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 92) = 0LL;
  *(_DWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 83) = 1;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  v2 = operator new(0x58u);
  sub_13A804();
  *(_DWORD *)(a1 + 104) = v2;
  sub_12BDF6(a1, v2);
  v3 = operator new(0x5Cu);
  sub_139CE4(v3);
  *(_DWORD *)(a1 + 108) = v3;
  sub_12BDF6(a1, v3);
  v4 = operator new(0x74u);
  sub_13A948();
  *(_DWORD *)(a1 + 112) = v4;
  sub_12BDF6(a1, v4);
  *(_WORD *)(a1 + 116) = -1;
  return a1;
}


// ======================================================================
