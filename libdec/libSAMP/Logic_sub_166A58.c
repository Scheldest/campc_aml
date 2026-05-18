// ADDR: 0x172794
// SYMBOL: sub_172794
int __fastcall sub_172794(int a1)
{
  void *v2; // r0
  const void *v3; // r1
  void *v4; // r5
  int v5; // r0
  void *v6; // r0
  const void *v7; // r1
  void *v8; // r5
  int v9; // r0
  void *v10; // r0
  const void *v11; // r1
  void *v12; // r5
  int v13; // r0
  int v14; // r0
  int v15; // r1
  void *v16; // r0
  const void *v17; // r1
  void *v18; // r5
  int v19; // r0
  void *v20; // r0
  const void *v21; // r1
  void *v22; // r5
  int v23; // r0
  void *v24; // r0
  const void *v25; // r1
  void *v26; // r5
  int result; // r0

  if ( *(int *)(a1 + 4) <= -1 )
  {
    v2 = (void *)sub_1654B0(0);
    v3 = *(const void **)(a1 + 8);
    v4 = v2;
    if ( v3 )
    {
      j_memcpy(v2, v3, 40 * *(_DWORD *)a1);
      sub_165578(*(_DWORD *)(a1 + 8));
    }
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = v4;
  }
  v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)a1 = 0;
  if ( v5 <= -1 )
  {
    v6 = (void *)sub_1654B0(0);
    v7 = *(const void **)(a1 + 20);
    v8 = v6;
    if ( v7 )
    {
      j_memcpy(v6, v7, 2 * *(_DWORD *)(a1 + 12));
      sub_165578(*(_DWORD *)(a1 + 20));
    }
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = v8;
  }
  v9 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 12) = 0;
  if ( v9 <= -1 )
  {
    v10 = (void *)sub_1654B0(0);
    v11 = *(const void **)(a1 + 32);
    v12 = v10;
    if ( v11 )
    {
      j_memcpy(v10, v11, 20 * *(_DWORD *)(a1 + 24));
      sub_165578(*(_DWORD *)(a1 + 32));
    }
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = v12;
  }
  v13 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 24) = 0;
  v14 = *(_DWORD *)(v13 + 36);
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v15 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 36) = v14;
  if ( v15 <= -1 )
  {
    v16 = (void *)sub_1654B0(0);
    v17 = *(const void **)(a1 + 72);
    v18 = v16;
    if ( v17 )
    {
      j_memcpy(v16, v17, 16 * *(_DWORD *)(a1 + 64));
      sub_165578(*(_DWORD *)(a1 + 72));
    }
    *(_DWORD *)(a1 + 68) = 0;
    *(_DWORD *)(a1 + 72) = v18;
  }
  v19 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 64) = 0;
  if ( v19 <= -1 )
  {
    v20 = (void *)sub_1654B0(0);
    v21 = *(const void **)(a1 + 84);
    v22 = v20;
    if ( v21 )
    {
      j_memcpy(v20, v21, 4 * *(_DWORD *)(a1 + 76));
      sub_165578(*(_DWORD *)(a1 + 84));
    }
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 84) = v22;
  }
  v23 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 76) = 0;
  if ( v23 <= -1 )
  {
    v24 = (void *)sub_1654B0(0);
    v25 = *(const void **)(a1 + 96);
    v26 = v24;
    if ( v25 )
    {
      j_memcpy(v24, v25, 8 * *(_DWORD *)(a1 + 88));
      sub_165578(*(_DWORD *)(a1 + 96));
    }
    *(_DWORD *)(a1 + 92) = 0;
    *(_DWORD *)(a1 + 96) = v26;
  }
  result = 1;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  return result;
}


// ======================================================================
