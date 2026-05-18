// ADDR: 0x9824c
// SYMBOL: sub_9824C
int sub_9824C()
{
  int v0; // r0
  float v1; // s6
  float v2; // s10
  float v3; // s4
  float v4; // s12
  char s[16]; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+14h] [bp-Ch]

  v0 = dword_1ACF68;
  if ( *(_BYTE *)(dword_1ACF68 + 7449) )
  {
    v1 = *(float *)(dword_1ACF68 + 5560);
    v2 = *(float *)(dword_1ACF68 + 224);
    v3 = *(float *)(dword_1ACF68 + 5648) * 0.6;
    v4 = *(float *)(dword_1ACF68 + 228) + (float)(v1 * 8.0);
    *(_DWORD *)(dword_1ACF68 + 6696) = 0;
    *(_DWORD *)(v0 + 6700) = 0;
    *(_DWORD *)(v0 + 6672) |= 0x41u;
    *(_DWORD *)(v0 + 6676) = 1;
    *(float *)(v0 + 6748) = v3;
    *(float *)(v0 + 6692) = v4;
    *(float *)(v0 + 6688) = v2 + (float)(v1 * 16.0);
    return sub_9833C(0, 1);
  }
  else
  {
    sub_886C0(s, 16, "##Tooltip_%02d", *(_DWORD *)(dword_1ACF68 + 11472));
    sub_8FD20(s, 0, (float *)0x20C0347);
    return v7;
  }
}


// ======================================================================
// ADDR: 0x9833c
// SYMBOL: sub_9833C
int __fastcall sub_9833C(int a1, int a2)
{
  int v4; // r10
  int v5; // r2
  unsigned __int8 *v6; // r1
  unsigned int v7; // r0
  int v8; // r6
  bool v9; // zf
  unsigned int v10; // r0
  int v11; // r12
  _DWORD *v12; // r1
  unsigned int v13; // r6
  unsigned int v14; // r2
  unsigned int *v15; // r4
  _DWORD *v16; // r4
  unsigned int v17; // t1
  int v18; // r0
  bool v19; // zf
  int v20; // r6
  char s; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v23[43]; // [sp+5h] [bp-2Bh] BYREF

  v4 = dword_1ACF68;
  sub_886C0(&s, 16, "##Tooltip_%02d", *(_DWORD *)(dword_1ACF68 + 11472));
  if ( a2 )
  {
    v5 = (unsigned __int8)s;
    if ( s )
    {
      v6 = v23;
      v7 = -1;
      do
      {
        v8 = v5;
        v5 = *v6;
        v9 = v8 == 35;
        if ( v8 == 35 )
          v9 = v5 == 35;
        if ( v9 )
        {
          v5 = 35;
          if ( v6[1] == 35 )
            v7 = -1;
        }
        ++v6;
        v7 = dword_52D88[v8 ^ (unsigned __int8)v7] ^ (v7 >> 8);
      }
      while ( v5 );
      v10 = ~v7;
    }
    else
    {
      v10 = 0;
    }
    v11 = *(_DWORD *)(dword_1ACF68 + 6556);
    v12 = *(_DWORD **)(dword_1ACF68 + 6564);
    if ( v11 )
    {
      v12 = *(_DWORD **)(dword_1ACF68 + 6564);
      v13 = *(_DWORD *)(dword_1ACF68 + 6556);
      do
      {
        v14 = v13 >> 1;
        v15 = &v12[2 * (v13 >> 1)];
        v17 = *v15;
        v16 = v15 + 2;
        if ( v17 < v10 )
        {
          v14 = v13 + ~(v13 >> 1);
          v12 = v16;
        }
        v13 = v14;
      }
      while ( v14 );
    }
    if ( v12 != (_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6564) + 8 * v11) && *v12 == v10 )
    {
      v18 = v12[1];
      v19 = v18 == 0;
      if ( v18 )
        v19 = *(_BYTE *)(v18 + 122) == 0;
      if ( !v19 )
      {
        v20 = *(_DWORD *)(v4 + 11472);
        *(_DWORD *)(v18 + 164) = 1;
        *(_BYTE *)(v18 + 129) = 1;
        *(_DWORD *)(v4 + 11472) = v20 + 1;
        sub_886C0(&s, 16, "##Tooltip_%02d", v20 + 1);
      }
    }
  }
  sub_8FD20(&s, 0, (float *)(a1 | 0x20C0347));
  return *(_DWORD *)&v23[15];
}


// ======================================================================
// ADDR: 0xa6270
// SYMBOL: sub_A6270
int __fastcall sub_A6270(const char *a1, void *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r4
  char *v7; // r4
  char *v8; // r1

  result = dword_1ACF68;
  v5 = *(_DWORD *)(dword_1ACF68 + 6572);
  v6 = *(unsigned __int8 *)(v5 + 127);
  *(_BYTE *)(v5 + 124) = 1;
  if ( !v6 )
  {
    v7 = (char *)(result + 12096);
    v8 = (char *)(result + 12096 + sub_88724((char *)(result + 12096), 3073, a1, a2));
    return sub_A5E84(v7, v8, 1);
  }
  return result;
}


// ======================================================================
