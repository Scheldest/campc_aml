// ADDR: 0xef194
// SYMBOL: sub_EF194
int __fastcall sub_EF194(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r10
  int v7; // r0
  int v8; // r4
  int v9; // r0
  int v10; // r1
  int v11; // r2
  bool v12; // cf
  unsigned int v13; // r3
  int v14; // r4
  int v15; // r6
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int result; // r0
  _DWORD v22[2]; // [sp+8h] [bp-38h] BYREF
  _BYTE v23[48]; // [sp+10h] [bp-30h] BYREF

  v4 = a4;
  if ( a4 <= -1 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    v9 = *(_DWORD *)(v8 + 8);
    v10 = v9 + 1;
    if ( *(_DWORD *)(v8 + 12) < (unsigned int)(v9 + 1) )
    {
      (**(void (__fastcall ***)(_DWORD))v8)(*(_DWORD *)(a1 + 8));
      v9 = *(_DWORD *)(v8 + 8);
      v10 = v9 + 1;
    }
    v11 = *(_DWORD *)(v8 + 4);
    v12 = a3 == 0;
    a3 = -a3;
    *(_DWORD *)(v8 + 8) = v10;
    *(_BYTE *)(v11 + v9) = 45;
    v4 = -(v4 + !v12);
    v7 = 3;
  }
  else
  {
    v7 = 4;
  }
  v13 = __clz(a3 | 1) + 32;
  if ( v4 )
    v13 = __clz(v4);
  v14 = *(_DWORD *)(a1 + 8);
  v15 = byte_91BF8[v13 ^ 0x3F];
  if ( __PAIR64__(v4, a3) < qword_91C38[v15] )
    --v15;
  if ( v7 > v15 )
  {
    v16 = v7 - v15;
    if ( v16 >= 1 )
    {
      v17 = v16 + 1;
      do
      {
        v18 = *(_DWORD *)(v14 + 8);
        v19 = v18 + 1;
        if ( *(_DWORD *)(v14 + 12) < (unsigned int)(v18 + 1) )
        {
          (**(void (__fastcall ***)(int))v14)(v14);
          v18 = *(_DWORD *)(v14 + 8);
          v19 = v18 + 1;
        }
        v20 = *(_DWORD *)(v14 + 4);
        --v17;
        *(_DWORD *)(v14 + 8) = v19;
        *(_BYTE *)(v20 + v18) = 48;
      }
      while ( v17 > 1 );
    }
    *(_DWORD *)(a1 + 8) = v14;
  }
  sub_DD0CC(v22, (int)v23, __PAIR64__(v4, a3), v15);
  result = sub_DCF1C((int)v23, v22[1], v14);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
