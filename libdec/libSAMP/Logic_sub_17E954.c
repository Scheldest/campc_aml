// ADDR: 0x17fb94
// SYMBOL: sub_17FB94
int __fastcall sub_17FB94(int a1, unsigned int a2, int a3, int a4, const char *a5)
{
  const char *v9; // r9
  int v10; // r1
  int v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r9
  _DWORD *v14; // r10
  int v15; // r6
  int v16; // r1
  __int64 v17; // r2
  unsigned int v18; // r6
  int v19; // r5
  __int64 v20; // r2
  int v21; // r12
  int v22; // r0
  int v23; // r1
  const char *v24; // r5
  int v25; // r0
  int v26; // r5
  unsigned int v27; // r5
  int v28; // r0
  int v30; // [sp+0h] [bp-F0h]
  _DWORD *v31; // [sp+Ch] [bp-E4h]
  int v32; // [sp+10h] [bp-E0h]
  __int16 v33; // [sp+14h] [bp-DCh]
  _DWORD *v34; // [sp+18h] [bp-D8h]
  pthread_attr_t attr; // [sp+1Ch] [bp-D4h] BYREF

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1) || !a2 )
    return 0;
  v9 = a5;
  if ( *(_DWORD *)(a1 + 2028) == -1 )
  {
    v10 = sub_18CB94(&unk_382751, a3, 1, a5);
    *(_DWORD *)(a1 + 2028) = v10;
    if ( v10 != -1 )
    {
      v11 = sub_18CE02((int)&unk_382751, v10);
      if ( v11 )
        LOWORD(a3) = v11;
      goto LABEL_7;
    }
    return 0;
  }
LABEL_7:
  if ( !*(_WORD *)(a1 + 8) )
  {
    v32 = a4;
    v33 = a3;
    if ( *(unsigned __int16 *)(a1 + 10) > a2 )
      *(_WORD *)(a1 + 10) = a2;
    *(_WORD *)(a1 + 8) = a2;
    v12 = (_DWORD *)operator new[](2112 * a2 + 8);
    v13 = v12 + 451;
    v14 = v12 + 526;
    v15 = 0;
    *v12 = 2112;
    v12[1] = a2;
    v34 = v12;
    v31 = v12 + 2;
    do
    {
      sub_1871D0(&v34[v15 + 8]);
      sub_17D4A8((int)&v13[v15]);
      sub_17E5DA(&v14[v15]);
      v15 += 528;
    }
    while ( 528 * a2 != v15 );
    *(_DWORD *)(a1 + 832) = v31;
    a4 = v32;
    if ( *(_WORD *)(a1 + 8) )
    {
      v16 = *(unsigned __int16 *)(a1 + 2066);
      v17 = *(_QWORD *)(a1 + 2056);
      v30 = *(unsigned __int16 *)(a1 + 2064);
      *((_BYTE *)v34 + 8) = 0;
      sub_189D3C(v34 + 8, v16, v17, HIDWORD(v17), v30, v16);
      if ( *(unsigned __int16 *)(a1 + 8) >= 2u )
      {
        v18 = 1;
        v19 = 2136;
        do
        {
          v20 = *(_QWORD *)(a1 + 2056);
          v21 = *(unsigned __int16 *)(a1 + 2066);
          v22 = *(_DWORD *)(a1 + 832) + v19;
          v23 = *(unsigned __int16 *)(a1 + 2064);
          *(_BYTE *)(v22 - 24) = 0;
          sub_189D3C(v22, v23, v20, HIDWORD(v20), v23, v21);
          ++v18;
          v19 += 2112;
        }
        while ( v18 < *(unsigned __int16 *)(a1 + 8) );
      }
    }
    sub_1848EA(a1 + 836, 0);
    LOWORD(a3) = v33;
    v9 = a5;
  }
  if ( *(_BYTE *)(a1 + 4) )
  {
    sub_22178C(a1 + 932, 0x400u);
    *(_BYTE *)(a1 + 852) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 1964) = 0LL;
    *(_QWORD *)(a1 + 1972) = 0LL;
    *(_DWORD *)(a1 + 2024) = a4;
    sub_17FE12(a1);
    v24 = &attr.__size[24];
    sub_18CDAE(&unk_382751, &attr.__align + 6);
    *(_WORD *)(a1 + 568) = a3;
    if ( v9 && *v9 )
      v24 = v9;
    *(_DWORD *)(a1 + 564) = inet_addr(v24);
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr, 1);
    if ( !*(_BYTE *)(a1 + 5)
      && pthread_create((pthread_t *)(a1 + 868), &attr, (void *(*)(void *))sub_17FE74, (void *)a1) )
    {
      v26 = 0;
      (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 40))(a1, 0, 0);
      return v26;
    }
    v25 = *(unsigned __int8 *)(a1 + 5);
    *(_DWORD *)(a1 + 868) = 0;
    while ( !v25 )
    {
      sub_186FEC(10);
      v25 = *(unsigned __int8 *)(a1 + 5);
    }
  }
  if ( *(_DWORD *)(a1 + 900) )
  {
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)(*(_DWORD *)(a1 + 896) + 4 * v27);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v28 + 8))(v28, a1);
      ++v27;
    }
    while ( v27 < *(_DWORD *)(a1 + 900) );
  }
  return 1;
}


