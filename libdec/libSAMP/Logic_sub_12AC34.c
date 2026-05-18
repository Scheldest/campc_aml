// ADDR: 0x1742e2
// SYMBOL: sub_1742E2
int __fastcall sub_1742E2(int result, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned int a5, float a6)
{
  int v6; // r4
  int v8; // r0
  int v11; // r5
  int v12; // r1
  void *v13; // r0
  const void *v14; // r1
  void *v15; // r10
  __int64 v16; // kr00_8
  int v17; // r0
  int v18; // r5
  int v19; // r1
  void *v20; // r0
  const void *v21; // r1
  void *v22; // r6
  __int64 v23; // kr08_8
  int v24; // r0
  int v25; // r6
  int v26; // r1
  void *v27; // r0
  const void *v28; // r1
  void *v29; // r5
  float *v30; // r1
  int v31; // r2

  if ( a5 >= 0x1000000 )
  {
    v6 = result;
    v8 = *(_DWORD *)(result + 88);
    if ( v8 == *(_DWORD *)(v6 + 92) )
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
        v13 = (void *)sub_1654B0(8 * v11);
        v14 = *(const void **)(v6 + 96);
        v15 = v13;
        if ( v14 )
        {
          j_memcpy(v13, v14, 8 * *(_DWORD *)(v6 + 88));
          sub_165578(*(_DWORD *)(v6 + 96));
        }
        v8 = *(_DWORD *)(v6 + 88);
        *(_DWORD *)(v6 + 92) = v11;
        *(_DWORD *)(v6 + 96) = v15;
      }
    }
    *(_QWORD *)(*(_DWORD *)(v6 + 96) + 8 * v8) = *a2;
    v16 = *(_QWORD *)(v6 + 88);
    v17 = v16 + 1;
    *(_DWORD *)(v6 + 88) = v16 + 1;
    if ( (_DWORD)v16 + 1 == HIDWORD(v16) )
    {
      v18 = v16 + 2;
      if ( (_DWORD)v16 == -1 )
        v19 = 8;
      else
        v19 = v17 + v17 / 2;
      if ( v19 > v18 )
        v18 = v19;
      if ( v17 < v18 )
      {
        v20 = (void *)sub_1654B0(8 * v18);
        v21 = *(const void **)(v6 + 96);
        v22 = v20;
        if ( v21 )
        {
          j_memcpy(v20, v21, 8 * *(_DWORD *)(v6 + 88));
          sub_165578(*(_DWORD *)(v6 + 96));
        }
        v17 = *(_DWORD *)(v6 + 88);
        *(_DWORD *)(v6 + 92) = v18;
        *(_DWORD *)(v6 + 96) = v22;
      }
    }
    *(_QWORD *)(*(_DWORD *)(v6 + 96) + 8 * v17) = *a3;
    v23 = *(_QWORD *)(v6 + 88);
    v24 = v23 + 1;
    *(_DWORD *)(v6 + 88) = v23 + 1;
    if ( (_DWORD)v23 + 1 == HIDWORD(v23) )
    {
      v25 = v23 + 2;
      if ( (_DWORD)v23 == -1 )
        v26 = 8;
      else
        v26 = v24 + v24 / 2;
      if ( v26 > v25 )
        v25 = v26;
      if ( v24 < v25 )
      {
        v27 = (void *)sub_1654B0(8 * v25);
        v28 = *(const void **)(v6 + 96);
        v29 = v27;
        if ( v28 )
        {
          j_memcpy(v27, v28, 8 * *(_DWORD *)(v6 + 88));
          sub_165578(*(_DWORD *)(v6 + 96));
        }
        v24 = *(_DWORD *)(v6 + 88);
        *(_DWORD *)(v6 + 92) = v25;
        *(_DWORD *)(v6 + 96) = v29;
      }
    }
    *(_QWORD *)(*(_DWORD *)(v6 + 96) + 8 * v24) = *a4;
    v30 = *(float **)(v6 + 96);
    v31 = *(_DWORD *)(v6 + 88) + 1;
    *(_DWORD *)(v6 + 88) = v31;
    sub_172FDA((float *)v6, v30, v31, a5, 1, a6);
    result = 0;
    *(_DWORD *)(v6 + 88) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x17443a
// SYMBOL: sub_17443A
_DWORD *__fastcall sub_17443A(_DWORD *result, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned int a5)
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
        v12 = (void *)sub_1654B0(8 * v10);
        v13 = (const void *)v5[24];
        v14 = v12;
        if ( v13 )
        {
          j_memcpy(v12, v13, 8 * v5[22]);
          sub_165578(v5[24]);
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
        v19 = (void *)sub_1654B0(8 * v17);
        v20 = (const void *)v5[24];
        v21 = v19;
        if ( v20 )
        {
          j_memcpy(v19, v20, 8 * v5[22]);
          sub_165578(v5[24]);
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
        v26 = (void *)sub_1654B0(8 * v24);
        v27 = (const void *)v5[24];
        v28 = v26;
        if ( v27 )
        {
          j_memcpy(v26, v27, 8 * v5[22]);
          sub_165578(v5[24]);
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
    sub_173720((int)v5, v29, v30, a5);
    result = 0;
    v5[22] = 0;
  }
  return result;
}


// ======================================================================
