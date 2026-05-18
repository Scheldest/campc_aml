// ADDR: 0xe27e6
// SYMBOL: sub_E27E6
int __fastcall sub_E27E6(int a1, int a2, int a3)
{
  unsigned int v3; // r11
  int v4; // r4
  int v5; // r6
  int v6; // r5
  double v8; // [sp+0h] [bp-38h] BYREF
  int v9; // [sp+8h] [bp-30h]
  double v10; // [sp+10h] [bp-28h] BYREF
  int v11; // [sp+18h] [bp-20h]

  v3 = a2 + a3;
  v4 = a1 + 1;
  v5 = a2;
  do
  {
    v11 = 0;
    *(_QWORD *)&v10 = v3;
    sub_E29FC(v5, v3 - v5, &v10);
    v8 = v10;
    v9 = v11;
    v6 = HIDWORD(v10);
    if ( v5 != LODWORD(v10) )
      v4 = v4 - v5 + LODWORD(v10);
    if ( !HIDWORD(v10) )
      break;
    v4 = sub_E28C4(v4, &v8);
    v5 = v6;
  }
  while ( v6 != v3 );
  return v4 + 1;
}


// ======================================================================
// ADDR: 0xe284c
// SYMBOL: sub_E284C
int __fastcall sub_E284C(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r6
  char v8; // r0
  int v9; // r9
  int v10; // r6
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91D40[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = v7 - v9;
  if ( *(_BYTE *)a5 )
    a1 = sub_E2F08(a1, *(_DWORD *)(a5 + 4), *(_DWORD *)(a5 + 8));
  else
    sub_DCF30(a1, *(char **)(a5 + 12), (char *)(*(_DWORD *)(a5 + 12) + *(_DWORD *)(a5 + 16)));
  result = a1;
  if ( v10 )
    return sub_DD992(a1, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xe2b90
// SYMBOL: sub_E2B90
int __fastcall sub_E2B90(unsigned __int8 *a1, unsigned int a2, int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r10
  unsigned int v8; // r6
  unsigned int v9; // r0
  int v10; // r2
  unsigned int v11; // r1
  int result; // r0
  int v13; // r5
  unsigned __int8 *v14; // r11
  unsigned int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // r10
  unsigned int v19; // r6
  unsigned int v20; // r0
  int v21; // r2
  unsigned int v22; // r1
  unsigned __int8 *v23; // [sp+4h] [bp-44h]
  unsigned int v24; // [sp+8h] [bp-40h]
  unsigned int v25; // [sp+1Ch] [bp-2Ch]
  _DWORD v26[2]; // [sp+20h] [bp-28h] BYREF
  _DWORD v27[8]; // [sp+28h] [bp-20h] BYREF

  v3 = a1;
  v27[0] = a3;
  if ( a2 >= 4 )
  {
    v24 = a2;
    v3 = a1;
    v25 = (unsigned int)&a1[a2 - 3];
    v23 = a1;
    while ( (unsigned int)v3 < v25 )
    {
      v4 = *v3;
      v5 = v3[1];
      v6 = v3[2];
      v7 = v3[3];
      v8 = byte_91EB0[v4 >> 3] + ((0x80FF0000 >> (*v3 >> 3)) & 1);
      v9 = (((v5 & 0x3F) << 12) | ((v4 & dword_91ED0[v8]) << 18) | ((v6 & 0x3F) << 6)) + (v7 & 0x3F);
      v10 = (((v5 >> 2) & 0x30) + ((v6 >> 4) & 0xC)) | (v7 >> 6);
      v11 = v9 >> dword_91EF8[v8];
      if ( dword_91EE4[v8] > v11 )
        v10 += 64;
      if ( (unsigned int)&loc_10FFFE < v11 )
        v10 += 256;
      if ( (v11 & 0xFFFFF800) == 0xD800 )
        v10 |= 0x80u;
      if ( (v10 ^ 0x2Au) >> dword_91F0C[v8] )
        v11 = -1;
      result = sub_E2DB8(v27, v11, v3, v8);
      v3 += v8;
      if ( !result )
        return result;
    }
    a1 = v23;
    a2 = v24;
  }
  result = (int)&a1[a2];
  v13 = result - (_DWORD)v3;
  if ( (unsigned __int8 *)result != v3 )
  {
    v14 = (unsigned __int8 *)v26;
    memset(v26, 0, 7);
    _memcpy_chk(v26, v3, v13, 7);
    do
    {
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v18 = v14[3];
      v19 = byte_91EB0[v15 >> 3] + ((0x80FF0000 >> (*v14 >> 3)) & 1);
      v20 = (((v16 & 0x3F) << 12) | ((v15 & dword_91ED0[v19]) << 18) | ((v17 & 0x3F) << 6)) + (v18 & 0x3F);
      v21 = (((v16 >> 2) & 0x30) + ((v17 >> 4) & 0xC)) | (v18 >> 6);
      v22 = v20 >> dword_91EF8[v19];
      if ( dword_91EE4[v19] > v22 )
        v21 += 64;
      if ( (unsigned int)&loc_10FFFE < v22 )
        v21 += 256;
      if ( (v22 & 0xFFFFF800) == 0xD800 )
        v21 |= 0x80u;
      if ( (v21 ^ 0x2Au) >> dword_91F0C[v19] )
        v22 = -1;
      result = sub_E2DB8(v27, v22, v3, v19);
      if ( !result )
        break;
      v14 += v19;
      result = v14 - (unsigned __int8 *)v26;
      v3 += v19;
    }
    while ( v14 - (unsigned __int8 *)v26 < v13 );
  }
  return result;
}


// ======================================================================
