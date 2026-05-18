// ADDR: 0xc0b3c
// SYMBOL: sub_C0B3C
int __fastcall sub_C0B3C(int a1, __int16 *a2, __int16 *a3, int a4, int a5, int a6)
{
  int v8; // r6
  int v9; // r2
  int v10; // r1
  int v11; // r0
  signed int v12; // r2
  signed int v13; // r2
  bool v14; // cc
  char v15; // r3
  char v16; // r2
  int v17; // r8
  int v18; // r10
  int result; // r0
  int v20; // r9
  int v21; // r0
  int v22; // r10
  __int16 v23; // r8
  __int16 v24; // t1

  v8 = a6;
  v9 = a5 + a1;
  v10 = *(_DWORD *)(a4 + 4 * a5);
  v11 = *(_DWORD *)(a4 + 4 * (a5 + a1));
  if ( v10 > v11 )
    v9 = a5;
  v12 = *(_DWORD *)(a4 + 4 * v9);
  if ( v12 < 1 )
    v13 = 0;
  else
    v13 = 31 - __clz(v12);
  v15 = v13 - 13;
  v14 = v13 <= 13;
  v16 = 13 - v13;
  v17 = v10 << v16;
  v18 = v11 << v16;
  if ( !v14 )
  {
    v17 = v10 >> v15;
    v18 = v11 >> v15;
  }
  result = j_celt_sqrt((__int16)v18 * (__int16)v18 + (__int16)v17 * (__int16)v17 + 1);
  if ( a6 >= 1 )
  {
    v20 = ((result << 16) + 0x10000) >> 16;
    v21 = v18 << 16 >> 2;
    v22 = v17 << 16;
    v23 = sub_108848(v21, v20);
    result = (__int16)sub_108848(v22 >> 2, v20);
    do
    {
      v24 = *a3++;
      --v8;
      *a2 = (unsigned int)((__int16)result * *a2 + v23 * v24) >> 14;
      ++a2;
    }
    while ( v8 );
  }
  return result;
}


// ======================================================================
