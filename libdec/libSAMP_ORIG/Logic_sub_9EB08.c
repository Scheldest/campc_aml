// ADDR: 0x9e8a4
// SYMBOL: sub_9E8A4
int __fastcall sub_9E8A4(int a1, const void **src)
{
  int v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r6
  int v8; // r0
  void *v9; // r0
  const void *v10; // r1
  void *v11; // r8
  __int64 v12; // r0
  int v13; // r6
  int v14; // r1
  void *v15; // r0
  const void *v16; // r1
  void *v17; // r8
  int v18; // r5
  int v19; // r10
  int v20; // r6
  int *v21; // r8
  _BYTE *v22; // r6
  int v23; // t1
  _DWORD *v24; // r9
  void *v25; // r0
  size_t v26; // r2
  int v27; // r0
  int v28; // r0
  int result; // r0
  int v30; // [sp+0h] [bp-20h]

  if ( !*((_BYTE *)src + 60) )
  {
    v4 = sub_885E4(88);
    *(_DWORD *)(v4 + 62) = 0;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 28) = 0LL;
    *(_QWORD *)(v4 + 36) = 0LL;
    *(_QWORD *)(v4 + 44) = 0LL;
    *(_QWORD *)(v4 + 52) = 0LL;
    *(_DWORD *)(v4 + 58) = 0;
    *(_WORD *)(v4 + 66) = 63;
    v6 = *(_DWORD *)(a1 + 56);
    v5 = *(_DWORD *)(a1 + 52);
    *(_BYTE *)(v4 + 84) = 0;
    *(_DWORD *)(v4 + 76) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    *(_DWORD *)(v4 + 68) = 1065353216;
    *(_DWORD *)(v4 + 72) = 0;
    v30 = v4;
    if ( v5 == v6 )
    {
      v7 = v5 + 1;
      if ( v5 )
        v8 = v5 + v5 / 2;
      else
        v8 = 8;
      if ( v8 > v7 )
        v7 = v8;
      if ( v5 < v7 )
      {
        v9 = (void *)sub_885E4(4 * v7);
        v10 = *(const void **)(a1 + 60);
        v11 = v9;
        if ( v10 )
        {
          j_memcpy(v9, v10, 4 * *(_DWORD *)(a1 + 52));
          sub_88614(*(_DWORD *)(a1 + 60));
        }
        v5 = *(_DWORD *)(a1 + 52);
        *(_DWORD *)(a1 + 56) = v7;
        *(_DWORD *)(a1 + 60) = v11;
      }
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * v5) = v30;
    ++*(_DWORD *)(a1 + 52);
  }
  v12 = *(_QWORD *)(a1 + 76);
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    v13 = v12 + 1;
    if ( (_DWORD)v12 )
      v14 = v12 + (int)v12 / 2;
    else
      v14 = 8;
    if ( v14 > v13 )
      v13 = v14;
    if ( (int)v12 < v13 )
    {
      v15 = (void *)sub_885E4(116 * v13);
      v16 = *(const void **)(a1 + 84);
      v17 = v15;
      if ( v16 )
      {
        j_memcpy(v15, v16, 116 * *(_DWORD *)(a1 + 76));
        sub_88614(*(_DWORD *)(a1 + 84));
      }
      LODWORD(v12) = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(a1 + 80) = v13;
      *(_DWORD *)(a1 + 84) = v17;
    }
  }
  j_memcpy((void *)(*(_DWORD *)(a1 + 84) + 116 * v12), src, 0x74u);
  v18 = *(_DWORD *)(a1 + 76);
  v19 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 76) = v18 + 1;
  v20 = v19 + 116 * v18;
  v21 = (int *)(v20 + 112);
  if ( !*(_DWORD *)(v20 + 112) )
    *v21 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * *(_DWORD *)(a1 + 52) - 4);
  v23 = *(unsigned __int8 *)(v20 + 8);
  v22 = (_BYTE *)(v20 + 8);
  if ( !v23 )
  {
    v24 = (_DWORD *)(v19 + 116 * v18);
    v25 = (void *)sub_885E4(v24[1]);
    v26 = v24[1];
    *v22 = 1;
    *v24 = v25;
    j_memcpy(v25, *src, v26);
  }
  v27 = *(_DWORD *)(a1 + 20);
  if ( v27 )
    sub_88614(v27);
  v28 = *(_DWORD *)(a1 + 24);
  if ( v28 )
    sub_88614(v28);
  result = *v21;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}


// ======================================================================
