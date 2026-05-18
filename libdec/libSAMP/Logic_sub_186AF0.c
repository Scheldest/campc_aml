// ADDR: 0x186d6a
// SYMBOL: sub_186D6A
_QWORD *__fastcall sub_186D6A(__int64 *a1, int a2)
{
  __int64 v3; // d18
  __int64 v4; // d19
  int v6; // r10
  __int64 *v7; // r0
  unsigned int v8; // r1
  __int64 v9; // d20
  __int64 v10; // d21
  _QWORD *result; // r0
  unsigned int v12; // r4
  unsigned __int16 i; // r6
  _QWORD v14[2]; // [sp+0h] [bp-38h] BYREF
  _QWORD v15[5]; // [sp+10h] [bp-28h] BYREF

  v3 = *a1;
  v4 = a1[1];
  v6 = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  v7 = a1 + 2;
  v8 = 0;
  v9 = *v7;
  v10 = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  v14[0] = v3;
  v14[1] = v4;
  result = v15;
  v15[0] = v9;
  v15[1] = v10;
  do
  {
    v12 = *(_DWORD *)(a2 + 4 * v6);
    for ( i = 32; v12; v12 >>= 1 )
    {
      result = (_QWORD *)(v12 << 31);
      if ( v12 << 31 )
      {
        if ( v8 )
          sub_1850D2((int)v14, v8);
        result = (_QWORD *)sub_185136((int)a1, (int)v14);
        v8 = 0;
      }
      --i;
      ++v8;
    }
    ++v6;
    v8 += i;
  }
  while ( v6 != 8 );
  return result;
}


// ======================================================================
