// ADDR: 0x1729ea
// SYMBOL: sub_1729EA
int __fastcall sub_1729EA(int *a1)
{
  int v1; // r1
  __int64 *v3; // r1
  __int64 v4; // d16
  __int64 v5; // d17
  int v6; // r1
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r6
  int v11; // r6
  int v12; // r1
  void *v13; // r0
  const void *v14; // r1
  int v15; // r5
  int result; // r0
  _DWORD v17[10]; // [sp+0h] [bp-38h] BYREF

  v1 = a1[16];
  memset(v17, 0, sizeof(v17));
  if ( v1 )
    v3 = (__int64 *)(a1[18] + 16 * v1 - 16);
  else
    v3 = (__int64 *)(a1[10] + 20);
  v4 = *v3;
  v5 = v3[1];
  v6 = a1[19];
  *(_QWORD *)&v17[1] = v4;
  *(_QWORD *)&v17[3] = v5;
  if ( v6 )
    v7 = *(_DWORD *)(a1[21] + 4 * v6 - 4);
  else
    v7 = 0;
  v9 = a1[1];
  v8 = *a1;
  v10 = a1[12];
  v17[7] = a1[3];
  v17[5] = v7;
  v17[6] = v10;
  if ( v8 == v9 )
  {
    v11 = v8 + 1;
    if ( v8 )
      v12 = v8 + v8 / 2;
    else
      v12 = 8;
    if ( v12 > v11 )
      v11 = v12;
    if ( v8 < v11 )
    {
      v13 = (void *)sub_1654B0(40 * v11);
      v14 = (const void *)a1[2];
      v15 = (int)v13;
      if ( v14 )
      {
        j_memcpy(v13, v14, 40 * *a1);
        sub_165578(a1[2]);
      }
      v8 = *a1;
      a1[1] = v11;
      a1[2] = v15;
    }
  }
  j_memcpy((void *)(a1[2] + 40 * v8), v17, 0x28u);
  result = *a1 + 1;
  *a1 = result;
  return result;
}


// ======================================================================
