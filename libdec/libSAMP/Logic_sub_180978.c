// ADDR: 0x180a0c
// SYMBOL: sub_180A0C
_DWORD *__fastcall sub_180A0C(_DWORD *a1)
{
  unsigned int v2; // r5
  int v3; // r0
  int *v4; // r1
  int *v5; // r0
  bool v6; // zf
  unsigned int v7; // r1
  int v8; // r5
  unsigned int v9; // r3
  _DWORD *v10; // r2
  unsigned int v11; // r0
  bool v12; // cf
  unsigned int v13; // r3
  unsigned int v14; // r1
  int v15; // r2
  unsigned int v16; // r3
  _BYTE *v17; // r0
  _BYTE *v18; // r1
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int *v22; // r5
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  int *v27; // r0
  int v28; // r5
  int v29; // r1
  int *v30; // r2
  int v31; // r3
  int v32; // r1
  _DWORD v34[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( !(*(int (__fastcall **)(_DWORD *))(*a1 + 44))(a1) )
    return 0;
  if ( a1[225] )
  {
    v2 = 0;
    do
    {
      v3 = *(_DWORD *)(a1[224] + 4 * v2);
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 12))(v3, a1);
      ++v2;
    }
    while ( v2 < a1[225] );
  }
  do
  {
    EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
    v4 = (int *)a1[618];
    v5 = (int *)a1[621];
    v6 = v4 == v5;
    if ( v4 != v5 )
      v6 = *((_BYTE *)v4 + 4) == 0;
    if ( !v6 )
    {
      v22 = (int *)v4[2];
      a1[618] = v22;
      if ( v4 )
      {
        v23 = a1[620];
        v24 = a1[622];
        v25 = *v4;
        *(_BYTE *)(v23 + 4) = 0;
        v26 = *(_DWORD *)(v23 + 8);
        a1[622] = v24 + 1;
        a1[620] = v26;
        v34[0] = v25;
        if ( v22 != v5 )
        {
          do
          {
            if ( !*((_BYTE *)v22 + 4) )
              break;
            a1[618] = v22[2];
            sub_180D28(a1 + 624, v34);
            if ( !v22 )
              goto LABEL_9;
            v27 = (int *)a1[618];
            v28 = *v22;
            v29 = a1[620];
            v30 = (int *)a1[621];
            v31 = a1[622] + 1;
            *(_BYTE *)(v29 + 4) = 0;
            v32 = *(_DWORD *)(v29 + 8);
            v34[0] = v28;
            v22 = v27;
            a1[622] = v31;
            a1[620] = v32;
          }
          while ( v27 != v30 );
        }
        sub_180D28(a1 + 624, v34);
      }
    }
LABEL_9:
    LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
    v7 = a1[625];
    v8 = 0;
    v9 = a1[626];
    v10 = 0;
    v11 = a1[627];
    v12 = v9 >= v7;
    v13 = v9 - v7;
    if ( !v12 )
      v8 = -v11;
    if ( v13 == v8 )
      break;
    v14 = v7 + 1;
    v15 = a1[624];
    v16 = v14 - v11;
    if ( v14 != v11 )
      v16 = v14;
    a1[625] = v16;
    if ( !v16 )
      v16 = v11;
    v10 = *(_DWORD **)(v15 + 4 * v16 - 4);
    v34[0] = v10;
    if ( v10[3] >= 5u )
    {
      v17 = (_BYTE *)v10[5];
      if ( *v17 == 40 )
      {
        sub_180DEC(a1, v17 + 1, v10[1], v10[2]);
        v10 = (_DWORD *)v34[0];
      }
    }
    v18 = (_BYTE *)v10[5];
    if ( *v18 == 21 )
    {
      sub_180E50(a1, v18, v10[3], v10[1], v10[2]);
LABEL_21:
      (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 64))(a1, v34[0]);
    }
    else
    {
      if ( !a1[225] )
        return v10;
      v19 = 0;
      while ( 1 )
      {
        v20 = *(_DWORD *)(a1[224] + 4 * v19);
        v21 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v20 + 16))(v20, a1);
        if ( v21 == 2 )
          break;
        if ( !v21 )
          goto LABEL_21;
        v10 = (_DWORD *)v34[0];
        if ( (unsigned int)++v19 >= a1[225] )
          goto LABEL_23;
      }
    }
    v10 = 0;
    v34[0] = 0;
LABEL_23:
    ;
  }
  while ( !v10 );
  return v10;
}


// ======================================================================
// ADDR: 0x180bd0
// SYMBOL: sub_180BD0
int __fastcall sub_180BD0(int a1, _BYTE *a2, size_t a3, int a4, __int16 a5)
{
  int v8; // r0
  unsigned int v9; // r5
  int v10; // r0
  int v11; // r4
  int v12; // r5
  int v13; // r10
  int v14; // r0
  _BYTE *v15; // r8
  void (__fastcall *v16)(_BYTE **); // r1
  int v17; // r4
  _BYTE v20[276]; // [sp+4h] [bp-25Ch] BYREF
  _BYTE *v21; // [sp+118h] [bp-148h] BYREF
  _DWORD v22[2]; // [sp+11Ch] [bp-144h] BYREF
  __int16 v23; // [sp+124h] [bp-13Ch]
  int v24; // [sp+128h] [bp-138h]
  int v25; // [sp+12Ch] [bp-134h]
  int v26; // [sp+130h] [bp-130h] BYREF
  int v27[2]; // [sp+134h] [bp-12Ch] BYREF
  int v28; // [sp+13Ch] [bp-124h]

  sub_17D4F2((int)v27, a2, a3, 0);
  v26 = 0;
  v8 = sub_17D4A8((int)v20);
  v24 = a1;
  v25 = v8;
  v22[1] = a4;
  v23 = a5;
  sub_17DA96((int)v27, 8);
  if ( *a2 == 40 )
    sub_17DA96((int)v27, 40);
  sub_17D744(v27, &v26, 1u);
  v9 = sub_17E660((int *)(a1 + 2004), v26);
  if ( sub_17D9C0(v27, v22, 32, 1) ^ 1 | (v9 == 255) )
    goto LABEL_15;
  v10 = sub_17E650((_DWORD *)(a1 + 2004), v9);
  v11 = v10;
  if ( !v10 )
    goto LABEL_15;
  v12 = v22[0];
  if ( v22[0] )
  {
    v13 = v27[0] - v28;
    if ( v27[0] != v28 )
    {
      v14 = v13 + 7;
      v15 = v13 > 8388600 ? (_BYTE *)operator new[]((unsigned int)v14 >> 3) : &v20[-(((v14 >> 3) + 7) & 0xFFFFFFF8) - 4];
      if ( sub_17D786(v27, v15, v12, 0) )
      {
        v16 = *(void (__fastcall **)(_BYTE **))(v11 + 4);
        v21 = v15;
        v16(&v21);
        if ( v13 >= 8388601 )
          operator delete[](v15);
        goto LABEL_14;
      }
    }
LABEL_15:
    v17 = 0;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(_BYTE **))(v10 + 4))(&v21);
LABEL_14:
  v17 = 1;
LABEL_16:
  sub_17D542((int)v20);
  sub_17D542((int)v27);
  return v17;
}


// ======================================================================
