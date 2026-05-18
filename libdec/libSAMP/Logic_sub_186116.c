// ADDR: 0x1861aa
// SYMBOL: sub_1861AA
_QWORD *__fastcall sub_1861AA(__int64 *a1, int a2)
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
  while ( v6 != 4 );
  return result;
}


// ======================================================================
// ADDR: 0x18621a
// SYMBOL: sub_18621A
int __fastcall sub_18621A(int result, int a2)
{
  unsigned int v2; // r12
  int i; // r2
  unsigned int v4; // lr
  unsigned int v5; // r3

  v2 = 0;
  for ( i = 0; i != 4; ++i )
  {
    v4 = *(_DWORD *)(result + 4 * i);
    v5 = *(_DWORD *)(a2 + 4 * i);
    *(_DWORD *)(result + 4 * i) = v4 + v2 + v5;
    v2 = ((v5 >> 31) + (v4 >> 31) + (((v5 & 0x7FFFFFFF) + v2 + (v4 & 0x7FFFFFFF)) >> 31)) >> 1;
  }
  return result;
}


// ======================================================================
