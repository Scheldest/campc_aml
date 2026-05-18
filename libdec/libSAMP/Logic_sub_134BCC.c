// ADDR: 0x134ee8
// SYMBOL: sub_134EE8
_DWORD *__fastcall sub_134EE8(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  _UNKNOWN **v15; // [sp+0h] [bp-30h] BYREF
  _DWORD *v16; // [sp+4h] [bp-2Ch]
  void *v17; // [sp+8h] [bp-28h]
  _DWORD *v18; // [sp+10h] [bp-20h]

  sub_13D71C(a1, 0);
  *a1 = &off_22E63C;
  v2 = operator new(0x70u);
  sub_DC6DC(&v15, "Save");
  sub_13CE34(v2, &v15, *(float *)&dword_238EC0 * 0.5);
  v3 = (unsigned __int8)v15;
  a1[27] = v2;
  if ( v3 << 31 )
  {
    operator delete(v17);
    v2 = a1[27];
  }
  sub_12BDF6((int)a1, v2);
  v4 = operator new(0x90u);
  sub_DC6DC(&v15, "Hide");
  sub_13CE34(v4, &v15, *(float *)&dword_238EC0 * 0.5);
  v5 = (unsigned __int8)v15;
  *(_DWORD *)(v4 + 136) = 0;
  *(_DWORD *)v4 = &off_22E758;
  *(_BYTE *)(v4 + 112) = 0;
  a1[28] = v4;
  if ( v5 << 31 )
  {
    operator delete(v17);
    v4 = a1[28];
  }
  sub_12BDF6((int)a1, v4);
  v6 = operator new(0x70u);
  sub_DC6DC(&v15, "Close");
  sub_13CE34(v6, &v15, *(float *)&dword_238EC0 * 0.5);
  v7 = (unsigned __int8)v15;
  a1[29] = v6;
  if ( v7 << 31 )
  {
    operator delete(v17);
    v6 = a1[29];
  }
  sub_12BDF6((int)a1, v6);
  v8 = a1[27];
  v18 = &v15;
  v16 = a1;
  v15 = &off_22E79C;
  sub_12C504(v8 + 88, (int)&v15);
  if ( &v15 == v18 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_12;
    v9 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v9))();
LABEL_12:
  v10 = a1[28];
  v18 = &v15;
  v16 = a1;
  v15 = &off_22E7DC;
  sub_1359B8(v10 + 120, &v15);
  if ( &v15 == v18 )
  {
    v11 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_17;
    v11 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v11))();
LABEL_17:
  v12 = a1[29];
  v18 = &v15;
  v16 = a1;
  v15 = &off_22E824;
  sub_12C504(v12 + 88, (int)&v15);
  if ( &v15 == v18 )
  {
    v13 = 4;
    goto LABEL_21;
  }
  if ( v18 )
  {
    v13 = 5;
LABEL_21:
    (*(void (**)(void))(*v18 + 4 * v13))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1350f4
// SYMBOL: sub_1350F4
_DWORD *__fastcall sub_1350F4(_DWORD *a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r5
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  _UNKNOWN **v15; // [sp+0h] [bp-38h] BYREF
  _DWORD *v16; // [sp+4h] [bp-34h]
  void *v17; // [sp+8h] [bp-30h]
  _DWORD *v18; // [sp+10h] [bp-28h]

  sub_13D71C(a1, 1);
  *a1 = &off_22E674;
  v2 = operator new(0x90u);
  sub_DC6DC(&v15, "Position");
  sub_13CE34(v2, &v15, *(float *)&dword_238EC0 * 0.5);
  v3 = (unsigned __int8)v15;
  *(_DWORD *)(v2 + 136) = 0;
  *(_BYTE *)(v2 + 112) = 0;
  a1[27] = v2;
  *(_DWORD *)v2 = &off_22E758;
  if ( v3 << 31 )
  {
    operator delete(v17);
    v2 = a1[27];
  }
  sub_12BDF6((int)a1, v2);
  v4 = operator new(0x90u);
  sub_DC6DC(&v15, "Rotation");
  sub_13CE34(v4, &v15, *(float *)&dword_238EC0 * 0.5);
  v5 = (unsigned __int8)v15;
  *(_DWORD *)(v4 + 136) = 0;
  *(_BYTE *)(v4 + 112) = 0;
  a1[28] = v4;
  *(_DWORD *)v4 = &off_22E758;
  if ( v5 << 31 )
  {
    operator delete(v17);
    v4 = a1[28];
  }
  sub_12BDF6((int)a1, v4);
  v6 = operator new(0x90u);
  sub_DC6DC(&v15, "Scale");
  sub_13CE34(v6, &v15, *(float *)&dword_238EC0 * 0.5);
  v7 = (unsigned __int8)v15;
  *(_DWORD *)(v6 + 136) = 0;
  *(_BYTE *)(v6 + 112) = 0;
  a1[29] = v6;
  *(_DWORD *)v6 = &off_22E758;
  if ( v7 << 31 )
  {
    operator delete(v17);
    v6 = a1[29];
  }
  sub_12BDF6((int)a1, v6);
  v8 = a1[27];
  v18 = &v15;
  v16 = a1;
  v15 = &off_22E864;
  sub_1359B8(v8 + 120, &v15);
  if ( &v15 == v18 )
  {
    v9 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_12;
    v9 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v9))();
LABEL_12:
  v10 = a1[28];
  v18 = &v15;
  v16 = a1;
  v15 = &off_22E8A4;
  sub_1359B8(v10 + 120, &v15);
  if ( &v15 == v18 )
  {
    v11 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_17;
    v11 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v11))();
