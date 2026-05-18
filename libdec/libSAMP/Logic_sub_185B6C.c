// ADDR: 0x185c30
// SYMBOL: sub_185C30
_QWORD *__fastcall sub_185C30(_DWORD *a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r6
  int v8; // r10
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r6
  int v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r5
  int v17; // r6
  int v18; // r1
  _QWORD *result; // r0
  unsigned int v20; // r4
  unsigned __int16 i; // r6
  _DWORD v22[24]; // [sp+0h] [bp-60h] BYREF

  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  v7 = a1[4];
  v22[0] = *a1;
  v22[1] = v4;
  v22[2] = v5;
  v22[3] = v6;
  v22[4] = v7;
  v8 = 0;
  v9 = a1[6];
  v10 = a1[7];
  v11 = a1[8];
  v12 = a1[9];
  v22[5] = a1[5];
  v22[6] = v9;
  v22[7] = v10;
  v22[8] = v11;
  v22[9] = v12;
  v13 = a1[11];
  v14 = a1[12];
  v15 = a1[13];
  v16 = a1[14];
  v17 = a1[15];
  v18 = 0;
  v22[10] = a1[10];
  v22[11] = v13;
  v22[12] = v14;
  v22[13] = v15;
  v22[14] = v16;
  v22[15] = v17;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  result = a1 + 12;
  *result = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  do
  {
    v20 = *(_DWORD *)(a2 + 4 * v8);
    for ( i = 32; v20; v20 >>= 1 )
    {
      result = (_QWORD *)(v20 << 31);
      if ( v20 << 31 )
      {
        if ( v18 )
          sub_185E5E((int)v22);
        result = (_QWORD *)sub_185EC4(a1, v22);
        v18 = 0;
      }
      --i;
      ++v18;
    }
    ++v8;
    v18 += i;
  }
  while ( v8 != 8 );
  return result;
}


// ======================================================================
