// ADDR: 0xe5f8c
// SYMBOL: sub_E5F8C
void __fastcall sub_E5F8C(int a1, int a2, int a3)
{
  int v5; // r0
  double v6; // d16
  _BYTE *v7; // r1
  int v8; // r2
  int v9; // r0
  double v10; // d16
  int v11; // r0
  __int64 v12; // d16
  int v13; // r1
  int v14; // r0
  unsigned __int8 v15; // [sp+0h] [bp-48h] BYREF
  _BYTE v16[7]; // [sp+1h] [bp-47h] BYREF
  void *v17; // [sp+8h] [bp-40h]
  _BYTE v18[8]; // [sp+Ch] [bp-3Ch] BYREF
  void *v19; // [sp+14h] [bp-34h]
  double v20; // [sp+18h] [bp-30h] BYREF
  void *v21; // [sp+20h] [bp-28h]
  double v22; // [sp+28h] [bp-20h] BYREF
  void *v23; // [sp+30h] [bp-18h]

  std::operator+<char>(v18, "[json.exception.", a2);
  v5 = std::string::append((int)v18, ".");
  v6 = *(double *)v5;
  v21 = *(void **)(v5 + 8);
  v20 = v6;
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  std::to_string((std::__ndk1 *)&v15, a3);
  v8 = *(_DWORD *)&v16[3];
  v7 = v17;
  if ( (v15 & 1) == 0 )
  {
    v7 = v16;
    v8 = v15 >> 1;
  }
  v9 = std::string::append(&v20, v7, v8, v15 & 1);
  v10 = *(double *)v9;
  v23 = *(void **)(v9 + 8);
  v22 = v10;
  *(_DWORD *)v9 = 0;
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  v11 = std::string::append((int)&v22, "] ");
  v12 = *(_QWORD *)v11;
  v13 = *(_DWORD *)(v11 + 8);
  *(_DWORD *)v11 = 0;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  v14 = LOBYTE(v22);
  *(_DWORD *)(a1 + 8) = v13;
  *(_QWORD *)a1 = v12;
  if ( v14 << 31 )
    operator delete(v23);
  if ( v15 << 31 )
    operator delete(v17);
  if ( LOBYTE(v20) << 31 )
    operator delete(v21);
  if ( v18[0] << 31 )
    operator delete(v19);
}


// ======================================================================
// ADDR: 0xe60a8
// SYMBOL: sub_E60A8
_QWORD *__fastcall sub_E60A8(__int64 a1, char *a2)
{
  _QWORD *v2; // r4

  v2 = (_QWORD *)a1;
  LODWORD(a1) = &off_22A820;
  *v2 = a1;
  std::runtime_error::runtime_error((std::runtime_error *)(v2 + 1), a2);
  return v2;
}


// ======================================================================
// ADDR: 0xeb0b0
// SYMBOL: sub_EB0B0
void __fastcall sub_EB0B0(int a1, int a2)
{
  int v4; // r0
  double v5; // d16
  int v6; // r0
  double v7; // d16
  _BYTE *v8; // r1
  int v9; // r2
  int v10; // r0
  __int64 v11; // d16
  int v12; // r1
  int v13; // r0
  unsigned __int8 v14; // [sp+0h] [bp-48h] BYREF
  _BYTE v15[7]; // [sp+1h] [bp-47h] BYREF
  void *v16; // [sp+8h] [bp-40h]
  _BYTE v17[8]; // [sp+Ch] [bp-3Ch] BYREF
  void *v18; // [sp+14h] [bp-34h]
  double v19; // [sp+18h] [bp-30h] BYREF
  void *v20; // [sp+20h] [bp-28h]
  double v21; // [sp+28h] [bp-20h] BYREF
  void *v22; // [sp+30h] [bp-18h]

  std::to_string((std::__ndk1 *)v17, (std::__itoa *)(*(_DWORD *)(a2 + 8) + 1));
  v4 = std::string::insert((int)v17, 0, " at line ");
  v5 = *(double *)v4;
  v20 = *(void **)(v4 + 8);
  v19 = v5;
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  v6 = std::string::append((int)&v19, ", column ");
  v7 = *(double *)v6;
  v22 = *(void **)(v6 + 8);
  v21 = v7;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  std::to_string((std::__ndk1 *)&v14, *(std::__itoa **)(a2 + 4));
  v9 = *(_DWORD *)&v15[3];
  v8 = v16;
  if ( (v14 & 1) == 0 )
  {
    v8 = v15;
    v9 = v14 >> 1;
  }
  v10 = std::string::append(&v21, v8, v9, v14 & 1);
  v11 = *(_QWORD *)v10;
  v12 = *(_DWORD *)(v10 + 8);
  *(_DWORD *)v10 = 0;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  v13 = v14;
  *(_DWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = v11;
  if ( v13 << 31 )
    operator delete(v16);
  if ( LOBYTE(v21) << 31 )
    operator delete(v22);
  if ( LOBYTE(v19) << 31 )
    operator delete(v20);
  if ( v17[0] << 31 )
    operator delete(v18);
}


// ======================================================================
