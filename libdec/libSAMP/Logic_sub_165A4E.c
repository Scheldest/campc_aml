// ADDR: 0x165a70
// SYMBOL: sub_165A70
int __fastcall sub_165A70(size_t *a1, char *format, __gnuc_va_list arg)
{
  int result; // r0
  int v6; // r9
  int v7; // r0
  size_t v8; // r10
  int v9; // r5
  size_t v10; // r2
  int v11; // r4
  void *v12; // r0
  const void *v13; // r1
  size_t v14; // r5
  size_t v15; // r0
  int v16; // r1
  void *v17; // r0
  const void *v18; // r1
  size_t v19; // r4
  size_t v20; // r0
  size_t v21; // r11
  int v22; // r1
  bool v23; // zf
  size_t v24; // [sp+8h] [bp-28h]

  result = vsnprintf(0, 0, format, arg);
  if ( result < 1 )
    return result;
  v6 = result;
  v7 = a1[1];
  v8 = *a1;
  if ( !*a1 )
    v8 = 1;
  v9 = v8 + v6;
  v10 = v8 + v6;
  if ( (int)(v8 + v6) < v7 )
    goto LABEL_22;
  v11 = v8 + v6;
  if ( v9 <= 2 * v7 )
    v11 = 2 * v7;
  if ( v7 >= v11 )
  {
LABEL_22:
    if ( v7 >= v9 )
      goto LABEL_32;
    if ( v7 )
      v16 = v7 + v7 / 2;
    else
      v16 = 8;
    if ( v16 > v9 )
      v9 = v16;
    if ( v7 >= v9 )
      goto LABEL_32;
    v24 = v8 + v6;
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v17 = (void *)off_2390AC(v9, dword_381B60);
    v18 = (const void *)a1[2];
    v19 = (size_t)v17;
    if ( v18 )
    {
      j_memcpy(v17, v18, *a1);
      v20 = a1[2];
      if ( v20 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v20, dword_381B60);
    }
    a1[2] = v19;
    v11 = v9;
  }
  else
  {
    v24 = v8 + v6;
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v12 = (void *)off_2390AC(v11, dword_381B60);
    v13 = (const void *)a1[2];
    v14 = (size_t)v12;
    if ( v13 )
    {
      j_memcpy(v12, v13, *a1);
      v15 = a1[2];
      if ( v15 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v15, dword_381B60);
    }
    a1[2] = v14;
  }
  v10 = v24;
  a1[1] = v11;
LABEL_32:
  v21 = a1[2];
  *a1 = v10;
  result = vsnprintf((char *)(v8 + v21 - 1), v6 + 1, format, arg);
  if ( v21 )
  {
    v22 = v6;
    if ( result < v6 + 1 )
      v22 = result;
    v23 = result == -1;
    result = 0;
    if ( v23 )
      v22 = v6;
    *(_BYTE *)(v8 + v21 - 1 + v22) = 0;
  }
  return result;
}


// ======================================================================
