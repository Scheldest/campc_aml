// ADDR: 0x99850
// SYMBOL: sub_99850
_DWORD *__fastcall sub_99850(_DWORD *a1, int a2)
{
  int v4; // r1
  _DWORD *result; // r0
  int v6; // r2
  int v7; // r2
  int v8; // r6
  int v9; // r0
  void *v10; // r0
  const void *v11; // r1
  void *v12; // r8
  int v13; // r1
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r1
  _DWORD v18[18]; // [sp+0h] [bp-68h] BYREF

  v4 = a1[154];
  if ( v4 < 1 )
  {
LABEL_5:
    v7 = a1[155];
    memset(&v18[5], 0, 24);
    *(_QWORD *)&v18[11] = 0x7F7FFFFF7F7FFFFFLL;
    *(_QWORD *)&v18[13] = 0xFF7FFFFFFF7FFFFFLL;
    memset(&v18[15], 0, 12);
    v18[3] = 0;
    memset(v18, 0, 10);
    v18[4] = 1;
    if ( v4 == v7 )
    {
      v8 = v4 + 1;
      if ( v4 )
        v9 = v4 + v4 / 2;
      else
        v9 = 8;
      if ( v9 > v8 )
        v8 = v9;
      if ( v4 < v8 )
      {
        if ( dword_1ACF68 )
          ++*(_DWORD *)(dword_1ACF68 + 880);
        v10 = (void *)off_117248(72 * v8, dword_1ACF70);
        v11 = (const void *)a1[156];
        v12 = v10;
        if ( v11 )
        {
          j_memcpy(v10, v11, 72 * a1[154]);
          v14 = a1[156];
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
        v4 = a1[154];
        a1[155] = v8;
        a1[156] = v12;
      }
    }
    j_memcpy((void *)(a1[156] + 72 * v4), v18, 0x48u);
    v16 = a1[154];
    v17 = a1[156];
    a1[154] = v16 + 1;
    v16 *= 9;
    *(_DWORD *)(v17 + 8 * v16) = a2;
    return (_DWORD *)(v17 + 8 * v16);
  }
  else
  {
    result = (_DWORD *)a1[156];
    v6 = a1[154];
    while ( *result != a2 )
    {
      result += 18;
      if ( !--v6 )
        goto LABEL_5;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x999d8
// SYMBOL: sub_999D8
int __fastcall sub_999D8(const char *a1, int a2)
{
  int v3; // r6
  unsigned int v4; // r0
  int v5; // r2
  const char *v6; // r1
  int v7; // r3
  int v8; // r0
  unsigned __int8 *v9; // r2
  unsigned int v10; // r1
  int v11; // r6
  bool v12; // zf
  int v13; // r2
  int result; // r0

  v3 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v3 + 124) = 1;
  v4 = 287454023;
  if ( !a1 )
    v4 = a2 + 287454023;
  sub_97C90(v4);
  v5 = *(_DWORD *)(v3 + 460);
  v6 = "columns";
  if ( a1 )
    v6 = a1;
  v7 = *(unsigned __int8 *)v6;
  v8 = ~*(_DWORD *)(v5 + 4 * *(_DWORD *)(v3 + 452) - 4);
  if ( *v6 )
  {
    v9 = (unsigned __int8 *)(v6 + 1);
    v10 = v8;
    do
    {
      v11 = v7;
      v7 = *v9;
      v12 = v11 == 35;
      if ( v11 == 35 )
        v12 = v7 == 35;
      if ( v12 )
      {
        v7 = 35;
        if ( v9[1] == 35 )
          v10 = v8;
      }
      ++v9;
      v10 = dword_52D88[v11 ^ (unsigned __int8)v10] ^ (v10 >> 8);
    }
    while ( v7 );
  }
  else
  {
    v10 = ~*(_DWORD *)(v5 + 4 * *(_DWORD *)(v3 + 452) - 4);
  }
  v13 = dword_1ACF68 + 6572;
  result = ~v10;
  if ( *(_DWORD *)(dword_1ACF68 + 6608) == ~v10 )
    *(_DWORD *)(dword_1ACF68 + 6612) = result;
  if ( *(_DWORD *)(v13 + 80) == result )
    *(_BYTE *)(v13 + 84) = 1;
  --*(_DWORD *)(*(_DWORD *)v13 + 452);
  return result;
}


// ======================================================================
// ADDR: 0x9e0a8
// SYMBOL: sub_9E0A8
int __fastcall sub_9E0A8(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r3
  int v4; // r10
  int v5; // r12
  int v6; // r0
  int v7; // r5
  void *v8; // r0
  void *v9; // r4
  const void *v10; // r1
  int v11; // r0
  int v12; // r11
  int v13; // r9
  int v14; // r0
  _QWORD *v15; // r0
  int v16; // r5
  int v17; // r6
  int v18; // r0
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r4
  _DWORD *v22; // r6
  int v23; // r0
  void *v24; // r0
  const void *v25; // r1
  void *v26; // r4
  int v27; // r0
  int v28; // r8
  int v29; // r10
  void *v30; // r0
  const void *v31; // r1
  void *v32; // r4
  int v34; // [sp+4h] [bp-74h]
  int v36; // [sp+Ch] [bp-6Ch]
  _BYTE v38[24]; // [sp+18h] [bp-60h]
  int v39; // [sp+44h] [bp-34h]

  v3 = a1;
  v4 = a3;
  v5 = a1[2];
  v36 = v5;
  if ( v5 < a3 )
  {
    v6 = a1[3];
    if ( v6 < a3 )
    {
      if ( v6 )
        v7 = v6 + v6 / 2;
      else
        v7 = 8;
      if ( v7 <= a3 )
        v7 = a3;
      if ( v6 < v7 )
      {
        v8 = (void *)sub_885E4(24 * v7);
        v3 = a1;
        v9 = v8;
        v10 = (const void *)a1[4];
        if ( v10 )
        {
          j_memcpy(v8, v10, 24 * a1[2]);
          sub_88614(a1[4]);
          v3 = a1;
        }
        v5 = v36;
        v3[3] = v7;
        v3[4] = v9;
      }
    }
    v3[2] = v4;
  }
  v11 = v3[4];
  v3[1] = v4;
  *(_DWORD *)(v11 + 20) = 0;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 16) = 0;
  if ( v4 >= 2 )
  {
    v12 = 1;
    v13 = 24;
    v34 = v4;
    do
    {
      v16 = v3[4];
      if ( v12 >= v5 )
      {
        v27 = v16 + v13;
        *(_DWORD *)(v27 + 20) = 0;
        *(_QWORD *)v27 = 0LL;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_DWORD *)(v16 + v13 + 16) = 0;
      }
      else
      {
        v17 = v16 + v13;
        v18 = v3[4];
        if ( *(int *)(v16 + v13 + 4) <= -1 )
        {
          v19 = (void *)sub_885E4(0);
          v20 = *(const void **)(v17 + 8);
          v21 = v19;
          if ( v20 )
          {
            j_memcpy(v19, v20, 40 * *(_DWORD *)(v16 + v13));
            sub_88614(*(_DWORD *)(v17 + 8));
          }
          v3 = a1;
          *(_DWORD *)(v17 + 4) = 0;
          v5 = v36;
          v18 = a1[4];
          *(_DWORD *)(v17 + 8) = v21;
        }
        v22 = (_DWORD *)(v18 + v13);
        v23 = *(_DWORD *)(v18 + v13 + 16);
        *(_DWORD *)(v16 + v13) = 0;
        if ( v23 <= -1 )
        {
          v24 = (void *)sub_885E4(0);
          v25 = (const void *)v22[5];
          v26 = v24;
          if ( v25 )
          {
            j_memcpy(v24, v25, 2 * v22[3]);
            sub_88614(v22[5]);
          }
          v5 = v36;
          v3 = a1;
          v22[4] = 0;
          v22[5] = v26;
        }
        v22[3] = 0;
      }
      v28 = v3[4];
      if ( !*(_DWORD *)(v28 + v13) )
      {
        v29 = v28 + v13;
        *(_DWORD *)v38 = 0;
        v14 = 0;
        *(_DWORD *)&v38[20] = *(_DWORD *)(a2[21] + 4 * a2[19] - 4);
        *(_QWORD *)&v38[4] = *(_QWORD *)(a2[18] + 16 * a2[16] - 16);
        *(_QWORD *)&v38[12] = *(_QWORD *)(a2[18] + 16 * a2[16] - 8);
        if ( !*(_DWORD *)(v28 + v13 + 4) )
        {
          v30 = (void *)sub_885E4(320);
          v31 = *(const void **)(v29 + 8);
          v32 = v30;
          if ( v31 )
          {
            j_memcpy(v30, v31, 40 * *(_DWORD *)(v28 + v13));
            sub_88614(*(_DWORD *)(v29 + 8));
          }
          v14 = *(_DWORD *)(v28 + v13);
          v5 = v36;
          v3 = a1;
          *(_DWORD *)(v29 + 4) = 8;
          *(_DWORD *)(v29 + 8) = v32;
        }
        v15 = (_QWORD *)(*(_DWORD *)(v29 + 8) + 40 * v14);
        *v15 = *(_QWORD *)v38;
        v15[1] = *(_QWORD *)&v38[8];
        v15 += 2;
        *v15 = *(_QWORD *)&v38[16];
        v15[1] = 0LL;
        v15[2] = 0LL;
        v4 = v34;
        ++*(_DWORD *)(v28 + v13);
      }
      ++v12;
      v13 += 24;
    }
    while ( v4 != v12 );
  }
  return v39;
}


// ======================================================================