LABEL_17:
  v12 = a1[29];
  v18 = &v15;
  v16 = a1;
  v15 = &off_22E8E4;
  sub_1359B8(v12 + 120, &v15);
  if ( &v15 == v18 )
  {
    v13 = 4;
    goto LABEL_21;
  }
  if ( v18 )
  {
    v13 = 5;
LABEL_21:
    (*(void (**)(void))(*v18 + 4 * v13))();
  }
  return a1;
}


// ======================================================================
// ADDR: 0x135320
// SYMBOL: sub_135320
_DWORD *__fastcall sub_135320(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  _QWORD *v4; // r0
  int v5; // r6
  int v6; // r3
  int v7; // r0
  _QWORD *v8; // r0
  int v9; // r6
  int v10; // r3
  int v11; // r0
  _QWORD *v12; // r0
  __int64 v14; // [sp+0h] [bp-30h] BYREF
  __int64 v15; // [sp+8h] [bp-28h]
  void *v16[2]; // [sp+14h] [bp-1Ch] BYREF
  void *v17; // [sp+1Ch] [bp-14h]

  sub_13D71C(a1, 1);
  *a1 = &off_22E6AC;
  v2 = operator new(0x8Cu);
  sub_DC6DC(v16, (char *)&off_8E5D8);
  v14 = 1065353216LL;
  v15 = 0x3F80000000000000LL;
  ((void (__fastcall *)(int, void **, __int64 *))sub_135498)(v2, v16, &v14);
  v3 = LOBYTE(v16[0]);
  a1[27] = v2;
  if ( v3 << 31 )
  {
    operator delete(v17);
    v2 = a1[27];
  }
  sub_12BDF6((int)a1, v2);
  v4 = (_QWORD *)(a1[27] + 88);
  *v4 = 0LL;
  v4[1] = 0LL;
  v5 = operator new(0x8Cu);
  sub_DC6DC(v16, "Y: ");
  v14 = 0x3F80000000000000LL;
  v15 = 0x3F80000000000000LL;
  ((void (__fastcall *)(int, void **, __int64 *, int))sub_135498)(v5, v16, &v14, v6);
  v7 = LOBYTE(v16[0]);
  a1[28] = v5;
  if ( v7 << 31 )
  {
    operator delete(v17);
    v5 = a1[28];
  }
  sub_12BDF6((int)a1, v5);
  v8 = (_QWORD *)(a1[28] + 88);
  *v8 = 0LL;
  v8[1] = 0LL;
  v9 = operator new(0x8Cu);
  sub_DC6DC(v16, "Z: ");
  v14 = 0LL;
  v15 = 0x3F8000003F800000LL;
  ((void (__fastcall *)(int, void **, __int64 *, int))sub_135498)(v9, v16, &v14, v10);
  v11 = LOBYTE(v16[0]);
  a1[29] = v9;
  if ( v11 << 31 )
  {
    operator delete(v17);
    v9 = a1[29];
  }
  sub_12BDF6((int)a1, v9);
  v12 = (_QWORD *)(a1[29] + 88);
  *v12 = 0LL;
  v12[1] = 0LL;
  return a1;
}


// ======================================================================