// ======================================================================
// ADDR: 0x180148
// SYMBOL: sub_180148
int __fastcall sub_180148(int a1, char *name, int a3, int a4, int a5)
{
  const char *v6; // r5
  int v7; // r0
  int v8; // r4

  if ( !name )
    return 0;
  v6 = name;
  v7 = *(_DWORD *)(a1 + 2028);
  if ( *(_BYTE *)(a1 + 4) || v7 == -1 )
    return 0;
  v8 = a5;
  if ( a5 >= 255 )
    v8 = 255;
  if ( !a4 )
    v8 = 0;
  if ( (unsigned int)(unsigned __int8)*name - 51 <= 0xFFFFFFFC )
  {
    v6 = (const char *)sub_18CC56((int)&unk_382751, name);
    if ( !v6 )
      return 0;
  }
  if ( (!strcmp(v6, "127.0.0.1") || !strcmp(v6, "0.0.0.0")) && *(unsigned __int16 *)(a1 + 568) == a3 )
    return 0;
  else
    return sub_1801D8(a1, v6, a3, a4, v8);
}


// ======================================================================
// ADDR: 0x180270
// SYMBOL: sub_180270
void __fastcall sub_180270(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // r9
  int v7; // r6
  __int64 v8; // kr00_8
  int v9; // r0
  int v10; // r6
  _BYTE *v11; // r0
  int v12; // r1
  unsigned int v13; // r5
  int v14; // r0
  int v15; // r5
  int i; // r6
  _BYTE *v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r1
  bool v21; // zf
  unsigned int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r0
  bool v25; // cf
  unsigned int v26; // r2
  unsigned int v27; // r5
  unsigned int v28; // r2
  unsigned int v29; // r2
  void *v30; // r0
  int v31; // r0
  int v32; // r0
  const std::nothrow_t *v33; // r1
  void *v34; // r4
  int v35; // r1
  int v36; // r5
  int v37; // r6
  int v38; // r1
  int v39; // r2
  bool v40; // zf
  int v41; // r3
  int v42; // r1

  v3 = *((unsigned __int16 *)a1 + 4);
  if ( a2 )
  {
    if ( *((_WORD *)a1 + 4) )
    {
      v7 = 0;
      do
      {
        v8 = *(_QWORD *)(a1[208] + v7 + 4);
        sub_1804E8(a1, v8, HIDWORD(v8), 0, a3);
        v7 += 2112;
      }
      while ( 2112 * v3 != v7 );
      v9 = sub_17E2E4();
      if ( v3 )
      {
        v10 = v9;
        do
        {
          v11 = (_BYTE *)a1[208];
          v12 = v3;
          while ( !*v11 )
          {
            v11 += 2112;
            if ( !--v12 )
              goto LABEL_14;
          }
          sub_186FEC(15);
        }
        while ( sub_17E2E4() - v10 < a2 );
      }
    }
    else
    {
      sub_17E2E4();
    }
  }
LABEL_14:
  if ( a1[225] )
  {
    v13 = 0;
    do
    {
      v14 = *(_DWORD *)(a1[224] + 4 * v13);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v14 + 20))(v14, a1);
      ++v13;
    }
    while ( v13 < a1[225] );
  }
  if ( !*((_BYTE *)a1 + 4) )
    *((_BYTE *)a1 + 4) = 1;
  while ( *((_BYTE *)a1 + 5) )
    sub_186FEC(15);
  _android_log_print(4, "AXL", "1. RakPeed::Disconnect - %i", v3);
  if ( v3 )
  {
    v15 = 0;
    for ( i = 0; i != v3; ++i )
    {
      _android_log_print(4, "AXL", "2. RakPeed::Disconnect - %i", i);
      v17 = (_BYTE *)(a1[208] + v15);
      *v17 = 0;
      sub_1876AE(v17 + 24, 0);
      v15 += 2112;
    }
  }
  v18 = 0;
  sub_1848EA(a1 + 209, 0);
  v19 = a1[618];
  v20 = a1[621];
  *((_WORD *)a1 + 4) = 0;
  v21 = v19 == v20;
  if ( v19 != v20 )
    v21 = *(_BYTE *)(v19 + 4) == 0;
  if ( !v21 )
  {
    for ( a1[618] = *(_DWORD *)(v19 + 8); v19; a1[618] = *(_DWORD *)(v19 + 8) )
    {
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 64))(a1, *(_DWORD *)v19);
      v19 = a1[618];
      v38 = a1[620];
      v39 = a1[621];
      v40 = v19 == v39;
      v41 = a1[622] + 1;
      *(_BYTE *)(v38 + 4) = 0;
      v42 = *(_DWORD *)(v38 + 8);
      a1[622] = v41;
      a1[620] = v42;
      if ( v19 != v39 )
        v40 = *(_BYTE *)(v19 + 4) == 0;
      if ( v40 )
        break;
    }
  }
  sub_180590(a1 + 618);
  v22 = a1[625];
  v23 = a1[626];
  v24 = a1[627];
  v25 = v23 >= v22;
  v26 = v23 - v22;
  if ( !v25 )
    v18 = -v24;
  if ( v26 != v18 )
  {
    v27 = 0;
    do
    {
      if ( v22 + v27 >= v24 )
        v22 -= v24;
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 64))(a1, *(_DWORD *)(a1[624] + 4 * (v27 + v22)));
      v22 = a1[625];
      ++v27;
      v28 = a1[626];
      v24 = a1[627];
      v25 = v28 >= v22;
      v29 = v28 - v22;
      if ( !v25 )
        v29 += v24;
    }
    while ( v27 < v29 );
  }
  if ( v24 )
  {
    if ( v24 >= 0x21 )
    {
      v30 = (void *)a1[624];
      if ( v30 )
        operator delete[](v30);
      a1[627] = 0;
    }
    a1[625] = 0;
    a1[626] = 0;
  }
  v31 = a1[507];
  *((_BYTE *)a1 + 2045) = 0;
  if ( v31 != -1 )
  {
    close(v31);
    a1[507] = -1;
  }
  sub_17FE12(a1);
  a1[214] = 0;
  a1[215] = 0;
  sub_1805DC(a1);
  v32 = a1[208];
  a1[208] = 0;
  if ( v32 )
  {
    v33 = *(const std::nothrow_t **)(v32 - 4);
    v34 = (void *)(v32 - 8);
    if ( v33 )
    {
      v35 = 33 * (_DWORD)v33;
      v36 = v32 + (v35 << 6);
      v37 = -64 * v35;
      do
      {
        sub_17E5E4(v36 - 16);
        sub_17D542(v36 - 316);
        sub_187574(v36 - 2088);
        v37 += 2112;
        v36 -= 2112;
      }
      while ( v37 );
    }
    operator delete[](v34, v33);
  }
}


// ======================================================================
// ADDR: 0x18cc56
// SYMBOL: sub_18CC56
char *__fastcall sub_18CC56(int a1, char *name)
{
  struct hostent *v2; // r0
  struct in_addr *v3; // r0

  v2 = gethostbyname(name);
  if ( v2 && (v3 = (struct in_addr *)*v2->h_addr_list) != 0 )
    return inet_ntoa((struct in_addr)v3->s_addr);
  else
    return 0;
}


// ======================================================================
