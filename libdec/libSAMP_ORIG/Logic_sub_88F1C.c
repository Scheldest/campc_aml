// ADDR: 0x88f60
// SYMBOL: sub_88F60
int __fastcall sub_88F60(size_t *a1, char *format, __gnuc_va_list arg)
{
  int v5; // r0
  int v6; // r9
  int v7; // r0
  size_t v8; // r10
  int v9; // r5
  size_t v10; // r2
  int v11; // r4
  void *v12; // r0
  const void *v13; // r1
  size_t v14; // r5
  int v15; // r1
  size_t v16; // r0
  bool v17; // zf
  int v18; // r1
  void *v19; // r0
  const void *v20; // r1
  size_t v21; // r4
  int v22; // r1
  size_t v23; // r0
  bool v24; // zf
  size_t v25; // r11
  int v26; // r0
  int v27; // r1
  size_t v29; // [sp+4h] [bp-2Ch]
  int v31; // [sp+10h] [bp-20h]

  v5 = vsnprintf(0, 0, format, arg);
  if ( v5 < 1 )
    return v31;
  v6 = v5;
  v7 = a1[1];
  v8 = *a1;
  if ( !*a1 )
    v8 = 1;
  v9 = v8 + v6;
  v10 = v8 + v6;
  if ( (int)(v8 + v6) < v7 )
    goto LABEL_23;
  v11 = v8 + v6;
  if ( v9 <= 2 * v7 )
    v11 = 2 * v7;
  if ( v7 >= v11 )
  {
LABEL_23:
    if ( v7 >= v9 )
      goto LABEL_34;
    if ( v7 )
      v18 = v7 + v7 / 2;
    else
      v18 = 8;
    if ( v18 > v9 )
      v9 = v18;
    if ( v7 >= v9 )
      goto LABEL_34;
    v29 = v8 + v6;
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    v19 = (void *)off_117248(v9, dword_1ACF70);
    v20 = (const void *)a1[2];
    v21 = (size_t)v19;
    if ( v20 )
    {
      j_memcpy(v19, v20, *a1);
      v23 = a1[2];
      v24 = v23 == 0;
      if ( v23 )
      {
        v22 = dword_1ACF68;
        v24 = dword_1ACF68 == 0;
      }
      if ( !v24 )
        --*(_DWORD *)(v22 + 880);
      off_11724C(v23, dword_1ACF70);
    }
    a1[2] = v21;
    v11 = v9;
  }
  else
  {
    v29 = v8 + v6;
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    v12 = (void *)off_117248(v11, dword_1ACF70);
    v13 = (const void *)a1[2];
    v14 = (size_t)v12;
    if ( v13 )
    {
      j_memcpy(v12, v13, *a1);
      v16 = a1[2];
      v17 = v16 == 0;
      if ( v16 )
      {
        v15 = dword_1ACF68;
        v17 = dword_1ACF68 == 0;
      }
      if ( !v17 )
        --*(_DWORD *)(v15 + 880);
      off_11724C(v16, dword_1ACF70);
    }
    a1[2] = v14;
  }
  v10 = v29;
  a1[1] = v11;
LABEL_34:
  v25 = a1[2];
  *a1 = v10;
  v26 = vsnprintf((char *)(v8 + v25 - 1), v6 + 1, format, arg);
  if ( v25 )
  {
    v27 = v6;
    if ( v26 < v6 + 1 )
      v27 = v26;
    if ( v26 == -1 )
      v27 = v6;
    *(_BYTE *)(v8 + v25 - 1 + v27) = 0;
  }
  return v31;
}


// ======================================================================
