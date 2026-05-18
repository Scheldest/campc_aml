// ADDR: 0x9a060
// SYMBOL: sub_9A060
_DWORD *__fastcall sub_9A060(char *s)
{
  int *v2; // r6
  int v3; // r4
  int v4; // r5
  int v5; // r1
  int (__fastcall *v6)(int, int); // r3
  void *v7; // r0
  const void *v8; // r1
  void *v9; // r4
  int v10; // r1
  int v11; // r0
  bool v12; // zf
  _QWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r5
  size_t v16; // r6
  void *v17; // r4
  int v18; // r2
  char *v19; // r1
  unsigned int v20; // r0
  int v21; // r6
  bool v22; // zf
  int v23; // r0
  _BYTE v25[20]; // [sp+10h] [bp-38h] BYREF

  v2 = (int *)(dword_1ACF68 + 11540);
  v3 = *(_DWORD *)(dword_1ACF68 + 11540);
  memset(v25, 0, 17);
  if ( v3 == *(_DWORD *)(dword_1ACF68 + 11544) )
  {
    v4 = v3 + 1;
    if ( v3 )
      v5 = v3 + v3 / 2;
    else
      v5 = 8;
    if ( v5 > v4 )
      v4 = v5;
    if ( v3 < v4 )
    {
      v6 = off_117248;
      ++*(_DWORD *)(dword_1ACF68 + 880);
      v7 = (void *)v6(28 * v4, dword_1ACF70);
      v8 = (const void *)v2[2];
      if ( v8 )
      {
        v9 = v7;
        j_memcpy(v7, v8, 28 * *v2);
        v11 = v2[2];
        v12 = v11 == 0;
        if ( v11 )
        {
          v10 = dword_1ACF68;
          v12 = dword_1ACF68 == 0;
        }
        if ( !v12 )
          --*(_DWORD *)(v10 + 880);
        off_11724C(v11, dword_1ACF70);
        v7 = v9;
      }
      v3 = *v2;
      v2[1] = v4;
      v2[2] = (int)v7;
    }
  }
  v13 = (_QWORD *)(v2[2] + 28 * v3);
  *v13 = 0LL;
  v13[1] = *(_QWORD *)v25;
  v13 = (_QWORD *)((char *)v13 + 12);
  *v13 = *(_QWORD *)&v25[4];
  v13[1] = *(_QWORD *)&v25[12];
  v14 = (*v2)++;
  v15 = (_DWORD *)(v2[2] + 28 * v14);
  v16 = strlen(s) + 1;
  if ( dword_1ACF68 )
    ++*(_DWORD *)(dword_1ACF68 + 880);
  v17 = (void *)off_117248(v16, dword_1ACF70);
  j_memcpy(v17, s, v16);
  *v15 = v17;
  v18 = (unsigned __int8)*s;
  if ( *s )
  {
    v19 = s + 1;
    v20 = -1;
    do
    {
      v21 = v18;
      v18 = (unsigned __int8)*v19;
      v22 = v21 == 35;
      if ( v21 == 35 )
        v22 = v18 == 35;
      if ( v22 )
      {
        v18 = 35;
        if ( v19[1] == 35 )
          v20 = -1;
      }
      ++v19;
      v20 = dword_52D88[v21 ^ (unsigned __int8)v20] ^ (v20 >> 8);
    }
    while ( v18 );
    v23 = ~v20;
  }
  else
  {
    v23 = 0;
  }
  v15[1] = v23;
  return v15;
}


// ======================================================================
