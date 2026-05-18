// ADDR: 0xfa4bc
// SYMBOL: sub_FA4BC
bool __fastcall sub_FA4BC(int *a1)
{
  int v1; // r2
  _BOOL4 result; // r0
  bool v4; // zf

  v1 = *a1;
  result = 1;
  v4 = v1 == 1;
  if ( v1 == 1 )
    v4 = a1[2] == 0;
  if ( v4 )
    return a1[3] != 0;
  return result;
}


// ======================================================================
// ADDR: 0xfd1e4
// SYMBOL: sub_FD1E4
int __fastcall sub_FD1E4(int result, int a2)
{
  int v3; // r1
  int *i; // r5
  int *v5; // r6
  int v6; // r1
  int v7; // r1

  v3 = *(unsigned __int8 *)(result + 20);
  __dmb(0xBu);
  if ( !(v3 << 31) )
  {
    v5 = *(int **)(result + 12);
    for ( i = *(int **)(result + 8); i != v5; i += 2 )
    {
      result = *i;
      v6 = *(unsigned __int8 *)(*i + 8);
      __dmb(0xBu);
      if ( v6 << 31 )
      {
        v7 = *(unsigned __int8 *)(result + 9);
        __dmb(0xBu);
        if ( !(v7 << 31) )
          result = (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 16))(result, a2);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1308d0
// SYMBOL: sub_1308D0
int __fastcall sub_1308D0(int a1)
{
  unsigned int v2; // r0

  if ( (*(_BYTE *)(dword_381BF4 + 133) || *(_BYTE *)(dword_381BF4 + 132)) && *(_BYTE *)(a1 + 144) == 1 )
  {
    v2 = sub_F0B30();
    if ( *(_DWORD *)(a1 + 88) <= v2 )
    {
      *(_DWORD *)(a1 + 88) = v2 + 500;
      sub_12F5E0(a1);
    }
  }
  return 1;
}


// ======================================================================
// ADDR: 0x14f534
// SYMBOL: sub_14F534
int __fastcall sub_14F534(int a1, int a2, int a3, int a4, int a5)
{
  unsigned __int16 *v6; // r6
  unsigned __int16 *v7; // r4
  float v9; // s16
  int v10; // r10
  int v11; // r8
  int v12; // r0
  int v13; // r0
  int v15; // [sp+0h] [bp-38h]
  unsigned __int16 v16; // [sp+4h] [bp-34h]

  v6 = *(unsigned __int16 **)(a1 + 9216);
  v15 = a1 + 9216;
  v7 = *(unsigned __int16 **)(a1 + 9220);
  if ( v6 == v7 )
    return 1;
  v9 = (float)a4;
  v16 = -1;
  do
  {
    v10 = *v6;
    v11 = *(_DWORD *)(a1 + 4 * v10);
    if ( v11 )
    {
      v12 = *(unsigned __int8 *)(v11 + 2476);
      *(_DWORD *)(v11 + 2524) = 0;
      *(_BYTE *)(v11 + 2520) = 0;
      if ( v12 )
      {
        if ( *(_BYTE *)(v11 + 2500) && sub_108D80(v9, (float)a5, (float *)(v11 + 2504)) )
        {
          if ( (unsigned int)(a2 - 2) >= 2 )
          {
            if ( a2 != 1 )
              goto LABEL_12;
            v13 = 0;
            v16 = v10;
            *(_BYTE *)(v11 + 2520) = 0;
          }
          else
          {
            *(_BYTE *)(v11 + 2520) = 1;
            v16 = -1;
            v13 = *(_DWORD *)(v15 + 12);
          }
          *(_DWORD *)(v11 + 2524) = v13;
        }
      }
    }
LABEL_12:
    ++v6;
  }
  while ( v6 != v7 );
  if ( v16 != 0xFFFF )
    sub_14F4C0(0xFFFF, v16);
  return 1;
}


// ======================================================================
