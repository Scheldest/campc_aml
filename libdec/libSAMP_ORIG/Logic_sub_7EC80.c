// ADDR: 0x7fb88
// SYMBOL: sub_7FB88
void __fastcall sub_7FB88(void **a1, int *a2)
{
  char *v2; // r5
  char *v3; // r9
  int v6; // r6
  unsigned int v7; // r4
  int v8; // r11
  int *v9; // r0
  _DWORD *v10; // r1
  _DWORD *v11; // r6
  int v12; // r11
  char *v13; // r4
  char *v14; // r0
  char *v15; // r1
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r1
  char *v19; // r4
  const std::nothrow_t *v20; // r1
  int v21; // r1
  char *v22; // r0
  int v23; // [sp+0h] [bp-30h]
  unsigned int v24; // [sp+4h] [bp-2Ch]

  v3 = (char *)a1[1];
  v2 = (char *)*a1;
  v6 = (v3 - (_BYTE *)*a1) / 24;
  v7 = v6 + 1;
  if ( (unsigned int)(v6 + 1) > 0xAAAAAAA )
    std::__vector_base_common<true>::__throw_length_error(a1);
  if ( v7 <= 1431655766 * (((_BYTE *)a1[2] - v2) >> 3) )
    v7 = 1431655766 * (((_BYTE *)a1[2] - v2) >> 3);
  if ( (unsigned int)(-1431655765 * (((_BYTE *)a1[2] - v2) >> 3)) >= 0x5555555 )
    v7 = 178956970;
  if ( v7 )
  {
    if ( v7 > 0xAAAAAAA )
      sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v8 = operator new(24 * v7);
  }
  else
  {
    v8 = 0;
  }
  v10 = a2 + 4;
  v9 = (int *)a2[4];
  v11 = (_DWORD *)(v8 + 24 * v6);
  if ( !v9 )
  {
    v10 = v11 + 4;
LABEL_14:
    *v10 = 0;
    if ( v3 != v2 )
    {
LABEL_15:
      v23 = v8;
      v24 = v7;
      v12 = 0;
      v13 = v3;
      while ( 1 )
      {
        v15 = *(char **)&v3[v12 * 4 - 8];
        if ( v15 )
        {
          if ( &v3[v12 * 4 - 24] == v15 )
          {
            v11[v12 - 2] = &v11[v12 - 6];
            (*(void (__fastcall **)(_DWORD))(**(_DWORD **)&v3[v12 * 4 - 8] + 12))(*(_DWORD *)&v3[v12 * 4 - 8]);
            goto LABEL_18;
          }
          v14 = v13 - 8;
          v11[v12 - 2] = v15;
        }
        else
        {
          v14 = (char *)&v11[v12 - 2];
        }
        *(_DWORD *)v14 = 0;
LABEL_18:
        v12 -= 6;
        v13 -= 24;
        if ( &v3[v12 * 4] == v2 )
        {
          v16 = &v11[v12];
          v8 = v23;
          v7 = v24;
          v3 = (char *)*a1;
          goto LABEL_26;
        }
      }
    }
    goto LABEL_25;
  }
  if ( a2 != v9 )
  {
    v11[4] = v9;
    goto LABEL_14;
  }
  v17 = *v9;
  v11[4] = v11;
  (*(void (__fastcall **)(int *, _DWORD *))(v17 + 12))(v9, v11);
  v3 = (char *)a1[1];
  v2 = (char *)*a1;
  if ( v3 != *a1 )
    goto LABEL_15;
LABEL_25:
  v16 = v11;
LABEL_26:
  v18 = 3 * v7;
  v19 = (char *)a1[1];
  *a1 = v16;
  v20 = (const std::nothrow_t *)(v8 + 8 * v18);
  a1[2] = v20;
  a1[1] = v11 + 6;
  while ( v19 != v3 )
  {
    v22 = (char *)*((_DWORD *)v19 - 2);
    v19 -= 24;
    if ( v19 == v22 )
    {
      v21 = 4;
      goto LABEL_28;
    }
    if ( v22 )
    {
      v21 = 5;
LABEL_28:
      (*(void (**)(void))(*(_DWORD *)v22 + 4 * v21))();
    }
  }
  if ( v3 )
    operator delete(v3, v20);
}


// ======================================================================
