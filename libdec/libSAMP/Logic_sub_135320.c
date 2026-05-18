// ADDR: 0x135498
// SYMBOL: sub_135498
int __fastcall sub_135498(int a1, int a2, __int64 *a3)
{
  int v6; // r6
  int v7; // r0
  int v8; // r6
  int v9; // r0
  __int64 v10; // d16
  __int64 v11; // d17
  int v12; // r6
  __int64 v13; // d16
  __int64 v14; // d17
  _QWORD *v15; // r0
  __int64 v16; // d17
  __int64 *v17; // r0
  __int64 v18; // d17
  __int64 *v19; // r0
  int v20; // r10
  __int64 *v21; // r6
  __int64 v22; // r0
  int v23; // r1
  int v24; // r10
  __int64 *v25; // r6
  __int64 v26; // r0
  int v27; // r1
  _BYTE v29[8]; // [sp+Ch] [bp-5Ch] BYREF
  void *v30; // [sp+14h] [bp-54h]
  int v31; // [sp+18h] [bp-50h]
  _BYTE v32[8]; // [sp+1Ch] [bp-4Ch] BYREF
  void *v33; // [sp+24h] [bp-44h]
  __int64 v34; // [sp+28h] [bp-40h] BYREF
  __int64 v35; // [sp+30h] [bp-38h]
  __int64 *v36; // [sp+38h] [bp-30h]

  sub_13D71C(a1, 0);
  *(_DWORD *)a1 = &off_22E6E4;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_DWORD *)(a1 + 136) = 0;
  v6 = operator new(0x70u);
  sub_DC6DC(&v34, "<<");
  sub_13CE34(v6, &v34, *(float *)&dword_238EC0 * 0.5);
  v7 = (unsigned __int8)v34;
  *(_DWORD *)(a1 + 108) = v6;
  if ( v7 << 31 )
  {
    operator delete((void *)v35);
    v6 = *(_DWORD *)(a1 + 108);
  }
  sub_12BDF6(a1, v6);
  v8 = operator new(0x70u);
  sub_DC6DC(&v34, ">>");
  sub_13CE34(v8, &v34, *(float *)&dword_238EC0 * 0.5);
  v9 = (unsigned __int8)v34;
  *(_DWORD *)(a1 + 112) = v8;
  if ( v9 << 31 )
  {
    operator delete((void *)v35);
    v8 = *(_DWORD *)(a1 + 112);
  }
  sub_12BDF6(a1, v8);
  *(float *)&v10 = 1.0;
  *((float *)&v10 + 1) = 1.0;
  *(float *)&v11 = 1.0;
  *((float *)&v11 + 1) = 1.0;
  v12 = operator new(0x78u);
  v34 = v10;
  v35 = v11;
  sub_13D3DC(v12, a2, (int)&v34, 1, *(float *)&dword_238EC0 * 0.5);
  *(_DWORD *)(a1 + 116) = v12;
  sub_12BDF6(a1, v12);
  std::string::operator=(a1 + 120);
  v13 = *a3;
  v14 = a3[1];
  v15 = *(_QWORD **)(*(_DWORD *)(a1 + 112) + 84);
  v31 = a1;
  v15 += 12;
  *v15 = v13;
  v15[1] = v14;
  v16 = a3[1];
  v17 = (__int64 *)(*(_DWORD *)(*(_DWORD *)(a1 + 108) + 84) + 96);
  *v17 = *a3;
  v17[1] = v16;
  v18 = a3[1];
  v19 = (__int64 *)(*(_DWORD *)(a1 + 116) + 96);
  *v19 = *a3;
  v19[1] = v18;
  v20 = *(_DWORD *)(a1 + 108);
  std::string::basic_string(v32, a2);
  v36 = 0;
  v21 = (__int64 *)operator new(0x14u);
  HIDWORD(v22) = v31;
  LODWORD(v22) = &off_22E924;
  *v21 = v22;
  std::string::basic_string(v21 + 1, v32);
  v36 = v21;
  sub_12C504(v20 + 88, (int)&v34);
  if ( &v34 == v36 )
  {
    v23 = 4;
  }
  else
  {
    if ( !v36 )
      goto LABEL_10;
    v23 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v36 + 4 * v23))();
LABEL_10:
  if ( v32[0] << 31 )
    operator delete(v33);
  v24 = *(_DWORD *)(a1 + 112);
  std::string::basic_string(v29, a2);
  v36 = 0;
  v25 = (__int64 *)operator new(0x14u);
  HIDWORD(v26) = a1;
  LODWORD(v26) = &off_22E964;
  *v25 = v26;
  std::string::basic_string(v25 + 1, v29);
  v36 = v25;
  sub_12C504(v24 + 88, (int)&v34);
  if ( &v34 == v36 )
  {
    v27 = 4;
  }
  else
  {
    if ( !v36 )
      goto LABEL_17;
    v27 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v36 + 4 * v27))();
LABEL_17:
  if ( v29[0] << 31 )
    operator delete(v30);
  return a1;
}


// ======================================================================
