// ADDR: 0x12d258
// SYMBOL: sub_12D258
void __fastcall sub_12D258(int a1, int a2, int a3, __int64 *a4)
{
  __int64 v6; // d17
  int v7; // r0
  double v8; // [sp+0h] [bp-70h] BYREF
  void *v9; // [sp+8h] [bp-68h]
  int v10; // [sp+10h] [bp-60h] BYREF
  _BYTE v11[8]; // [sp+14h] [bp-5Ch] BYREF
  void *v12; // [sp+1Ch] [bp-54h]
  _BYTE v13[8]; // [sp+20h] [bp-50h] BYREF
  void *v14; // [sp+28h] [bp-48h]
  double v15; // [sp+2Ch] [bp-44h]
  void *v16; // [sp+34h] [bp-3Ch]
  __int64 v17; // [sp+48h] [bp-28h]
  __int64 v18; // [sp+50h] [bp-20h]

  sub_22178C((int)v11, 0x44u);
  v10 = 2;
  std::string::operator=(v11);
  std::string::operator=(v13);
  v6 = a4[1];
  v17 = *a4;
  v18 = v6;
  sub_12D67C(&v8);
  if ( LOBYTE(v15) << 31 )
    operator delete(v16);
  v16 = v9;
  v15 = v8;
  v7 = sub_12D6B4(a1 + 96, &v10);
  sub_12D75C(v7, v11);
  if ( LOBYTE(v15) << 31 )
    operator delete(v16);
  if ( v13[0] << 31 )
    operator delete(v14);
  if ( v11[0] << 31 )
    operator delete(v12);
}


// ======================================================================
// ADDR: 0x14a408
// SYMBOL: sub_14A408
void __fastcall sub_14A408(int a1, const char *a2)
{
  char *v4; // r4
  unsigned int v5; // r5
  int v6; // r8
  size_t v7; // r0
  __int64 v8; // [sp+0h] [bp-38h] BYREF
  float v9; // [sp+8h] [bp-30h]
  int v10; // [sp+Ch] [bp-2Ch]
  void *v11[3]; // [sp+10h] [bp-28h] BYREF
  _BYTE v12[8]; // [sp+1Ch] [bp-1Ch] BYREF
  void *v13; // [sp+24h] [bp-14h]

  v4 = (char *)sub_148E64(**(_DWORD **)(dword_23DEF4 + 944), *(unsigned __int16 *)(a1 + 20));
  v5 = sub_107158(*(unsigned __int16 *)(a1 + 20));
  if ( dword_23DEEC )
  {
    v6 = *(_DWORD *)(dword_23DEEC + 96);
    v7 = strlen(a2);
    sub_164D04(v12, a2, v7);
    sub_DC6DC(v11, v4);
    v10 = 1065353216;
    v9 = (float)BYTE1(v5) * 0.0039216;
    *((float *)&v8 + 1) = (float)BYTE2(v5) * 0.0039216;
    *(float *)&v8 = (float)HIBYTE(v5) * 0.0039216;
    sub_12D258(v6, (int)v12, (int)v11, &v8);
    if ( LOBYTE(v11[0]) << 31 )
      operator delete(v11[2]);
    if ( v12[0] << 31 )
      operator delete(v13);
  }
}


// ======================================================================
