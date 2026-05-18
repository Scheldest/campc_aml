// ADDR: 0xeb41c
// SYMBOL: sub_EB41C
int __fastcall sub_EB41C(unsigned __int8 **a1, unsigned __int8 *a2)
{
  __int64 v3; // kr00_8
  int v4; // r0
  int v6; // r1
  unsigned __int8 *v7; // r0
  __int64 v8; // kr08_8
  unsigned __int8 v9; // r2
  int v10; // r6
  int v11; // r1
  unsigned __int8 *v12; // r0
  __int64 v13; // kr10_8
  unsigned __int8 v14; // r2
  int v15; // r5
  unsigned __int8 v16[8]; // [sp+0h] [bp-30h] BYREF
  __int64 v17; // [sp+8h] [bp-28h] BYREF
  unsigned __int8 v18[8]; // [sp+10h] [bp-20h] BYREF
  __int64 v19; // [sp+18h] [bp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 1);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    v6 = *a2;
    v18[0] = v6;
    sub_E5EF8((int)&v19, v6);
    v7 = *a1;
    v8 = *((_QWORD *)*a1 + 1);
    v9 = **a1;
    **a1 = v18[0];
    v10 = HIDWORD(v19);
    *((_DWORD *)v7 + 2) = v19;
    *((_DWORD *)v7 + 3) = v10;
    v18[0] = v9;
    v19 = v8;
    sub_E3F7A(v18);
    return (int)*a1;
  }
  else
  {
    v4 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( *(_BYTE *)v4 == 2 )
    {
      sub_EB59C(*(_DWORD *)(v4 + 8));
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1[2] - 1) + 8) + 4) - 16;
    }
    else
    {
      v11 = *a2;
      v16[0] = v11;
      sub_E5EF8((int)&v17, v11);
      v12 = a1[4];
      v13 = *((_QWORD *)v12 + 1);
      v14 = *v12;
      *v12 = v16[0];
      v15 = HIDWORD(v17);
      *((_DWORD *)v12 + 2) = v17;
      *((_DWORD *)v12 + 3) = v15;
      v16[0] = v14;
      v17 = v13;
      sub_E3F7A(v16);
      return (int)a1[4];
    }
  }
}


// ======================================================================
// ADDR: 0xeb4c8
// SYMBOL: sub_EB4C8
void __fastcall sub_EB4C8(int *a1, int *a2)
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
  sub_E972C((int)a1, &v12);
  if ( v14 != v13 )
    v14 += 4 * ~((unsigned int)(v14 - v13 - 4) >> 2);
  if ( v12 )
    operator delete(v12);
}


// ======================================================================
