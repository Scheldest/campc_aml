// ADDR: 0x9bd30
// SYMBOL: sub_9BD30
int __fastcall sub_9BD30(int *a1)
{
  int v2; // r0
  __int64 *v3; // r0
  __int64 v4; // d16
  __int64 v5; // d17
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r5
  int v10; // r1
  void *v11; // r0
  const void *v12; // r1
  int v13; // r8
  _QWORD *v14; // r0
  _BYTE v16[24]; // [sp+0h] [bp-40h]
  __int64 v17; // [sp+18h] [bp-28h]
  int v18; // [sp+2Ch] [bp-14h]

  *(_DWORD *)v16 = 0;
  v2 = a1[16];
  if ( v2 )
    v3 = (__int64 *)(a1[18] + 16 * v2 - 16);
  else
    v3 = (__int64 *)(a1[10] + 20);
  v4 = *v3;
  v5 = v3[1];
  v6 = a1[19];
  *(_QWORD *)&v16[4] = v4;
  *(_QWORD *)&v16[12] = v5;
  if ( v6 )
    v7 = *(_DWORD *)(a1[21] + 4 * v6 - 4);
  else
    v7 = 0;
  v8 = *a1;
  HIDWORD(v17) = a1[3];
  *(_DWORD *)&v16[20] = v7;
  LODWORD(v17) = a1[12];
  if ( *a1 == a1[1] )
  {
    v9 = v8 + 1;
    if ( v8 )
      v10 = v8 + v8 / 2;
    else
      v10 = 8;
    if ( v10 > v9 )
      v9 = v10;
    if ( v8 < v9 )
    {
      v11 = (void *)sub_885E4(40 * v9);
      v12 = (const void *)a1[2];
      v13 = (int)v11;
      if ( v12 )
      {
        j_memcpy(v11, v12, 40 * *a1);
        sub_88614(a1[2]);
      }
      v8 = *a1;
      a1[1] = v9;
      a1[2] = v13;
    }
  }
  v14 = (_QWORD *)(a1[2] + 40 * v8);
  *v14 = *(_QWORD *)v16;
  v14[1] = *(_QWORD *)&v16[8];
  v14 += 2;
  *v14 = *(_QWORD *)&v16[16];
  v14[1] = v17;
  v14[2] = 0LL;
  ++*a1;
  return v18;
}


// ======================================================================
