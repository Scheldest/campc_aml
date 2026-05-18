// ADDR: 0x945c4
// SYMBOL: sub_945C4
int __fastcall sub_945C4(__int64 *a1)
{
  int result; // r0
  __int64 v3; // kr00_8
  int v4; // r2
  int v5; // r5
  int v6; // r9
  int v7; // r1
  const void *v8; // r1
  int v9; // r8
  int v10; // r1
  int v11; // r0
  bool v12; // zf
  void *v13; // r0
  const void *v14; // r1
  void *v15; // r5
  int v16; // r1
  int v17; // r0
  bool v18; // zf

  v3 = *a1;
  result = *((_DWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 3);
  v5 = v4 + v3;
  v6 = v4 + v3;
  if ( result < v4 + (int)v3 )
  {
    if ( result )
      v7 = result + result / 2;
    else
      v7 = 8;
    if ( v7 > v5 )
      v5 = v7;
    if ( result < v5 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      result = off_117248(4 * v5, dword_1ACF70);
      v8 = (const void *)*((_DWORD *)a1 + 2);
      v9 = result;
      if ( v8 )
      {
        j_memcpy((void *)result, v8, 4 * *(_DWORD *)a1);
        v11 = *((_DWORD *)a1 + 2);
        v12 = v11 == 0;
        if ( v11 )
        {
          v10 = dword_1ACF68;
          v12 = dword_1ACF68 == 0;
        }
        if ( !v12 )
          --*(_DWORD *)(v10 + 880);
        result = off_11724C(v11, dword_1ACF70);
      }
      v4 = *((_DWORD *)a1 + 3);
      *((_DWORD *)a1 + 1) = v5;
      *((_DWORD *)a1 + 2) = v9;
    }
  }
  *(_DWORD *)a1 = v6;
  if ( v4 )
  {
    j_memcpy((void *)(*((_DWORD *)a1 + 2) + 4 * v3), *((const void **)a1 + 5), 4 * v4);
    if ( *((int *)a1 + 4) <= -1 )
    {
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v13 = (void *)off_117248(0, dword_1ACF70);
      v14 = (const void *)*((_DWORD *)a1 + 5);
      v15 = v13;
      if ( v14 )
      {
        j_memcpy(v13, v14, 4 * *((_DWORD *)a1 + 3));
        v17 = *((_DWORD *)a1 + 5);
        v18 = v17 == 0;
        if ( v17 )
        {
          v16 = dword_1ACF68;
          v18 = dword_1ACF68 == 0;
        }
        if ( !v18 )
          --*(_DWORD *)(v16 + 880);
        off_11724C(v17, dword_1ACF70);
      }
      *((_DWORD *)a1 + 4) = 0;
      *((_DWORD *)a1 + 5) = v15;
    }
    result = 0;
    *((_DWORD *)a1 + 3) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x95238
// SYMBOL: sub_95238
int __fastcall sub_95238(_DWORD *a1)
{
  void *v2; // r0
  const void *v3; // r1
  void *v4; // r5
  int v5; // r1
  int v6; // r0
  bool v7; // zf
  int result; // r0
  const void *v9; // r1
  int v10; // r5
  int v11; // r1
  int v12; // r0
  bool v13; // zf

  if ( (int)a1[1] <= -1 )
  {
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    v2 = (void *)off_117248(0, dword_1ACF70);
    v3 = (const void *)a1[2];
    v4 = v2;
    if ( v3 )
    {
      j_memcpy(v2, v3, 4 * *a1);
      v6 = a1[2];
      v7 = v6 == 0;
      if ( v6 )
      {
        v5 = dword_1ACF68;
        v7 = dword_1ACF68 == 0;
      }
      if ( !v7 )
        --*(_DWORD *)(v5 + 880);
      off_11724C(v6, dword_1ACF70);
    }
    a1[1] = 0;
    a1[2] = v4;
  }
  result = a1[4];
  *a1 = 0;
  if ( result <= -1 )
  {
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    result = off_117248(0, dword_1ACF70);
    v9 = (const void *)a1[5];
    v10 = result;
    if ( v9 )
    {
      j_memcpy((void *)result, v9, 4 * a1[3]);
      v12 = a1[5];
      v13 = v12 == 0;
      if ( v12 )
      {
        v11 = dword_1ACF68;
        v13 = dword_1ACF68 == 0;
      }
      if ( !v13 )
        --*(_DWORD *)(v11 + 880);
      result = off_11724C(v12, dword_1ACF70);
    }
    a1[4] = 0;
    a1[5] = v10;
  }
  a1[3] = 0;
  return result;
}


// ======================================================================
// ADDR: 0x95344
// SYMBOL: sub_95344
int __fastcall sub_95344(__int64 *a1, int *a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r6
  bool v6; // zf
  __int64 v7; // r0
  int v8; // r6
  int v9; // r1
  void *v10; // r0
  const void *v11; // r1
  void *v12; // r8
  int v13; // r1
  int v14; // r0
  bool v15; // zf

  result = *a2;
  if ( *a2 )
  {
    --result;
    v4 = a2[2];
    v5 = *(_DWORD *)(v4 + 40 * result);
    v6 = v5 == 0;
    if ( !v5 )
      v6 = *(_DWORD *)(v4 + 40 * result + 32) == 0;
    if ( !v6 || (*a2 = result) != 0 )
    {
      v7 = *a1;
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        v8 = v7 + 1;
        if ( (_DWORD)v7 )
          v9 = v7 + (int)v7 / 2;
        else
          v9 = 8;
        if ( v9 > v8 )
          v8 = v9;
        if ( (int)v7 < v8 )
        {
          if ( dword_1ACF68 )
            ++*(_DWORD *)(dword_1ACF68 + 880);
          v10 = (void *)off_117248(4 * v8, dword_1ACF70);
          v11 = (const void *)*((_DWORD *)a1 + 2);
          v12 = v10;
          if ( v11 )
          {
            j_memcpy(v10, v11, 4 * *(_DWORD *)a1);
            v14 = *((_DWORD *)a1 + 2);
            v15 = v14 == 0;
            if ( v14 )
            {
              v13 = dword_1ACF68;
              v15 = dword_1ACF68 == 0;
            }
            if ( !v15 )
              --*(_DWORD *)(v13 + 880);
            off_11724C(v14, dword_1ACF70);
          }
          LODWORD(v7) = *(_DWORD *)a1;
          *((_DWORD *)a1 + 1) = v8;
          *((_DWORD *)a1 + 2) = v12;
        }
      }
      *(_DWORD *)(*((_DWORD *)a1 + 2) + 4 * v7) = a2;
      result = *(_DWORD *)a1 + 1;
      *(_DWORD *)a1 = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x9ad48
// SYMBOL: sub_9AD48
int __fastcall sub_9AD48(__int64 *a1, _DWORD *a2)
{
  int *v4; // r1
  int result; // r0
  int i; // r6
  int v7; // r1

  v4 = (int *)a2[159];
  ++*(_DWORD *)(dword_1ACF68 + 872);
  sub_95344(a1, v4);
  result = a2[83];
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      v7 = *(_DWORD *)(a2[85] + 4 * i);
      if ( *(_BYTE *)(v7 + 122) )
      {
        if ( !*(_BYTE *)(v7 + 129) )
        {
          sub_9AD48(a1);
          result = a2[83];
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa3b58
// SYMBOL: sub_A3B58
int __fastcall sub_A3B58(int *a1, float a2, float a3, float a4, unsigned int a5)
{
  int v6; // r0
  int v10; // r1
  unsigned int v11; // r2
  float v12; // s3
  unsigned int v13; // s6
  float *v14; // r1
  float v15; // s1
  float v16; // s4
  float v17; // s6
  float v18; // s24
  float v19; // s22
  float v20; // s18
  float v21; // s20
  int v22; // r5
  float v23; // s24
  float v24; // s22
  float v25; // s26
  int v26; // r1
  __int64 v28; // [sp+Ch] [bp-8Ch] BYREF
  __int64 v29; // [sp+14h] [bp-84h] BYREF
  float v30; // [sp+1Ch] [bp-7Ch] BYREF
  float v31; // [sp+20h] [bp-78h]
  float v32[2]; // [sp+24h] [bp-74h] BYREF
  __int64 v33; // [sp+2Ch] [bp-6Ch] BYREF
  float v34[2]; // [sp+34h] [bp-64h] BYREF
  __int64 v35; // [sp+3Ch] [bp-5Ch] BYREF
  int v36; // [sp+44h] [bp-54h]

  if ( a5 < 8 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1[10] + 8) + 56);
    if ( (*(_BYTE *)(v6 + 4) & 2) == 0 )
    {
      v10 = *(_DWORD *)(v6 + 72) + 28 * *(_DWORD *)(v6 + 88);
      v11 = *(unsigned __int16 *)(v10 + 8);
      v12 = *(float *)(v6 + 40);
      v13 = *(unsigned __int16 *)(v10 + 10);
      v14 = (float *)((char *)&unk_537C0 + 24 * a5);
      v15 = *(float *)(v6 + 36);
      v16 = *v14 + (float)v11;
      v17 = v14[1] + (float)v13;
      v18 = v14[3];
      v19 = v14[2];
      v21 = a2 - v14[4];
      v22 = *(_DWORD *)(v6 + 8);
      v31 = a3 - v14[5];
      v20 = v31;
      v30 = v21;
      v34[1] = v17 * v12;
      v32[1] = v17 * v12;
      v32[0] = v16 * v15;
      v34[0] = (float)(v16 + 109.0) * v15;
      *((float *)&v35 + 1) = (float)(v17 + v18) * v12;
      *((float *)&v33 + 1) = *((float *)&v35 + 1);
      *(float *)&v33 = (float)(v16 + v19) * v15;
      *(float *)&v35 = (float)((float)(v16 + 109.0) + v19) * v15;
      sub_9C138(a1, v22);
      v23 = v18 * a4;
      v24 = v19 * a4;
      v25 = v31 + (float)(a4 * 0.0);
      *((float *)&v29 + 1) = v25;
      *(float *)&v29 = v21 + a4;
      *((float *)&v28 + 1) = v23 + v25;
      *(float *)&v28 = v24 + (float)(v21 + a4);
      sub_9DF08((int)a1, v22, (int *)&v29, &v28, v34, &v35, 0x30000000u);
      *((float *)&v29 + 1) = v25;
      *((float *)&v28 + 1) = v23 + v25;
      *(float *)&v29 = (float)(a4 + a4) + v21;
      *(float *)&v28 = v24 + *(float *)&v29;
      sub_9DF08((int)a1, v22, (int *)&v29, &v28, v34, &v35, 0x30000000u);
      *((float *)&v29 + 1) = v23 + v20;
      *(float *)&v29 = v24 + v21;
      sub_9DF08((int)a1, v22, (int *)&v30, &v29, v34, &v35, 0xFF000000);
      *((float *)&v29 + 1) = v23 + v20;
      *(float *)&v29 = v24 + v21;
      sub_9DF08((int)a1, v22, (int *)&v30, &v29, v32, &v33, 0xFFFFFFFF);
      --a1[19];
      sub_9BF30(a1, v26);
    }
  }
  return v36;
}


// ======================================================================
