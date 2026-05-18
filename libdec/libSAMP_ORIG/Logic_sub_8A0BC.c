// ADDR: 0x9d6f8
// SYMBOL: sub_9D6F8
_DWORD *__fastcall sub_9D6F8(_DWORD *result, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned int a5)
{
  _DWORD *v5; // r4
  int v7; // r0
  int v10; // r5
  int v11; // r1
  void *v12; // r0
  const void *v13; // r1
  void *v14; // r10
  __int64 v15; // kr00_8
  int v16; // r0
  int v17; // r5
  int v18; // r1
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r6
  __int64 v22; // kr08_8
  int v23; // r0
  int v24; // r6
  int v25; // r1
  void *v26; // r0
  const void *v27; // r1
  void *v28; // r5
  __int64 *v29; // r1
  int v30; // r2

  if ( a5 >= 0x1000000 )
  {
    v5 = result;
    v7 = result[22];
    if ( v7 == v5[23] )
    {
      v10 = v7 + 1;
      if ( v7 )
        v11 = v7 + v7 / 2;
      else
        v11 = 8;
      if ( v11 > v10 )
        v10 = v11;
      if ( v7 < v10 )
      {
        v12 = (void *)sub_885E4(8 * v10);
        v13 = (const void *)v5[24];
        v14 = v12;
        if ( v13 )
        {
          j_memcpy(v12, v13, 8 * v5[22]);
          sub_88614(v5[24]);
        }
        v7 = v5[22];
        v5[23] = v10;
        v5[24] = v14;
      }
    }
    *(_QWORD *)(v5[24] + 8 * v7) = *a2;
    v15 = *((_QWORD *)v5 + 11);
    v16 = v15 + 1;
    v5[22] = v15 + 1;
    if ( (_DWORD)v15 + 1 == HIDWORD(v15) )
    {
      v17 = v15 + 2;
      if ( (_DWORD)v15 == -1 )
        v18 = 8;
      else
        v18 = v16 + v16 / 2;
      if ( v18 > v17 )
        v17 = v18;
      if ( v16 < v17 )
      {
        v19 = (void *)sub_885E4(8 * v17);
        v20 = (const void *)v5[24];
        v21 = v19;
        if ( v20 )
        {
          j_memcpy(v19, v20, 8 * v5[22]);
          sub_88614(v5[24]);
        }
        v16 = v5[22];
        v5[23] = v17;
        v5[24] = v21;
      }
    }
    *(_QWORD *)(v5[24] + 8 * v16) = *a3;
    v22 = *((_QWORD *)v5 + 11);
    v23 = v22 + 1;
    v5[22] = v22 + 1;
    if ( (_DWORD)v22 + 1 == HIDWORD(v22) )
    {
      v24 = v22 + 2;
      if ( (_DWORD)v22 == -1 )
        v25 = 8;
      else
        v25 = v23 + v23 / 2;
      if ( v25 > v24 )
        v24 = v25;
      if ( v23 < v24 )
      {
        v26 = (void *)sub_885E4(8 * v24);
        v27 = (const void *)v5[24];
        v28 = v26;
        if ( v27 )
        {
          j_memcpy(v26, v27, 8 * v5[22]);
          sub_88614(v5[24]);
        }
        v23 = v5[22];
        v5[23] = v24;
        v5[24] = v28;
      }
    }
    *(_QWORD *)(v5[24] + 8 * v23) = *a4;
    v29 = (__int64 *)v5[24];
    v30 = v5[22] + 1;
    v5[22] = v30;
    sub_9CA40((int)v5, v29, v30, a5);
    result = 0;
    v5[22] = 0;
  }
  return result;
}


// ======================================================================
