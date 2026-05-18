// ADDR: 0x180d28
// SYMBOL: sub_180D28
void __fastcall sub_180D28(_DWORD *a1, int *a2)
{
  int v2; // r5
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r9
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  _DWORD *v14; // r4
  int v15; // r11
  int i; // r6
  int v17; // r1
  _DWORD *v18; // r0
  int v19; // r1

  v2 = a1[3];
  if ( v2 )
  {
    v5 = a1[2];
    v6 = (_DWORD *)*a1;
    v7 = *a2;
    v8 = v5 + 1;
    a1[2] = v5 + 1;
    v6[v5] = v7;
    if ( v5 + 1 == v2 )
    {
      v8 = 0;
      a1[2] = 0;
    }
    if ( v8 == a1[1] )
    {
      v9 = (2 * v2) & 0x3FFFFFFE;
      v11 = v9 - 2 * v2;
      v10 = v9 == 2 * v2;
      v12 = 8 * v2;
      if ( !v10 )
        v11 = 1;
      if ( v11 )
        v12 = -1;
      v13 = operator new[](v12);
      v14 = (_DWORD *)*a1;
      v15 = v13;
      for ( i = 0; i != v2; ++i )
      {
        sub_221798(v8 + i, v2);
        *(_DWORD *)(v15 + 4 * i) = v14[v17];
      }
      a1[1] = 0;
      a1[2] = v2;
      a1[3] = 2 * v2;
      operator delete[](v14);
      *a1 = v15;
    }
  }
  else
  {
    v18 = (_DWORD *)operator new[](0x40u);
    *a1 = v18;
    a1[2] = 1;
    a1[1] = 0;
    v19 = *a2;
    a1[3] = 16;
    *v18 = v19;
  }
}


// ======================================================================
// ADDR: 0x180dec
// SYMBOL: sub_180DEC
int __fastcall sub_180DEC(int a1, void *a2, int a3, int a4)
{
  _DWORD *v7; // r0
  int v8; // r4
  int v10; // [sp+4h] [bp-12Ch] BYREF
  _DWORD v11[69]; // [sp+8h] [bp-128h] BYREF
  _DWORD v12[5]; // [sp+11Ch] [bp-14h] BYREF

  v7 = (_DWORD *)sub_17D4F2((int)v11, a2, 4u, 0);
  sub_17D786(v7, &v10, 32, 1);
  v8 = v10;
  v10 = v8 - sub_182BE8(a1, a3, a4);
  sub_17DA9E(v11, 0);
  v12[0] = v10;
  sub_17D628((int)v11, v12, 32, 1);
  return sub_17D542((int)v11);
}


// ======================================================================
// ADDR: 0x180e50
// SYMBOL: sub_180E50
int __fastcall sub_180E50(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v9[1] = a5;
  result = *(unsigned __int8 *)(a1 + 2045);
  v9[0] = a4;
  if ( result )
  {
    if ( sub_17E580((int)v9, a1 + 2036) && !*(_BYTE *)(a1 + 2044)
      || (result = sub_17E596((int)v9, a1 + 2036)) != 0
      && (result = *(unsigned __int8 *)(a1 + 2044), *(_BYTE *)(a1 + 2044)) )
    {
      sub_17D566(*(unsigned __int8 **)(a1 + 2032), (const void *)(a2 + 1), a3 - 1);
      result = 0;
      *(_BYTE *)(a1 + 2045) = 0;
    }
  }
  return result;
}


// ======================================================================
