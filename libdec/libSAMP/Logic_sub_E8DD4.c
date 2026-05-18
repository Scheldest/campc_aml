// ADDR: 0xe9460
// SYMBOL: sub_E9460
int __fastcall sub_E9460(int a1, int a2, char a3)
{
  int v3; // r0
  char v5; // [sp+3h] [bp-Dh] BYREF
  int v6; // [sp+4h] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v5 = a3;
  v6 = a2;
  if ( !v3 )
    sub_DC92C();
  return (*(int (__fastcall **)(int, int *, char *))(*(_DWORD *)v3 + 24))(v3, &v6, &v5);
}


// ======================================================================
// ADDR: 0xe9484
// SYMBOL: sub_E9484
unsigned __int8 *__fastcall sub_E9484(int a1, int *a2, unsigned __int8 *a3, int a4)
{
  __int64 v7; // kr00_8
  int v8; // r0
  int v9; // r6
  __int64 v10; // kr08_8
  unsigned int v11; // r2
  unsigned __int8 *result; // r0
  unsigned int v13; // r2
  int v14; // r3
  unsigned int v15; // r0
  unsigned __int8 v16; // r1
  unsigned __int64 v17; // kr10_8
  int v18; // r6
  int v19; // r1
  __int64 v20; // r0
  unsigned int v21; // r2
  int v22; // r3
  unsigned int v23; // r0
  unsigned __int8 v24; // r1
  unsigned __int64 v25; // kr18_8
  int v26; // r6
  __int64 v27; // r0
  unsigned int v28; // r3
  _BYTE *v29; // r0
  unsigned int v30; // r2
  int v31; // r0
  unsigned __int8 v32[8]; // [sp+0h] [bp-58h] BYREF
  unsigned __int64 v33; // [sp+8h] [bp-50h]
  unsigned __int8 v34[8]; // [sp+10h] [bp-48h] BYREF
  unsigned __int64 v35; // [sp+18h] [bp-40h]
  unsigned __int8 v36[8]; // [sp+20h] [bp-38h] BYREF
  unsigned int v37; // [sp+28h] [bp-30h] BYREF
  unsigned int v38; // [sp+2Ch] [bp-2Ch]
  _DWORD v39[2]; // [sp+34h] [bp-24h] BYREF
  _BYTE *v40; // [sp+3Ch] [bp-1Ch]

  if ( !(*(_DWORD *)(a2[4] + 4 * ((unsigned int)(a2[5] - 1) >> 5)) >> ((a2[5] - 1) & 0x1F) << 31) )
  {
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  v36[0] = *a3;
  sub_E5EF8((int)&v37, v36[0]);
  if ( !a4 && !sub_E9460((int)(a2 + 12), (a2[2] - a2[1]) >> 2, 5) )
    goto LABEL_14;
  v7 = *(_QWORD *)(a2 + 1);
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    v8 = *(_DWORD *)(HIDWORD(v7) - 4);
    if ( v8 )
    {
      if ( *(_BYTE *)v8 == 2 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        v10 = *(_QWORD *)(v9 + 4);
        if ( (unsigned int)v10 >= HIDWORD(v10) )
        {
          HIDWORD(v27) = (((int)v10 - *(_DWORD *)v9) >> 4) + 1;
          if ( HIDWORD(v27) >= 0x10000000 )
            std::__vector_base_common<true>::__throw_length_error(v9);
          LODWORD(v27) = HIDWORD(v10) - *(_DWORD *)v9;
          LOWORD(v28) = -16;
          if ( HIDWORD(v27) <= (int)v27 >> 3 )
            HIDWORD(v27) = (int)v27 >> 3;
          HIWORD(v28) = 0x7FFF;
          if ( (unsigned int)v27 >= v28 )
            HIDWORD(v27) = 0xFFFFFFF;
          LODWORD(v27) = v39;
          sub_E5D88(v27, (int)v10 >> 4, v9 + 8);
          v29 = v40;
          *v40 = v36[0];
          v30 = v38;
          *((_DWORD *)v29 + 2) = v37;
          *((_DWORD *)v29 + 3) = v30;
          v36[0] = 0;
          v37 = 0;
          v38 = 0;
          v40 += 16;
          sub_E5DD0((int *)v9, v39);
          sub_E5E26((int)v39);
        }
        else
        {
          *(_BYTE *)v10 = v36[0];
          v11 = v38;
          *(_DWORD *)(v10 + 8) = v37;
          *(_DWORD *)(v10 + 12) = v11;
          v37 = 0;
          v38 = 0;
          *(_DWORD *)(v9 + 4) = v10 + 16;
          v36[0] = 0;
        }
        v31 = a2[2];
        *(_BYTE *)a1 = 1;
        *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v31 - 4) + 8) + 4) - 16;
        return sub_E3F7A(v36);
      }
      v20 = *(_QWORD *)(a2 + 7);
      LODWORD(v20) = *(_DWORD *)(v20 + 4 * (--HIDWORD(v20) >> 5));
      a2[8] = HIDWORD(v20);
      if ( (unsigned int)v20 >> (BYTE4(v20) & 0x1F) << 31 )
      {
        v21 = v38;
        v22 = a2[10];
        v23 = v37;
        v24 = v36[0];
        v37 = 0;
        v38 = 0;
        v33 = __PAIR64__(v21, v23);
        v36[0] = 0;
        LOBYTE(v23) = *(_BYTE *)v22;
        *(_BYTE *)v22 = v24;
        v32[0] = v23;
        v25 = *(_QWORD *)(v22 + 8);
        v26 = HIDWORD(v33);
        *(_DWORD *)(v22 + 8) = v33;
        *(_DWORD *)(v22 + 12) = v26;
        v33 = v25;
        sub_E3F7A(v32);
        v19 = a2[10];
        goto LABEL_13;
      }
    }
