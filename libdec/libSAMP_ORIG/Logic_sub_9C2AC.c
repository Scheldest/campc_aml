// ADDR: 0x9c1b4
// SYMBOL: sub_9C1B4
int __fastcall sub_9C1B4(int a1, int a2, int a3)
{
  __int64 v6; // kr00_8
  int v7; // r5
  int v8; // r1
  int v9; // r1
  int v10; // r6
  void *v11; // r0
  const void *v12; // r1
  void *v13; // r10
  __int64 v14; // kr08_8
  int v15; // r1
  int v16; // r5
  int v17; // r1
  int v18; // r6
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r8
  int v22; // r0
  int result; // r0

  if ( (unsigned int)(*(_DWORD *)(a1 + 52) + a3) >= 0x10000 && (*(_BYTE *)(a1 + 36) & 4) != 0 )
  {
    *(_QWORD *)(a1 + 48) = *(unsigned int *)(a1 + 24);
    sub_9BD30((int *)a1);
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v6 + a3;
  v8 = *(_DWORD *)(a1 + 8) + 40 * *(_DWORD *)a1;
  *(_DWORD *)(v8 - 40) += a2;
  if ( SHIDWORD(v6) < (int)v6 + a3 )
  {
    if ( HIDWORD(v6) )
      v9 = HIDWORD(v6) + SHIDWORD(v6) / 2;
    else
      v9 = 8;
    v10 = v6 + a3;
    if ( v9 > v7 )
      v10 = v9;
    if ( SHIDWORD(v6) < v10 )
    {
      v11 = (void *)sub_885E4(20 * v10);
      v12 = *(const void **)(a1 + 32);
      v13 = v11;
      if ( v12 )
      {
        j_memcpy(v11, v12, 20 * *(_DWORD *)(a1 + 24));
        sub_88614(*(_DWORD *)(a1 + 32));
      }
      *(_DWORD *)(a1 + 28) = v10;
      *(_DWORD *)(a1 + 32) = v13;
    }
  }
  v14 = *(_QWORD *)(a1 + 12);
  v15 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v7;
  v16 = v14 + a2;
  *(_DWORD *)(a1 + 56) = v15 + 20 * v6;
  if ( SHIDWORD(v14) < (int)v14 + a2 )
  {
    if ( HIDWORD(v14) )
      v17 = HIDWORD(v14) + SHIDWORD(v14) / 2;
    else
      v17 = 8;
    v18 = v14 + a2;
    if ( v17 > v16 )
      v18 = v17;
    if ( SHIDWORD(v14) < v18 )
    {
      v19 = (void *)sub_885E4(2 * v18);
      v20 = *(const void **)(a1 + 20);
      v21 = v19;
      if ( v20 )
      {
        j_memcpy(v19, v20, 2 * *(_DWORD *)(a1 + 12));
        sub_88614(*(_DWORD *)(a1 + 20));
      }
      *(_DWORD *)(a1 + 16) = v18;
      *(_DWORD *)(a1 + 20) = v21;
    }
  }
  v22 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 12) = v16;
  result = v22 + 2 * v14;
  *(_DWORD *)(a1 + 60) = result;
  return result;
}


// ======================================================================
