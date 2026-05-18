// ADDR: 0x189914
// SYMBOL: sub_189914
int __fastcall sub_189914(_DWORD *a1, int *a2, int a3, int a4)
{
  int v6; // r8
  int v7; // r5
  unsigned int v8; // r9
  int v9; // r9
  int v10; // r10
  int v11; // r0
  int v12; // r6
  int v13; // r0
  int v17[69]; // [sp+Ch] [bp-134h] BYREF
  _WORD v18[15]; // [sp+122h] [bp-1Eh] BYREF

  sub_17D4A8((int)v17);
  v6 = 0;
  if ( a1[1] )
  {
    v7 = 0;
    if ( a3 >= 49 )
    {
      v7 = 0;
      v6 = 0;
      v8 = 0;
      do
      {
        if ( *(unsigned __int16 *)(*a1 + 4 * v8) == *(unsigned __int16 *)(*a1 + 4 * v8 + 2) )
          sub_17D84A(v17);
        else
          sub_17D828(v17);
        v18[0] = *(_WORD *)(*a1 + 4 * v8);
        sub_17D628((int)v17, v18, 16, 1);
        if ( *(unsigned __int16 *)(*a1 + 4 * v8) == *(unsigned __int16 *)(*a1 + 4 * v8 + 2) )
        {
          v7 += 17;
        }
        else
        {
          v18[0] = *(_WORD *)(*a1 + 4 * v8 + 2);
          sub_17D628((int)v17, v18, 16, 1);
          v7 += 33;
        }
        ++v8;
        ++v6;
      }
      while ( v8 < a1[1] && v7 + 49 <= a3 );
    }
  }
  else
  {
    v7 = 0;
  }
  v18[0] = v6;
  v9 = *a2;
  sub_17D912(a2, v18, 16, 1);
  v10 = *a2;
  ((void (__fastcall *)(int *, int *, int))loc_17D6C8)(a2, v17, v17[0]);
  if ( a4 && v6 << 16 )
  {
    v11 = a1[1];
    if ( v11 == (unsigned __int16)v6 )
    {
      v13 = 0;
    }
    else
    {
      v12 = 0;
      do
      {
        *(_DWORD *)(*a1 + 4 * v12) = *(_DWORD *)(*a1 + 4 * (unsigned __int16)v6 + 4 * v12);
        ++v12;
      }
      while ( v11 - (unsigned __int16)v6 != v12 );
      v13 = a1[1] - (unsigned __int16)v6;
    }
    a1[1] = v13;
  }
  sub_17D542((int)v17);
  return v7 - v9 + v10;
}


// ======================================================================
// ADDR: 0x189a44
// SYMBOL: sub_189A44
void __fastcall sub_189A44(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r8
  unsigned int v6; // r0
  unsigned int v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r5
  int v11; // r3
  int v12; // r1
  int v13; // r0
  bool v14; // zf
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r4
  _DWORD *v19; // r5
  int v20; // r6
  int i; // r10
  int v22; // r1
  _DWORD *v23; // r0
  int v24; // r1

  v3 = a1[3];
  if ( v3 )
  {
    v6 = a1[1];
    if ( !v6 )
      v6 = v3;
    v7 = v6 - 1;
    a1[1] = v6 - 1;
    if ( a3 )
    {
      v8 = 4 * v6;
      v9 = a3;
      do
      {
        --v9;
        v10 = *(_DWORD *)(*a1 + v8);
        v11 = *a1 + v8;
        v8 += 4;
        *(_DWORD *)(v11 - 4) = v10;
      }
      while ( v9 );
    }
    v12 = a1[2];
    *(_DWORD *)(*a1 + 4 * (a3 + v7)) = *a2;
    if ( v12 == v7 )
    {
      v13 = (2 * v3) & 0x3FFFFFFE;
      v15 = v13 - 2 * v3;
      v14 = v13 == 2 * v3;
      v16 = 8 * v3;
      if ( !v14 )
        v15 = 1;
      if ( v15 )
        v16 = -1;
      v17 = operator new[](v16);
      v18 = v3;
      if ( v3 <= 1 )
        v18 = 1;
      v19 = (_DWORD *)*a1;
      v20 = v17;
      for ( i = 0; i != v18; ++i )
      {
        sub_221798(v7 + i, v3);
        *(_DWORD *)(v20 + 4 * i) = v19[v22];
      }
      a1[1] = 0;
      a1[2] = v3;
      a1[3] = 2 * v3;
      operator delete[](v19);
      *a1 = v20;
    }
  }
  else
  {
    v23 = (_DWORD *)operator new[](0x40u);
    *a1 = v23;
    a1[2] = 1;
    a1[1] = 0;
    v24 = *a2;
    a1[3] = 16;
    *v23 = v24;
  }
}


