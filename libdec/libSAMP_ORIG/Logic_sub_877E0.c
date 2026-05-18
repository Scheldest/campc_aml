// ADDR: 0x87146
// SYMBOL: sub_87146
_DWORD *__fastcall sub_87146(_DWORD *result)
{
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x8732c
// SYMBOL: sub_8732C
int __fastcall sub_8732C(int *a1, int a2)
{
  int i; // r6
  int v5; // r0
  int v6; // r1
  char *v7; // r1
  int v8; // r6
  int v9; // r5
  int v10; // r4
  __int64 v11; // r2
  bool v12; // zf
  int *v13; // r6
  int v14; // r0
  __int64 v15; // r0
  _DWORD *v16; // r11
  _DWORD *v17; // r0
  int v18; // r2
  int v19; // r1
  int j; // r9
  int v21; // r3
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r6
  _DWORD *v26; // r0
  _DWORD *v27; // r4
  int v29; // r0
  int v30; // [sp+0h] [bp-640h] BYREF
  void *v31; // [sp+4h] [bp-63Ch]
  void *v32; // [sp+8h] [bp-638h]
  int v33[397]; // [sp+Ch] [bp-634h] BYREF

  v32 = 0;
  v30 = 0;
  v31 = 0;
  sub_8714C(a1);
  for ( i = 0; i != 256; ++i )
  {
    v5 = operator new(0x14u);
    v6 = *(_DWORD *)(a2 + 4 * i);
    v33[i + 133] = v5;
    *(_BYTE *)v5 = i;
    if ( !v6 )
      v6 = 1;
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    sub_87510(v5, v5, &v30);
  }
  while ( 1 )
  {
    if ( v31 )
    {
      v32 = v31;
      v7 = (char *)v31;
    }
    else
    {
      v7 = (char *)v32;
    }
    v8 = v30;
    v9 = *(_DWORD *)v7;
    if ( v30 )
    {
      if ( v30 == 1 )
      {
        operator delete(v31);
        v29 = sub_875E4(&v30);
        j___cxa_end_cleanup(v29);
      }
      v11 = *(_QWORD *)(v7 + 4);
      v12 = v7 == v31;
      *(_DWORD *)(v11 + 8) = HIDWORD(v11);
      v13 = (int *)*((_DWORD *)v7 + 2);
      v13[1] = v11;
      if ( v12 )
        v31 = v13;
      operator delete(v7);
      v32 = v13;
      v14 = v30;
      v10 = *v13;
      if ( --v30 )
      {
        if ( v14 == 2 )
        {
          if ( v31 )
            operator delete(v31);
          v8 = 0;
          v31 = 0;
          v32 = 0;
        }
        else
        {
          v15 = *(_QWORD *)(v13 + 1);
          *(_DWORD *)(v15 + 8) = HIDWORD(v15);
          v16 = (_DWORD *)v13[2];
          HIDWORD(v15) = v31;
          v16[1] = v15;
          if ( v13 == (int *)HIDWORD(v15) )
            v31 = v16;
          operator delete(v13);
          v32 = v16;
          v8 = v30 - 1;
        }
        v30 = v8;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v10 = *(_DWORD *)v7;
    }
    v17 = (_DWORD *)operator new(0x14u);
    v18 = *(_DWORD *)(v10 + 4);
    v19 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v9 + 16) = v17;
    v17[2] = v9;
    v17[3] = v10;
    *(_DWORD *)(v10 + 16) = v17;
    v17[1] = v19 + v18;
    if ( !v8 )
      break;
    sub_87510(v17, v17, &v30);
  }
  *a1 = (int)v17;
  v17[4] = 0;
  sub_86B90((int)v33);
  for ( j = 0; j != 256; ++j )
  {
    v21 = v33[j + 133];
    v22 = 0;
    v23 = *a1;
    do
    {
      v24 = *(_DWORD *)(v21 + 16);
      v25 = (unsigned __int16)v22++;
      *((_BYTE *)&v33[69] + v25) = *(_DWORD *)(v24 + 8) != v21;
      v21 = v24;
    }
    while ( v24 != v23 );
    if ( v22 << 16 )
    {
      do
      {
        if ( *((_BYTE *)&v33[69] + v25) )
          sub_86F46((int)v33);
        else
          sub_86ECA((int)v33);
        --v25;
      }
      while ( v25 != -1 );
    }
    LOWORD(a1[2 * j + 2]) = (unsigned __int8)sub_87112(v33, &a1[2 * j + 1]);
    sub_86C14(v33);
  }
  sub_86BF8((int)v33);
  if ( v30 )
  {
    if ( v30 == 1 )
    {
      if ( v31 )
        operator delete(v31);
    }
    else
    {
      v26 = v31;
      do
      {
        v27 = (_DWORD *)v26[2];
        operator delete(v26);
        v26 = v27;
      }
      while ( v27 != v31 );
    }
  }
  return v33[389];
}


// ======================================================================
// ADDR: 0x879d4
// SYMBOL: sub_879D4
int __fastcall sub_879D4(int a1, int *a2, _DWORD *a3)
{
  unsigned int v3; // r9
  int v5; // r0
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r6
  __int64 v10; // kr00_8
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  _QWORD *v14; // r0
  void *v15; // r8
  _QWORD *v16; // r5

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v5 = *a2;
    v6 = v3 - 1;
    v7 = (int)v3 / 2;
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(*(_DWORD *)a1 + 8 * v7);
      if ( v5 == v9 )
        return -1;
      if ( v5 >= v9 )
        v8 = v7 + 1;
      else
        v6 = v7 - 1;
      v7 = v8 + (v6 - v8) / 2;
    }
    while ( v6 >= v8 );
    if ( v8 >= v3 )
      goto LABEL_10;
    sub_87ABC(a1, *a3, a3[1], v8);
  }
  else
  {
LABEL_10:
    v10 = *(_QWORD *)a3;
    if ( v3 == *(_DWORD *)(a1 + 8) )
    {
      v11 = 2 * v3;
      if ( !v3 )
        v11 = 16;
      *(_DWORD *)(a1 + 8) = v11;
      v12 = v11 - (v11 & 0x1FFFFFFE);
      v13 = 8 * v11;
      if ( v12 )
        v13 = -1;
      v14 = (_QWORD *)operator new[](v13);
      v15 = *(void **)a1;
      v16 = v14;
      j_memcpy(v14, *(const void **)a1, 8 * v3);
      if ( v15 )
      {
        operator delete[](v15);
        v3 = *(_DWORD *)(a1 + 4);
      }
      *(_DWORD *)a1 = v16;
    }
    else
    {
      v16 = *(_QWORD **)a1;
    }
    v16[v3] = v10;
    v8 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v8 + 1;
  }
  return v8;
}


// ======================================================================
