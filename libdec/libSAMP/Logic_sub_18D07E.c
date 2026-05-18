// ADDR: 0x17de9c
// SYMBOL: sub_17DE9C
unsigned int __fastcall sub_17DE9C(int *a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r4
  int v7; // r5
  unsigned int v10; // r11
  bool v11; // zf
  int v12; // r0

  if ( !a3 )
    return 0;
  v6 = *a1;
  v7 = a3;
  v10 = 0;
  do
  {
    v11 = sub_17D884(a2) == 0;
    v12 = 8;
    if ( !v11 )
      v12 = 12;
    v6 = *(_DWORD *)(v6 + v12);
    if ( !*(_DWORD *)(v6 + 8) && !*(_DWORD *)(v6 + 12) )
    {
      if ( v10 < a4 )
        *(_BYTE *)(a5 + v10) = *(_BYTE *)v6;
      v6 = *a1;
      ++v10;
    }
    --v7;
  }
  while ( v7 );
  return v10;
}


// ======================================================================
// ADDR: 0x18cfbe
// SYMBOL: sub_18CFBE
bool __fastcall sub_18CFBE(int a1, int *a2)
{
  int v5; // r1
  int v6; // r0
  int v7; // r1
  _BYTE v8[9]; // [sp+7h] [bp-9h] BYREF

  if ( *(_BYTE *)(a1 + 20) && *a2 == *(_DWORD *)(a1 + 16) )
    return 1;
  v5 = sub_18D136(a1, a2, v8);
  v6 = v8[0];
  if ( v8[0] )
  {
    *(_DWORD *)(a1 + 12) = v5;
    v7 = *a2;
    *(_BYTE *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 16) = v7;
  }
  return v6 != 0;
}


// ======================================================================
// ADDR: 0x18d000
// SYMBOL: sub_18D000
int __fastcall sub_18D000(int *a1, int *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _BYTE v9[9]; // [sp+7h] [bp-9h] BYREF

  if ( *((_BYTE *)a1 + 20) && *a2 == a1[4] )
  {
    v4 = *a1 + 8 * a1[3];
  }
  else
  {
    v5 = sub_18D136(a1, a2, v9);
    v6 = *a1;
    a1[3] = v5;
    v4 = v6 + 8 * v5;
    v7 = *a2;
    *((_BYTE *)a1 + 20) = 1;
    a1[4] = v7;
  }
  return v4 + 4;
}


// ======================================================================