// ======================================================================
// ADDR: 0x189b34
// SYMBOL: sub_189B34
int __fastcall sub_189B34(int a1, int *a2, int a3)
{
  int v4; // r8
  int v6; // r0
  unsigned int v7; // r0
  char v9; // [sp+3h] [bp-15h] BYREF
  _DWORD v10[5]; // [sp+4h] [bp-14h] BYREF

  v4 = *a2;
  v6 = *(_DWORD *)(a3 + 12);
  LOWORD(v10[0]) = *(_WORD *)a3;
  v9 = v6;
  sub_17D628((int)a2, v10, 16, 1);
  sub_17D628((int)a2, &v9, 4, 1);
  v7 = *(_DWORD *)(a3 + 12);
  if ( v7 <= 0xA && ((1 << v7) & 0x680) != 0 )
  {
    sub_17D628((int)a2, (_BYTE *)(a3 + 16), 5, 1);
    LOWORD(v10[0]) = *(_WORD *)(a3 + 18);
    sub_17D628((int)a2, v10, 16, 1);
  }
  if ( *(_DWORD *)(a3 + 28) )
  {
    sub_17D84A(a2);
    LOWORD(v10[0]) = *(_WORD *)(a3 + 20);
    sub_17D628((int)a2, v10, 16, 1);
    v10[0] = *(_DWORD *)(a3 + 24);
    sub_17D912(a2, v10, 32, 1);
    v10[0] = *(_DWORD *)(a3 + 28);
    sub_17D912(a2, v10, 32, 1);
  }
  else
  {
    sub_17D828(a2);
  }
  LOWORD(v10[0]) = *(_DWORD *)(a3 + 48);
  sub_17D912(a2, v10, 16, 1);
  sub_17D89E((unsigned __int8 *)a2, *(const void **)(a3 + 52), (unsigned int)(*(_DWORD *)(a3 + 48) + 7) >> 3);
  return *a2 - v4;
}


// ======================================================================
// ADDR: 0x189c10
// SYMBOL: sub_189C10
int __fastcall sub_189C10(_DWORD *a1, __int16 a2, _DWORD *a3)
{
  int v3; // r3
  int v7; // r5
  __int16 v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int result; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r0
  __int16 v18; // [sp+Ch] [bp-1Ch] BYREF
  int v19; // [sp+10h] [bp-18h]
  char v20[17]; // [sp+17h] [bp-11h] BYREF

  v3 = a1[4];
  if ( v3 )
  {
    v20[0] = 1;
    v19 = 0;
    v7 = sub_18A604(a1, a2, a3, v3, &v18, v20);
    if ( v20[0] )
    {
      if ( v7 )
      {
        if ( *(_BYTE *)v7 )
        {
          v8 = *(_WORD *)(v7 + 8);
        }
        else
        {
          v8 = v18;
          --*(_DWORD *)(v7 + 4);
        }
        v15 = a1[2];
        if ( v15 )
        {
          v16 = a1[1];
          a1[2] = v15 - 1;
          v17 = *(_DWORD *)(v16 + 4 * (v15 - 1));
        }
        else
        {
          v17 = operator new(0x154u);
        }
        *(_DWORD *)(v17 + 208) = a1[4];
        *(_DWORD *)(v17 + 212) = v7;
        *(_WORD *)(v17 + 8) = v8;
        *(_DWORD *)(v17 + 4) = 1;
        *(_BYTE *)v17 = 0;
        a1[4] = v17;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v9 = a1[2];
    if ( v9 )
    {
      v10 = a1[1];
      v11 = v9 - 1;
      a1[2] = v11;
      v12 = *(_DWORD *)(v10 + 4 * v11);
    }
    else
    {
      v12 = operator new(0x154u);
    }
    a1[4] = v12;
    a1[5] = v12;
    *(_DWORD *)(v12 + 72) = *a3;
    result = 1;
    v14 = a1[4];
    *(_BYTE *)v12 = 1;
    *(_WORD *)(v12 + 8) = a2;
    *(_DWORD *)(v12 + 4) = 1;
    *(_DWORD *)(v14 + 200) = 0;
    *(_DWORD *)(v14 + 204) = 0;
  }
  return result;
}


// ======================================================================
