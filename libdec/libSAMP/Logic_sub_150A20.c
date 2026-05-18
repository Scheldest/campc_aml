// ADDR: 0x150a8c
// SYMBOL: sub_150A8C
int __fastcall sub_150A8C(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5
  _DWORD *i; // r6
  int v6; // r0
  int result; // r0
  _DWORD *v8; // r6
  int v9; // r0
  int v10; // [sp+0h] [bp-20h] BYREF
  int v11[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( a1[3] )
  {
    v4 = (_DWORD *)a1[2];
    for ( i = a1 + 1; v4 != i; v4 = (_DWORD *)v4[1] )
    {
      if ( *(_DWORD *)(v4[2] + 4) )
      {
        v6 = *(_DWORD *)(a2 + 16);
        v10 = *(_DWORD *)(v4[2] + 4);
        if ( !v6 )
          goto LABEL_12;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 24))(v6, &v10);
      }
    }
  }
  result = a1[7];
  if ( result )
  {
    v8 = (_DWORD *)a1[6];
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(a2 + 16);
        v11[0] = v8[3];
        if ( !v9 )
          break;
        result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 24))(v9, v11);
        v8 = (_DWORD *)*v8;
        if ( !v8 )
          return result;
      }
LABEL_12:
      sub_DC92C();
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x150af6
// SYMBOL: sub_150AF6
int __fastcall sub_150AF6(int a1, int *a2)
{
  __int64 v4; // kr00_8
  int result; // r0
  int v6; // r2
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r2
  int *v10; // r2
  int v11; // r1
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  int *v14; // r2
  _DWORD *v15; // r1
  int v16; // t1
  _DWORD *v17; // r3
  int v18; // r1
  int v19; // r5
  _DWORD *v20; // [sp+4h] [bp-1Ch] BYREF
  _DWORD *v21; // [sp+8h] [bp-18h]
  int *v22; // [sp+Ch] [bp-14h]
  int v23; // [sp+10h] [bp-10h]

  v4 = *(_QWORD *)(a1 + 4);
  if ( (unsigned int)v4 >= HIDWORD(v4) )
  {
    v6 = v4 - *(_DWORD *)a1;
    v7 = (v6 >> 2) + 1;
    if ( v7 >= 0x40000000 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    v8 = HIDWORD(v4) - *(_DWORD *)a1;
    v9 = v6 >> 2;
    if ( (unsigned int)v4 <= v8 >> 1 )
      v7 = v8 >> 1;
    if ( (unsigned int)v8 >= 0x7FFFFFFC )
      v7 = 0x3FFFFFFF;
    sub_1514D0(&v20, v7, v9, a1 + 8);
    v10 = v22;
    v11 = *a2;
    *a2 = 0;
    v13 = *(_DWORD **)(a1 + 4);
    v12 = *(_DWORD **)a1;
    *v10 = v11;
    v14 = v10 + 1;
    v15 = v21;
    v22 = v14;
    if ( v13 == v12 )
    {
      v17 = v12;
    }
    else
    {
      do
      {
        v16 = *--v13;
        *v13 = 0;
        *(v15 - 1) = v16;
        v15 = --v21;
      }
      while ( v13 != v12 );
      v14 = v22;
      v12 = *(_DWORD **)(a1 + 4);
      v17 = *(_DWORD **)a1;
    }
    *(_DWORD *)a1 = v15;
    v18 = *(_DWORD *)(a1 + 8);
    v19 = v23;
    v20 = v17;
    v21 = v17;
    v22 = v12;
    v23 = v18;
    *(_DWORD *)(a1 + 4) = v14;
    *(_DWORD *)(a1 + 8) = v19;
    return sub_151518(&v20);
  }
  else
  {
    result = *a2;
    *a2 = 0;
    *(_DWORD *)v4 = result;
    *(_DWORD *)(a1 + 4) = v4 + 4;
  }
  return result;
}


// ======================================================================
