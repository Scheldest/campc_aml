// ADDR: 0x18a1b0
// SYMBOL: sub_18A1B0
_DWORD *__fastcall sub_18A1B0(_DWORD *a1)
{
  unsigned int v1; // r1
  unsigned int i; // r5
  void *v4; // r0
  void *v5; // r0

  v1 = a1[2];
  if ( v1 )
  {
    for ( i = 0; i < v1; ++i )
    {
      v4 = *(void **)(a1[1] + 4 * i);
      if ( v4 )
      {
        operator delete(v4);
        v1 = a1[2];
      }
    }
  }
  if ( a1[3] )
  {
    v5 = (void *)a1[1];
    if ( v5 )
      operator delete[](v5);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x18a30c
// SYMBOL: sub_18A30C
void __fastcall sub_18A30C(int a1)
{
  int v2; // r5
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r8
  int v6; // r1
  int v7; // r3
  int v8; // r6
  int v9; // r4
  int v10; // r5
  int v11; // r3
  void *v12; // [sp+0h] [bp-28h] BYREF
  unsigned int v13; // [sp+4h] [bp-24h]
  unsigned int v14; // [sp+8h] [bp-20h]
  int v15; // [sp+Ch] [bp-1Ch]

  v15 = 16;
  v2 = 0;
  v14 = 0;
  v12 = (void *)operator new[](0x40u);
  v13 = 0;
  sub_18A3DA(&v12, a1 + 16);
  v3 = v13;
  v4 = v15;
  if ( v14 < v13 )
    v2 = -v15;
  if ( v14 - v13 != v2 )
  {
    v5 = a1 + 4;
    do
    {
      v6 = v3 + 1;
      v7 = v6 - v4;
      if ( v6 != v4 )
        v7 = v6;
      v13 = v7;
      if ( !v7 )
        v7 = v4;
      v8 = *((_DWORD *)v12 + v7 - 1);
      if ( !*(_BYTE *)v8 && *(int *)(v8 + 4) >= 0 )
      {
        v9 = v8 + 208;
        v10 = -1;
        do
        {
          sub_18A3DA(&v12, v9);
          ++v10;
          v9 += 4;
        }
        while ( v10 < *(_DWORD *)(v8 + 4) );
      }
      sub_18A206(v5, v8);
      sub_22178C(v8, 0x154u);
      v3 = v13;
      v11 = 0;
      v4 = v15;
      if ( v14 < v13 )
        v11 = -v15;
    }
    while ( v14 - v13 != v11 );
  }
  if ( v4 )
  {
    if ( v12 )
      operator delete[](v12);
  }
}


// ======================================================================
