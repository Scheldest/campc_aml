// ADDR: 0x18a206
// SYMBOL: sub_18A206
int __fastcall sub_18A206(int a1, int a2)
{
  int v3; // r5
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD *v8; // r0
  void *v9; // r9
  _DWORD *v10; // r6
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
  {
    v5 = 2 * v3;
    if ( !v3 )
      v5 = 16;
    *(_DWORD *)(a1 + 8) = v5;
    v6 = v5 - (v5 & 0x3FFFFFFE);
    v7 = 4 * v5;
    if ( v6 )
      v7 = -1;
    v8 = (_DWORD *)operator new[](v7);
    v9 = *(void **)a1;
    v10 = v8;
    j_memcpy(v8, *(const void **)a1, 4 * v3);
    if ( v9 )
    {
      operator delete[](v9);
      v3 = *(_DWORD *)(a1 + 4);
    }
    *(_DWORD *)a1 = v10;
  }
  else
  {
    v10 = *(_DWORD **)a1;
  }
  result = v3 + 1;
  v10[v3] = a2;
  *(_DWORD *)(a1 + 4) = v3 + 1;
  return result;
}


// ======================================================================
// ADDR: 0x18ac28
// SYMBOL: sub_18AC28
unsigned __int8 *__fastcall sub_18AC28(int a1, int a2, unsigned __int8 *a3)
{
  unsigned __int8 *result; // r0
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // lr
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r3
  unsigned __int8 *v8; // r4
  __int16 v9; // t1
  unsigned __int8 **v10; // r1
  unsigned __int8 *v11; // r1
  int v12; // t1

  result = (unsigned __int8 *)*((_DWORD *)a3 + 1);
  v4 = result - 1;
  if ( (int)(result - 1) > a2 )
  {
    v5 = &result[~a2];
    v6 = &a3[2 * a2 + 8];
    v7 = v5;
    v8 = v6;
    do
    {
      v9 = *((_WORD *)v8 + 1);
      v8 += 2;
      --v7;
      *(_WORD *)v6 = v9;
      v6 = v8;
    }
    while ( v7 );
    result = (unsigned __int8 *)*a3;
    if ( *a3 )
    {
      if ( (int)v4 > a2 )
      {
        v10 = (unsigned __int8 **)&a3[4 * a2 + 76];
        do
        {
          result = *v10;
          --v5;
          *(v10 - 1) = *v10;
          ++v10;
        }
        while ( v5 );
      }
    }
    else if ( (int)v4 > a2 )
    {
      v11 = &a3[4 * a2 + 212];
      result = v11;
      do
      {
        v12 = *((_DWORD *)result + 1);
        result += 4;
        --v5;
        *(_DWORD *)v11 = v12;
        v11 = result;
      }
      while ( v5 );
    }
  }
  *((_DWORD *)a3 + 1) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x18ac96
// SYMBOL: sub_18AC96
int __fastcall sub_18AC96(int a1, unsigned int a2, int a3, _BYTE *a4, int a5, __int16 *a6, _DWORD *a7)
{
  int v8; // r1
  int v11; // r2
  int v13; // r6
  int v14; // r3
  unsigned int v15; // r8
  int v16; // r11
  int v17; // r9
  _BYTE *v18; // r2
  unsigned __int8 **v19; // r9
  _BYTE *v20; // t1
  int v21; // r3
  int v22; // r1
  int v23; // r6
  unsigned int v24; // r0
  int v25; // r0
  __int16 *v26; // r12
  int v27; // r0
  int v28; // r1
  unsigned __int16 *v29; // r3
  int v30; // r0
  __int16 v31; // r4
  int v32; // r1
  int v34; // r3
  __int16 v35; // r0
  char v36; // r0

  v8 = *(_DWORD *)(a3 + 4);
  v11 = v8 - 1;
  v13 = 0;
  v14 = v8 / 2;
  while ( 1 )
  {
    v15 = *(unsigned __int16 *)(a3 + 2 * v14 + 8);
    if ( v15 == a2 )
      break;
    if ( v15 <= a2 )
      v13 = v14 + 1;
    else
      v11 = v14 - 1;
    v14 = v13 + (v11 - v13) / 2;
    if ( v11 < v13 )
      goto LABEL_9;
  }
  v13 = v14;
LABEL_9:
  v16 = v13;
  if ( v15 == a2 )
    v16 = v13 + 1;
  v17 = a3 + 4 * v16;
  v20 = *(_BYTE **)(v17 + 208);
  v19 = (unsigned __int8 **)(v17 + 208);
  v18 = v20;
  if ( *v20 )
  {
    v21 = 0;
    v22 = *((_DWORD *)v18 + 1) - 1;
    v23 = *((_DWORD *)v18 + 1) / 2;
    while ( 1 )
    {
      v24 = *(unsigned __int16 *)&v18[2 * v23 + 8];
      if ( v24 == a2 )
        break;
      if ( v24 <= a2 )
        v21 = v23 + 1;
      else
        v22 = v23 - 1;
      v23 = v21 + (v22 - v21) / 2;
      if ( v22 < v21 )
        return 0;
    }
    *a7 = *(_DWORD *)&v18[4 * v23 + 72];
    sub_18AC28(a1, v23, *v19);
    if ( !v23 )
    {
      if ( v16 < 1 )
      {
        if ( !v16 )
        {
          v35 = *(_WORD *)(*(_DWORD *)(a3 + 208) + 8);
          *((_DWORD *)a6 + 1) = 3;
          *a6 = v35;
        }
      }
      else
      {
        *(_WORD *)(a3 + 2 * v16 + 6) = *((_WORD *)*v19 + 4);
      }
    }
    if ( *((int *)*v19 + 1) > 15 )
    {
      v36 = 0;
      goto LABEL_43;
    }
    v26 = a6;
    v34 = a5;
    *a4 = 1;
    v30 = a1;
LABEL_41:
    v36 = sub_18AE22(v30, v16, a3, v34, v26);
LABEL_43:
    *a4 = v36;
    return 1;
  }
  v25 = v16 - 1;
  if ( v16 < v8 )
    v25 = v16;
  if ( !sub_18AC96(a1, a2, v18, a4, *(unsigned __int16 *)(a3 + 2 * v25 + 8), a6, a7) )
    return 0;
  v26 = a6;
  v27 = v16 - 1;
  v28 = *(_DWORD *)(a3 + 4);
  if ( v16 < v28 )
    v27 = v16;
  v29 = (unsigned __int16 *)(a3 + 2 * v27 + 8);
  if ( *((_DWORD *)a6 + 1) == 3 )
  {
    v30 = a1;
    if ( v15 == a2 )
    {
      v31 = *a6;
      *((_DWORD *)a6 + 1) = 0;
      *(_WORD *)(a3 + 2 * v13 + 8) = v31;
      if ( v16 < v28 )
        v32 = a3 + 2 * v16;
      else
        v32 = a3 + 2 * (v16 - 1);
      v29 = (unsigned __int16 *)(v32 + 8);
    }
  }
  else
  {
    v30 = a1;
  }
  if ( *a4 )
  {
    v34 = *v29;
    goto LABEL_41;
  }
  return 1;
}


// ======================================================================
