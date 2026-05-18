// ADDR: 0xeca24
// SYMBOL: sub_ECA24
_DWORD *__fastcall sub_ECA24(_DWORD *a1, int a2)
{
  unsigned int v2; // r11
  _DWORD *v4; // r0
  unsigned int v5; // r0
  char *v6; // r9
  char *v7; // r5
  int v8; // r6
  int v9; // r4
  void *v10; // r0
  int v11; // r0
  void *v12; // r1
  int v13; // r2
  int v14; // r6
  void *v15; // r3
  const char *v16; // r5
  size_t v17; // r0
  int v18; // r0
  _BYTE v20[4]; // [sp+4h] [bp-4Ch] BYREF
  int v21; // [sp+8h] [bp-48h]
  void *v22; // [sp+Ch] [bp-44h]
  int v23; // [sp+10h] [bp-40h] BYREF
  unsigned int v24; // [sp+14h] [bp-3Ch]
  void *v25; // [sp+18h] [bp-38h]
  __int64 s; // [sp+20h] [bp-30h] BYREF
  __int64 v27; // [sp+28h] [bp-28h]

  v2 = 0;
  a1[6] = 0;
  *a1 = a2;
  v4 = a1 + 1;
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  v4[4] = 0;
  s = 0LL;
  v27 = 0LL;
  if ( dladdr(a2, &s) )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( (_DWORD)s )
    {
      std::string::assign((int)&v23, (char *)s);
      v2 = v24;
      v5 = (unsigned __int8)v23;
    }
    else
    {
      v5 = 0;
    }
    if ( (v5 & 1) == 0 )
      v2 = v5 >> 1;
    if ( v2 )
    {
      v6 = (char *)v25;
      if ( (v5 & 1) == 0 )
        v6 = (char *)&v23 + 1;
      v7 = v6 - 1;
      v8 = 0;
      v9 = -1;
      do
      {
        if ( v2 == v8 )
          goto LABEL_21;
        v10 = memchr("/\\", (unsigned __int8)v7[v2], 2u);
        --v7;
        ++v9;
        ++v8;
      }
      while ( !v10 );
      if ( v2 == v9 || v2 - v8 >= v2 - 1 )
      {
LABEL_21:
        a1[1] = v6;
        a1[2] = v2;
        goto LABEL_22;
      }
      v11 = std::string::basic_string(v20, &v23, v2 - v9, -1, &v23);
      v12 = v22;
      v13 = v21;
      v14 = v20[0] & 1;
      if ( !v14 )
        v13 = v20[0] >> 1;
      v15 = v22;
      if ( (v20[0] & 1) == 0 )
        v15 = (void *)(v11 + 1);
      a1[1] = v15;
      a1[2] = v13;
      if ( v14 )
        operator delete(v12);
    }
LABEL_22:
    v16 = (const char *)v27;
    a1[3] = HIDWORD(s);
    if ( v16 )
    {
      v17 = strlen(v16);
      a1[4] = v16;
      a1[5] = v17;
    }
    v18 = (unsigned __int8)v23;
    a1[6] = HIDWORD(v27);
    if ( v18 << 31 )
      operator delete(v25);
  }
  return a1;
}


// ======================================================================