LABEL_14:
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)a1 = 0;
    return sub_E3F7A(v36);
  }
  v13 = v38;
  v14 = *a2;
  v15 = v37;
  v16 = v36[0];
  v37 = 0;
  v38 = 0;
  v35 = __PAIR64__(v13, v15);
  v36[0] = 0;
  LOBYTE(v15) = *(_BYTE *)v14;
  *(_BYTE *)v14 = v16;
  v34[0] = v15;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = HIDWORD(v35);
  *(_DWORD *)(v14 + 8) = v35;
  *(_DWORD *)(v14 + 12) = v18;
  v35 = v17;
  sub_E3F7A(v34);
  v19 = *a2;
LABEL_13:
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 4) = v19;
  return sub_E3F7A(v36);
}


// ======================================================================
// ADDR: 0xe9658
// SYMBOL: sub_E9658
void __fastcall sub_E9658(int *a1, int *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r2
  int v8; // r0
  char *v9; // r0
  char *v10; // r1
  int v11; // r2
  void *v12; // [sp+4h] [bp-24h] BYREF
  char *v13; // [sp+8h] [bp-20h]
  char *v14; // [sp+Ch] [bp-1Ch]
  char *v15; // [sp+10h] [bp-18h]
  _DWORD *v16; // [sp+14h] [bp-14h]

  v4 = *a1;
  v5 = a1[1] - v4;
  v6 = (v5 >> 2) + 1;
  if ( v6 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v7 = a1[2];
  v16 = a1 + 2;
  v8 = v7 - v4;
  if ( v6 <= v8 >> 1 )
    v6 = v8 >> 1;
  if ( (unsigned int)v8 >= 0x7FFFFFFC )
    v6 = 0x3FFFFFFF;
  if ( v6 )
  {
    if ( v6 >= 0x40000000 )
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v9 = (char *)operator new(4 * v6);
  }
  else
  {
    v9 = 0;
  }
  v10 = &v9[4 * (v5 >> 2)];
  v15 = &v9[4 * v6];
  v11 = *a2;
  v12 = v9;
  v13 = v10;
  *(_DWORD *)v10 = v11;
  v14 = v10 + 4;
  sub_E972C(a1, &v12);
  if ( v14 != v13 )
    v14 += 4 * ~((unsigned int)(v14 - v13 - 4) >> 2);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
