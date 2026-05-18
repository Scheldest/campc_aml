// ADDR: 0x137a64
// SYMBOL: sub_137A64
int __fastcall sub_137A64(_DWORD *a1, int a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r3
  __int64 v6; // d16
  __int64 v7; // d16
  int v8; // r1
  _QWORD *v9; // r0
  __int64 v10; // d16
  __int64 v11; // d17
  __int64 v12; // d18
  __int64 v13; // d19
  int result; // r0
  int v15; // r1
  unsigned int v16; // r0
  unsigned int v17; // r3
  _DWORD *v18; // r0
  __int64 v19; // d16
  __int64 v20; // d16
  int v21; // r1
  __int64 v22; // d16
  __int64 v23; // d17
  __int64 v24; // d18
  __int64 v25; // d19
  _BYTE v26[8]; // [sp+4h] [bp-24h] BYREF
  _DWORD *v27; // [sp+Ch] [bp-1Ch]

  v3 = a1[1];
  v4 = a1[2];
  if ( v3 >= v4 )
  {
    v15 = 71582788;
    v16 = -286331153 * ((int)(v3 - *a1) >> 2) + 1;
    if ( v16 > 0x4444444 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    v17 = -286331153 * ((int)(v4 - *a1) >> 2);
    if ( v16 <= 2 * v17 )
      v16 = 2 * v17;
    if ( v17 < 0x2222222 )
      v15 = v16;
    sub_138E50(v26, v15);
    v18 = v27;
    *v27 = *(_DWORD *)a2;
    v19 = *(_QWORD *)(a2 + 4);
    v18[3] = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(v18 + 1) = v19;
    v20 = *(_QWORD *)(a2 + 16);
    v21 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    v18[6] = v21;
    *((_QWORD *)v18 + 2) = v20;
    v18 += 7;
    v22 = *(_QWORD *)(a2 + 28);
    v23 = *(_QWORD *)(a2 + 36);
    v24 = *(_QWORD *)(a2 + 44);
    v25 = *(_QWORD *)(a2 + 52);
    *(_DWORD *)(a2 + 24) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 20) = 0;
    *(_QWORD *)v18 = v22;
    *((_QWORD *)v18 + 1) = v23;
    v18 += 4;
    *(_QWORD *)v18 = v24;
    *((_QWORD *)v18 + 1) = v25;
    v27 += 15;
    sub_138EA8(a1, v26);
    return sub_138F32(v26);
  }
  else
  {
    *(_DWORD *)v3 = *(_DWORD *)a2;
    v6 = *(_QWORD *)(a2 + 4);
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(v3 + 4) = v6;
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(v3 + 24) = v8;
    *(_QWORD *)(v3 + 16) = v7;
    v9 = (_QWORD *)(v3 + 28);
    v10 = *(_QWORD *)(a2 + 28);
    v11 = *(_QWORD *)(a2 + 36);
    v12 = *(_QWORD *)(a2 + 44);
    v13 = *(_QWORD *)(a2 + 52);
    *(_DWORD *)(a2 + 24) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 20) = 0;
    *v9 = v10;
    v9[1] = v11;
    v9 += 2;
    *v9 = v12;
    v9[1] = v13;
    result = (int)(v9 + 2);
    a1[1] = result;
  }
  return result;
}


// ======================================================================
