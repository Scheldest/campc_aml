// ADDR: 0xe9cb0
// SYMBOL: sub_E9CB0
void __fastcall sub_E9CB0(_DWORD *a1, int a2, unsigned __int8 *a3)
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

  sub_DC6DC(v20, "type_error");
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
  *a1 = &off_22A86C;
  if ( v17 << 31 )
    operator delete(v26);
}


// ======================================================================
// ADDR: 0xe9dfc
// SYMBOL: sub_E9DFC
const char *__fastcall sub_E9DFC(char *a1)
{
  unsigned int v1; // r0

  v1 = *a1;
  if ( v1 > 9 )
    return "number";
  else
    return off_22A8AC[v1];
}


// ======================================================================
// ADDR: 0xebe18
// SYMBOL: sub_EBE18
_DWORD *__fastcall sub_EBE18(int a1, int **a2, int a3, int a4, __int64 **a5)
{
  _DWORD *result; // r0
  int v8; // r6
  char v9; // r4
  _DWORD *v10; // r5
  __int64 *v11; // r0
  int v12; // r1
  __int64 v13; // d16
  int v14[7]; // [sp+4h] [bp-1Ch] BYREF

  result = sub_EA184((int)a2, v14, a3);
  v8 = *result;
  v9 = 0;
  if ( !*result )
  {
    v10 = result;
    v8 = operator new(0x30u);
    v11 = *a5;
    v12 = v14[0];
    v13 = **a5;
    *(_DWORD *)(v8 + 24) = *((_DWORD *)*a5 + 2);
    *(_QWORD *)(v8 + 16) = v13;
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 + 1) = 0;
    *((_DWORD *)v11 + 2) = 0;
    *(_DWORD *)(v8 + 40) = 0;
    *(_BYTE *)(v8 + 32) = 0;
    result = (_DWORD *)sub_EA246(a2, v12, v10, (_DWORD *)v8);
    v9 = 1;
  }
  *(_BYTE *)(a1 + 4) = v9;
  *(_DWORD *)a1 = v8;
  return result;
}


// ======================================================================
