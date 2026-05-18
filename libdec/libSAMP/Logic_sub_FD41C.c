// ADDR: 0xfd5b0
// SYMBOL: sub_FD5B0
int __fastcall sub_FD5B0(int a1)
{
  float v2; // s0
  int result; // r0

  if ( fabsf(sub_14B4F8(a1) - *(float *)(a1 + 276)) <= 10.0 )
  {
    result = *(unsigned __int8 *)(a1 + 284);
    if ( *(_BYTE *)(a1 + 284) )
      return 1;
  }
  else
  {
    v2 = sub_14B4F8(a1);
    result = 1;
    *(float *)(a1 + 276) = v2;
  }
  return result;
}


// ======================================================================
// ADDR: 0x100ff0
// SYMBOL: sub_100FF0
int __fastcall sub_100FF0(int a1)
{
  char v2; // r8
  __int16 v3; // r9
  int v4; // r0
  __int16 v5; // r2

  v2 = *(_BYTE *)dword_2402D0;
  *(_BYTE *)dword_2402D0 = sub_F8224(**(unsigned __int8 **)(a1 + 4));
  v3 = *(_WORD *)dword_2402DC;
  v4 = sub_F8224(**(unsigned __int8 **)(a1 + 4));
  v5 = v4 - 4;
  if ( v4 != 4 )
    v5 = v4;
  *(_WORD *)dword_2402DC = v5;
  sub_F82C8();
  sub_F82F8(**(unsigned __int8 **)(a1 + 4));
  sub_F8280();
  sub_F8230(**(unsigned __int8 **)(a1 + 4));
  sub_F83C8();
  sub_F8400(**(unsigned __int8 **)(a1 + 4));
  sub_126C48(**(_DWORD **)(a1 + 8), dword_247514);
  sub_F8390();
  *(_BYTE *)dword_2402D0 = v2;
  *(_WORD *)dword_2402DC = v3;
  sub_F8298();
  return sub_F8268();
}


// ======================================================================
// ADDR: 0x126c48
// SYMBOL: sub_126C48
int __fastcall sub_126C48(int a1, int (__fastcall *a2)(int))
{
  int v4; // r0
  int v5; // r2
  _DWORD *v6; // r6
  int (__fastcall *v7)(int); // r12
  int v8; // r1
  int v9; // r8
  int v10; // r0
  int v11; // r5
  _DWORD *v12; // r3
  _DWORD *v13; // r3
  int (__fastcall *v14)(int); // r5
  int v15; // r0
  int v16; // r0
  int v17; // r1
  _DWORD v19[5]; // [sp+4h] [bp-14h] BYREF

  v4 = sub_126D14(&dword_313AA0);
  if ( !*(_DWORD *)(v4 + 12) )
    return a2(a1);
  v5 = v4 + 8;
  v6 = *(_DWORD **)(v4 + 8);
  v7 = a2;
  v8 = *(_DWORD *)(a1 + 28 * *(char *)(a1 + 1820) + 1444);
  v19[0] = v8;
  if ( v6 )
  {
    v9 = v4 + 4;
    v10 = v4 + 8;
    do
    {
      v11 = v6[4];
      v12 = v6;
      if ( v11 < v8 )
        v12 = v6 + 1;
      v13 = (_DWORD *)*v12;
      if ( v11 >= v8 )
        v10 = (int)v6;
      v6 = v13;
    }
    while ( v13 );
    if ( v10 != v5 && v8 >= *(_DWORD *)(v10 + 16) )
    {
      v14 = v7;
      v15 = sub_126D58(v9, v19);
      v7 = v14;
      if ( *(_DWORD *)(v15 + 32) != -1 )
      {
        v16 = sub_126D58(v9, v19);
        v17 = v19[0];
        *(_DWORD *)(a1 + 28 * *(char *)(a1 + 1820) + 1444) = *(_DWORD *)(v16 + 32);
        sub_129E00(a1, v17);
        v7 = v14;
      }
    }
  }
  v7(a1);
  *(_DWORD *)(a1 + 28 * *(char *)(a1 + 1820) + 1444) = v19[0];
  return sub_129E64(0);
}


// ======================================================================
// ADDR: 0x14b4f8
// SYMBOL: sub_14B4F8
int __fastcall sub_14B4F8(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 296);
  if ( !v2 )
    return 1176256512;
  if ( *(_BYTE *)(a1 + 25) == 19 && *(_DWORD *)(a1 + 4) )
  {
    if ( sub_104108(v2) )
      v2 = *(_DWORD *)(a1 + 4);
    else
      v2 = *(_DWORD *)(a1 + 296);
  }
  return sub_F8E1C(v2);
}


// ======================================================================
// ADDR: 0x1637f0
// SYMBOL: sub_1637F0
int __fastcall sub_1637F0(int a1)
{
  return *(_DWORD *)(a1 + 44);
}


// ======================================================================
