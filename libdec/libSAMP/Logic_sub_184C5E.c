// ADDR: 0x184fe4
// SYMBOL: sub_184FE4
_QWORD *__fastcall sub_184FE4(__int64 *a1)
{
  __int64 v2; // d18
  __int64 v3; // d19
  int v4; // r10
  __int64 *v5; // r0
  int v6; // r1
  __int64 v7; // d20
  __int64 v8; // d21
  _QWORD *result; // r0
  unsigned int v10; // r6
  unsigned __int16 i; // r5
  _QWORD v12[2]; // [sp+0h] [bp-58h] BYREF
  _QWORD v13[2]; // [sp+10h] [bp-48h] BYREF
  _QWORD v14[7]; // [sp+20h] [bp-38h]

  v2 = *a1;
  v3 = a1[1];
  v4 = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = a1 + 2;
  v6 = 0;
  v7 = *v5;
  v8 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  v14[0] = v2;
  v14[1] = v3;
  v14[2] = v7;
  v14[3] = v8;
  v12[0] = v2;
  v12[1] = v3;
  result = v13;
  v13[0] = v7;
  v13[1] = v8;
  do
  {
    v10 = *((_DWORD *)v14 + v4);
    for ( i = 32; v10; v10 >>= 1 )
    {
      result = (_QWORD *)(v10 << 31);
      if ( v10 << 31 )
      {
        if ( v6 )
          sub_1850D2((int)v12);
        result = (_QWORD *)sub_185136(a1, v12);
        v6 = 0;
      }
      --i;
      ++v6;
    }
    ++v4;
    v6 += i;
  }
  while ( v4 != 8 );
  return result;
}


// ======================================================================
// ADDR: 0x185060
// SYMBOL: sub_185060
int __fastcall sub_185060(__int64 *a1, int a2, _QWORD *a3)
{
  __int64 *v3; // r0
  __int64 v4; // d16
  __int64 v5; // d17
  __int64 v7; // d18
  __int64 v8; // d19
  int v10; // r10
  int v11; // r1
  int result; // r0
  unsigned int v13; // r5
  unsigned __int16 i; // r6
  _QWORD v15[7]; // [sp+0h] [bp-38h] BYREF

  v4 = *a1;
  v5 = a1[1];
  v3 = a1 + 2;
  v7 = *v3;
  v8 = v3[1];
  v10 = 0;
  v15[0] = v4;
  v15[1] = v5;
  v11 = 0;
  v15[2] = v7;
  v15[3] = v8;
  *a3 = 0LL;
  a3[1] = 0LL;
  result = (int)(a3 + 2);
  a3[2] = 0LL;
  a3[3] = 0LL;
  do
  {
    v13 = *(_DWORD *)(a2 + 4 * v10);
    for ( i = 32; v13; v13 >>= 1 )
    {
      result = v13 << 31;
      if ( v13 << 31 )
      {
        if ( v11 )
          sub_1850D2((int)v15);
        result = sub_185136(a3, v15);
        v11 = 0;
      }
      --i;
      ++v11;
    }
    ++v10;
    v11 += i;
  }
  while ( v10 != 8 );
  return result;
}


// ======================================================================
