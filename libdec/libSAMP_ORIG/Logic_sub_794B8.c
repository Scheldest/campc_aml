// ADDR: 0x79824
// SYMBOL: sub_79824
int __fastcall sub_79824(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        arg6_79824 a6,
        int a7,
        arg6_79824 a8,
        int a9,
        arg6_79824 a10,
        int a11)
{
  int v15; // r0
  arg6_79824 v17; // [sp+1Ch] [bp-134h] BYREF
  int v18; // [sp+24h] [bp-12Ch]
  _BYTE v19[276]; // [sp+28h] [bp-128h] BYREF
  int v20; // [sp+13Ch] [bp-14h]

  v15 = sub_86B90(v19);
  v17.arr[0] = a2;
  sub_86D52(v15, &v17, 32, 1);
  v17.arr[0] = a3;
  sub_86D52(v19, &v17, 32, 1);
  v17.arr[0] = a4;
  sub_86D52(v19, &v17, 32, 1);
  v17.arr[0] = a5;
  sub_86D52(v19, &v17, 32, 1);
  v17 = a6;
  v18 = a7;
  sub_86D52(v19, &v17, 96, 1);
  v17 = a8;
  v18 = a9;
  sub_86D52(v19, &v17, 96, 1);
  v17 = a10;
  v18 = a11;
  sub_86D52(v19, &v17, 96, 1);
  v17.arr[0] = 0;
  sub_86D52(v19, &v17, 32, 1);
  v17.arr[0] = 0;
  sub_86D52(v19, &v17, 32, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
    *(_DWORD *)(a1 + 528),
    &unk_116E3C,
    v19,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  sub_86BF8(v19);
  return v20;
}


// ======================================================================
// ADDR: 0x86f46
// SYMBOL: sub_86F46
int __fastcall sub_86F46(int a1)
{
  int v1; // r1
  int v3; // r0
  int v4; // r6
  const void *v5; // r5
  int v6; // r8
  void *v7; // r0
  int v8; // r0
  int v9; // r1
  int result; // r0

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1 + 1;
  if ( v1 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( (v4 - 1) >> 3 < (int)((unsigned int)v1 >> 3) )
    {
      v5 = *(const void **)(a1 + 12);
      v6 = 2 * v3;
      if ( v5 == (const void *)(a1 + 17) )
      {
        if ( (unsigned int)v3 > 0x400 )
        {
          v7 = malloc((2 * v3 + 7) >> 3);
          *(_DWORD *)(a1 + 12) = v7;
          j_memcpy(v7, v5, (v4 + 7) >> 3);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 12) = realloc(*(void **)(a1 + 12), (2 * v3 + 7) >> 3);
      }
      v3 = v6;
    }
  }
  if ( v3 > *(_DWORD *)(a1 + 4) )
    *(_DWORD *)(a1 + 4) = v3;
  v8 = *(_DWORD *)a1;
  v9 = *(_DWORD *)a1 & 7;
  if ( v9 )
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + (v8 >> 3)) |= 0x80u >> v9;
  else
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + (v8 >> 3)) = 0x80;
  result = *(_DWORD *)a1 + 1;
  *(_DWORD *)a1 = result;
  return result;
}


// ======================================================================
