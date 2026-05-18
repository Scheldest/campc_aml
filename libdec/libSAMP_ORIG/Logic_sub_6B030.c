// ADDR: 0xb04bc
// SYMBOL: sub_B04BC
int __fastcall sub_B04BC(_QWORD *a1, unsigned __int8 *a2)
{
  _QWORD *v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r1
  __int64 v7; // kr00_8
  char *v8; // r5
  char *v9; // r11
  void **v10; // r4
  int v11; // r8
  char *v12; // r9
  unsigned int v13; // r0
  unsigned int v14; // r1
  int v15; // r2
  _DWORD *v16; // r0
  bool v17; // zf
  bool v18; // zf
  const char *v19; // r0
  int v20; // r1
  bool v21; // zf
  const char *v22; // r1
  __int64 v23; // d17
  __int64 v24; // d18
  __int64 v25; // d19
  __int64 v26; // d20
  __int64 v27; // d17
  __int64 v28; // d18
  __int64 v29; // d19
  __int64 v30; // d20
  __int64 v31; // d17
  __int64 v32; // d18
  __int64 v33; // d19
  __int64 v34; // d20
  _QWORD *v36; // [sp+4h] [bp-6Ch]
  unsigned __int8 *v37; // [sp+Ch] [bp-64h]
  __int64 haystack; // [sp+10h] [bp-60h] BYREF
  __int64 v39; // [sp+18h] [bp-58h]
  unsigned __int8 v40; // [sp+24h] [bp-4Ch] BYREF
  _BYTE v41[11]; // [sp+25h] [bp-4Bh] BYREF
  __int64 v42; // [sp+30h] [bp-40h] BYREF
  int v43; // [sp+38h] [bp-38h]
  int v44; // [sp+3Ch] [bp-34h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  v4 = a1 + 6;
  v5 = *a2;
  *v4 = 0LL;
  v4[1] = 0LL;
  *((_DWORD *)v4 + 4) = 0;
  v6 = *((_DWORD *)a2 + 1);
  if ( !(v5 << 31) )
    v6 = v5 >> 1;
  if ( !v6 )
    return v44;
  sub_B0130((void **)&v42, a2);
  v7 = v42;
  v37 = a2;
  if ( (_DWORD)v42 == HIDWORD(v42) )
  {
    strcpy(v41, ".apk");
    v40 = 8;
    sub_B0130((void **)&haystack, &v40);
    if ( (_DWORD)v7 )
      operator delete((void *)v7);
    v9 = (char *)HIDWORD(haystack);
    v8 = (char *)haystack;
    v43 = v39;
    v42 = haystack;
    if ( v40 << 31 )
      operator delete(*(void **)&v41[7]);
    v10 = (void **)v8;
    if ( v8 == v9 )
      goto LABEL_42;
  }
  else
  {
    v9 = (char *)HIDWORD(v42);
    v8 = (char *)v42;
  }
  if ( v8 == v9 )
    goto LABEL_41;
  v36 = a1;
  v11 = 0;
  while ( 1 )
  {
    v12 = &v8[v11];
    v13 = (unsigned __int8)v8[v11 + 56];
    v14 = *(_DWORD *)&v8[v11 + 60];
    v15 = v13 & 1;
    if ( (v13 & 1) == 0 )
      v14 = v13 >> 1;
    if ( v14 && !v12[25] )
    {
      v16 = (_DWORD *)(unsigned __int8)v12[27];
      v17 = v16 == 0;
      if ( v12[27] )
      {
        v16 = *(_DWORD **)&v8[v11];
        v17 = *(_QWORD *)&v8[v11] == 0LL;
      }
      if ( !v17 )
      {
        v18 = *((_QWORD *)v12 + 1) == 0LL;
        if ( *((_QWORD *)v12 + 1) )
          v18 = v12[24] == 0;
        if ( !v18 && *((_DWORD *)v12 + 4) >= 5u && *v16 == 1179403647 )
        {
          v19 = (const char *)*((_DWORD *)v12 + 16);
          if ( !v15 )
            v19 = v12 + 57;
          if ( strstr(v19, "/system/bin/linker") )
          {
            v27 = *((_QWORD *)v12 + 1);
            v28 = *((_QWORD *)v12 + 2);
            v29 = *((_QWORD *)v12 + 3);
            v30 = *((_QWORD *)v12 + 4);
            *v36 = *(_QWORD *)v12;
            v36[1] = v27;
            v36[2] = v28;
            v36[3] = v29;
            v36[4] = v30;
            std::string::operator=(v36 + 5, v12 + 40);
            *((_DWORD *)v36 + 13) = *((_DWORD *)v12 + 13);
            std::string::operator=(v36 + 7, v12 + 56);
            v10 = (void **)v9;
            goto LABEL_42;
          }
          haystack = 0LL;
          v39 = 0LL;
          if ( dladdr(*(_DWORD *)v12, &haystack) )
          {
            v21 = (_DWORD)haystack == 0;
            if ( (_DWORD)haystack )
            {
              v20 = HIDWORD(haystack);
              v21 = HIDWORD(haystack) == 0;
            }
            if ( !v21 && *(_QWORD *)v12 == v20 )
              break;
          }
        }
      }
    }
LABEL_13:
    v11 += 72;
    if ( &v8[v11] == v9 )
      goto LABEL_41;
  }
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    v22 = (const char *)*((_DWORD *)v37 + 2);
    if ( !(*v37 << 31) )
      v22 = (const char *)(v37 + 1);
    if ( strstr((const char *)haystack, v22) )
    {
      v23 = *((_QWORD *)v12 + 1);
      v24 = *((_QWORD *)v12 + 2);
      v25 = *((_QWORD *)v12 + 3);
      v26 = *((_QWORD *)v12 + 4);
      *v36 = *(_QWORD *)v12;
      v36[1] = v23;
      v36[2] = v24;
      v36[3] = v25;
      v36[4] = v26;
      std::string::operator=(v36 + 5, v12 + 40);
      *((_DWORD *)v36 + 13) = *((_DWORD *)v12 + 13);
      std::string::operator=(v36 + 7, v12 + 56);
      std::string::assign((int)(v36 + 7), (char *)haystack);
      goto LABEL_41;
    }
    goto LABEL_13;
  }
  v31 = *((_QWORD *)v12 + 1);
  v32 = *((_QWORD *)v12 + 2);
  v33 = *((_QWORD *)v12 + 3);
  v34 = *((_QWORD *)v12 + 4);
  *v36 = *(_QWORD *)v12;
  v36[1] = v31;
  v36[2] = v32;
  v36[3] = v33;
  v36[4] = v34;
  std::string::operator=(v36 + 5, v12 + 40);
  *((_DWORD *)v36 + 13) = *((_DWORD *)v12 + 13);
  std::string::operator=(v36 + 7, v12 + 56);
LABEL_41:
  v10 = (void **)v9;
LABEL_42:
  if ( v8 )
  {
    while ( v10 != (void **)v8 )
    {
      if ( *((unsigned __int8 *)v10 - 16) << 31 )
        operator delete(*(v10 - 2));
      if ( *((unsigned __int8 *)v10 - 32) << 31 )
        operator delete(*(v10 - 6));
      v10 -= 18;
    }
    operator delete(v8);
  }
  return v44;
}


// ======================================================================
