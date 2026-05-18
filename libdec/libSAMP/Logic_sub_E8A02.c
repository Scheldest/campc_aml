// ADDR: 0xe8a66
// SYMBOL: sub_E8A66
int __fastcall sub_E8A66(_DWORD *a1, int a2)
{
  unsigned int v3; // r5
  int result; // r0

  if ( a2 <= -1 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v3 = ((unsigned int)(a2 - 1) >> 5) + 1;
  result = operator new(4 * v3);
  *a1 = result;
  a1[1] = 0;
  a1[2] = v3;
  return result;
}


// ======================================================================
// ADDR: 0xe8a8c
// SYMBOL: sub_E8A8C
int __fastcall sub_E8A8C(int a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // r3
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  unsigned int v6; // r4
  _DWORD *v7; // r0
  unsigned int v8; // r4
  int v9; // r2
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r0
  _BYTE v14[8]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v15; // [sp+8h] [bp-28h] BYREF
  int v16; // [sp+Ch] [bp-24h]
  int v17; // [sp+10h] [bp-20h] BYREF
  int v18; // [sp+14h] [bp-1Ch]
  int v19; // [sp+18h] [bp-18h] BYREF
  int v20; // [sp+1Ch] [bp-14h]

  v3 = *(_DWORD *)(a1 + 4);
  v4 = *a2;
  v5 = *a3;
  v6 = v3 - *((_DWORD *)a2 + 1) + *((_DWORD *)a3 + 1) + 8 * (*(_DWORD *)a3 - *(_DWORD *)a2);
  *(_DWORD *)(a1 + 4) = v6;
  if ( v3 && ((v3 - 1) ^ (v6 - 1)) <= 0x1F )
  {
    v7 = *(_DWORD **)a1;
  }
  else
  {
    v7 = *(_DWORD **)a1;
    if ( v6 > 0x20 )
      v7[(v6 - 1) >> 5] = 0;
    else
      *v7 = 0;
  }
  v8 = v3 >> 5;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a2 + 1);
  v11 = v3 & 0x1F;
  v12 = &v7[v8];
  if ( v10 == v11 )
  {
    v18 = v9;
    v19 = v4;
    v15 = v12;
    v16 = v10;
    v17 = v5;
    v20 = v10;
    return sub_E8B20(v14, &v19, &v17, &v15);
  }
  else
  {
    v20 = v10;
    v15 = v12;
    v16 = v11;
    v17 = v5;
    v18 = v9;
    v19 = v4;
    return sub_E8BF4(v14, &v19, &v17, &v15);
  }
}


// ======================================================================
