// ADDR: 0x10f574
// SYMBOL: sub_10F574
int __fastcall sub_10F574(int *a1, __int64 *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r3
  __int64 v6; // d16
  __int64 v7; // kr00_8
  int result; // r0
  int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r3
  _QWORD *v12; // r1
  __int64 v13; // d16
  unsigned int v14; // r3
  unsigned int v15; // r4
  int v16; // r1
  int v17; // r3
  int v18; // r0
  int v19; // r5
  __int64 v20; // d16
  __int64 v21; // kr18_8
  int v22; // r2
  int v23; // r0
  int v24; // r3
  int v25; // [sp+4h] [bp-24h] BYREF
  int v26; // [sp+8h] [bp-20h]
  int v27; // [sp+Ch] [bp-1Ch]
  int v28; // [sp+10h] [bp-18h]

  v3 = a1[1];
  v4 = a1[2];
  if ( v3 >= v4 )
  {
    v9 = 214748364;
    v10 = -858993459 * ((int)(v3 - *a1) >> 2) + 1;
    if ( v10 > 0xCCCCCCC )
      std::__vector_base_common<true>::__throw_length_error(a1);
    v11 = -858993459 * ((int)(v4 - *a1) >> 2);
    if ( v10 <= 2 * v11 )
      v10 = 2 * v11;
    if ( v11 < 0x6666666 )
      v9 = v10;
    sub_10FC00(&v25, v9);
    v12 = (_QWORD *)v27;
    v13 = *a2;
    *(_DWORD *)(v27 + 8) = *((_DWORD *)a2 + 2);
    *v12 = v13;
    v15 = *((_DWORD *)a2 + 4);
    v14 = *((_DWORD *)a2 + 3);
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *((_DWORD *)a2 + 2) = 0;
    *(_QWORD *)((char *)v12 + 12) = __PAIR64__(v15, v14);
    v17 = a1[1];
    v16 = *a1;
    v18 = v26;
    v19 = v27 + 20;
    v27 += 20;
    if ( v17 == v16 )
    {
      v22 = v16;
    }
    else
    {
      do
      {
        v20 = *(_QWORD *)(v17 - 20);
        *(_DWORD *)(v18 - 12) = *(_DWORD *)(v17 - 12);
        *(_QWORD *)(v18 - 20) = v20;
        v21 = *(_QWORD *)(v17 - 8);
        *(_DWORD *)(v17 - 20) = 0;
        *(_DWORD *)(v17 - 16) = 0;
        *(_DWORD *)(v17 - 12) = 0;
        v17 -= 20;
        *(_QWORD *)(v18 - 8) = v21;
        v18 = v26 - 20;
        v26 -= 20;
      }
      while ( v17 != v16 );
      v19 = v27;
      v16 = a1[1];
      v22 = *a1;
    }
    *a1 = v18;
    v23 = a1[2];
    v24 = v28;
    v25 = v22;
    v26 = v22;
    v27 = v16;
    v28 = v23;
    a1[1] = v19;
    a1[2] = v24;
    return sub_10FC58(&v25);
  }
  else
  {
    v6 = *a2;
    *(_DWORD *)(v3 + 8) = *((_DWORD *)a2 + 2);
    *(_QWORD *)v3 = v6;
    v7 = *(__int64 *)((char *)a2 + 12);
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *((_DWORD *)a2 + 2) = 0;
    *(_QWORD *)(v3 + 12) = v7;
    result = v3 + 20;
    a1[1] = result;
  }
  return result;
}


// ======================================================================
