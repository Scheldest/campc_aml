// ADDR: 0x1603b4
// SYMBOL: sub_1603B4
int __fastcall sub_1603B4(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r6
  int *v6; // r8
  int v9; // r9
  std::__shared_weak_count *v10; // r0
  std::__shared_weak_count *v11; // r0
  int v12; // r5
  std::__shared_weak_count *v13; // r4
  int v14; // r0
  int v15; // r5
  unsigned int *v16; // r0
  unsigned int v17; // r1

  v5 = *(int **)(a1 + 2052);
  v6 = *(int **)(a1 + 2056);
  if ( v5 == v6 )
  {
    LOBYTE(v9) = 2;
  }
  else
  {
    v9 = 2;
    do
    {
      v10 = (std::__shared_weak_count *)v5[1];
      if ( v10 )
      {
        v11 = (std::__shared_weak_count *)std::__shared_weak_count::lock(v10);
        if ( v11 )
        {
          v12 = *v5;
          v13 = v11;
          if ( *v5 && (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 16))(v12) == a2 )
          {
            v14 = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v12 + 8))(v12, a3, a4, a5);
            v15 = v9;
            if ( (unsigned __int8)v9 != 1 )
              v15 = v14;
            if ( v14 == 2 )
              v15 = v9;
          }
          else
          {
            v15 = v9;
          }
          v16 = (unsigned int *)((char *)v13 + 4);
          __dmb(0xBu);
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          __dmb(0xBu);
          if ( !v17 )
          {
            (*(void (__fastcall **)(std::__shared_weak_count *))(*(_DWORD *)v13 + 8))(v13);
            std::__shared_weak_count::__release_weak(v13);
          }
          v9 = v15;
        }
      }
      v5 += 2;
    }
    while ( v5 != v6 );
  }
  return (unsigned __int8)v9;
}


// ======================================================================
// ADDR: 0x160468
// SYMBOL: sub_160468
const char *__fastcall sub_160468(int a1, int a2)
{
  int v2; // r2
  const char *result; // r0
  int v4; // r0
  char **v5; // r1

  v2 = a1 - 4;
  result = &byte_8F794;
  switch ( v2 )
  {
    case 0:
      v4 = a2 - 1;
      if ( (unsigned int)(a2 - 1) >= 8 )
        return &byte_8F794;
      v5 = off_22F9C8;
      return v5[v4];
    case 1:
      if ( a2 == 2 )
        result = "Process trace trap";
      if ( a2 == 1 )
        return "Process breakpoint";
      return result;
    case 2:
    case 5:
    case 6:
      return result;
    case 3:
      v4 = a2 - 1;
      if ( (unsigned int)(a2 - 1) >= 5 )
        return &byte_8F794;
      v5 = off_22F9B4;
      return v5[v4];
    case 4:
      v4 = a2 - 1;
      if ( (unsigned int)(a2 - 1) >= 8 )
        return &byte_8F794;
      v5 = off_22F994;
      return v5[v4];
    case 7:
      v4 = a2 - 1;
      if ( (unsigned int)(a2 - 1) >= 4 )
        return &byte_8F794;
      v5 = off_22F984;
      return v5[v4];
  }
}


// ======================================================================
// ADDR: 0x16096c
// SYMBOL: sub_16096C
int __fastcall sub_16096C(int a1, void *a2, int a3, int a4, int *a5, int *a6)
{
  int *v10; // r0
  int *v11; // r4
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r1
  int v16; // r3
  unsigned int v17; // r0
  char *v18; // r1
  int v19; // r2
  int v21; // [sp+4h] [bp-54h]
  int v22; // [sp+1Ch] [bp-3Ch] BYREF
  char v23[4]; // [sp+24h] [bp-34h] BYREF
  _DWORD v24[12]; // [sp+28h] [bp-30h] BYREF

  sub_F06B2((int)v23);
  v10 = sub_F0734();
  v11 = v10;
  if ( !(*(unsigned __int8 *)v10 << 31) )
  {
    *(_WORD *)v10 = 0;
LABEL_4:
    v14 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v10[2] = 0;
  v12 = *(unsigned __int8 *)v10;
  v13 = *v11;
  v11[1] = 0;
  if ( !(v12 << 31) )
    goto LABEL_4;
  v14 = (v13 - 2) & 0xFFFFFFFE;
LABEL_6:
  v15 = *a5;
  v16 = *a6;
  v24[5] = 0;
  v24[0] = a4;
  v24[4] = v16;
  v24[2] = v15;
  sub_DCA40(&v22, (int)v11, v14, a2, a3, v21, 460, 0, (int)v24, 0);
  v17 = *(unsigned __int8 *)v11;
  v18 = (char *)v11[2];
  v19 = v11[1];
  if ( (v17 & 1) == 0 )
  {
    v18 = (char *)v11 + 1;
    v19 = v17 >> 1;
  }
  sub_ED4F8(a1, v18, v19);
  return sub_F0720((int)v23);
}


// ======================================================================
// ADDR: 0x160a4c
// SYMBOL: sub_160A4C
int __fastcall sub_160A4C(int a1, void *a2, int a3, int a4, int *a5, int *a6)
{
  int *v10; // r0
  int *v11; // r4
  int v12; // r0
  int v13; // r2
  unsigned int v14; // r2
  int v15; // r1
  int v16; // r3
  unsigned int v17; // r0
  char *v18; // r1
  int v19; // r2
  int v21; // [sp+4h] [bp-54h]
  int v22; // [sp+1Ch] [bp-3Ch] BYREF
  char v23[4]; // [sp+24h] [bp-34h] BYREF
  _DWORD v24[12]; // [sp+28h] [bp-30h] BYREF

  sub_F06B2((int)v23);
  v10 = sub_F0734();
  v11 = v10;
  if ( !(*(unsigned __int8 *)v10 << 31) )
  {
    *(_WORD *)v10 = 0;
LABEL_4:
    v14 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v10[2] = 0;
  v12 = *(unsigned __int8 *)v10;
  v13 = *v11;
  v11[1] = 0;
  if ( !(v12 << 31) )
    goto LABEL_4;
  v14 = (v13 - 2) & 0xFFFFFFFE;
LABEL_6:
  v15 = *a5;
  v16 = *a6;
  v24[5] = 0;
  v24[3] = 0;
  v24[0] = a4;
  v24[4] = v16;
  v24[2] = v15;
  sub_DCA40(&v22, (int)v11, v14, a2, a3, v21, 284, 0, (int)v24, 0);
  v17 = *(unsigned __int8 *)v11;
  v18 = (char *)v11[2];
  v19 = v11[1];
  if ( (v17 & 1) == 0 )
  {
    v18 = (char *)v11 + 1;
    v19 = v17 >> 1;
  }
  sub_ED4F8(a1, v18, v19);
  return sub_F0720((int)v23);
}


// ======================================================================
// ADDR: 0x160b2c
// SYMBOL: sub_160B2C
int __fastcall sub_160B2C(int a1, void *a2, int a3, int *a4, int a5)
{
  int *v9; // r4
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r3
  unsigned int v14; // r0
  char *v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-4Ch]
  int v19; // [sp+1Ch] [bp-34h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v21[10]; // [sp+28h] [bp-28h] BYREF

  sub_F06B2((int)v20);
  v9 = sub_F0734();
  if ( !(*(unsigned __int8 *)v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v12 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v9[2] = 0;
  v10 = *(unsigned __int8 *)v9;
  v11 = *v9;
  v9[1] = 0;
  if ( !(v10 << 31) )
    goto LABEL_4;
  v12 = (v11 - 2) & 0xFFFFFFFE;
LABEL_6:
  v13 = *a4;
  v21[1] = 0;
  v21[2] = a5;
  v21[0] = v13;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 193, 0, (int)v21, 0);
  v14 = *(unsigned __int8 *)v9;
  v15 = (char *)v9[2];
  v16 = v9[1];
  if ( (v14 & 1) == 0 )
  {
    v15 = (char *)v9 + 1;
    v16 = v14 >> 1;
  }
  sub_ED4F8(a1, v15, v16);
  return sub_F0720((int)v20);
}


// ======================================================================
// ADDR: 0x160c00
// SYMBOL: sub_160C00
int __fastcall sub_160C00(int a1, void *a2, int a3, int *a4, _DWORD *a5)
{
  int *v9; // r4
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r2
  int v13; // r1
  unsigned int v14; // r0
  char *v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-4Ch]
  int v19; // [sp+1Ch] [bp-34h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-2Ch] BYREF
  _DWORD v21[10]; // [sp+28h] [bp-28h] BYREF

  sub_F06B2((int)v20);
  v9 = sub_F0734();
  if ( !(*(unsigned __int8 *)v9 << 31) )
  {
    *(_WORD *)v9 = 0;
LABEL_4:
    v12 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v9[2] = 0;
  v10 = *(unsigned __int8 *)v9;
  v11 = *v9;
  v9[1] = 0;
  if ( !(v10 << 31) )
    goto LABEL_4;
  v12 = (v11 - 2) & 0xFFFFFFFE;
LABEL_6:
  v13 = *a4;
  v21[2] = *a5;
  v21[3] = 0;
  v21[0] = v13;
  v21[1] = 0;
  sub_DCA40(&v19, (int)v9, v12, a2, a3, v18, 33, 0, (int)v21, 0);
  v14 = *(unsigned __int8 *)v9;
  v15 = (char *)v9[2];
  v16 = v9[1];
  if ( (v14 & 1) == 0 )
  {
    v15 = (char *)v9 + 1;
    v16 = v14 >> 1;
  }
  sub_ED4F8(a1, v15, v16);
  return sub_F0720((int)v20);
}


// ======================================================================
// ADDR: 0x160cd8
// SYMBOL: sub_160CD8
int __fastcall sub_160CD8(int a1, void *a2, int a3, int *a4, int *a5, int *a6, int *a7)
{
  int *v11; // r0
  int *v12; // r4
  int v13; // r1
  int v14; // r2
  unsigned int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r3
  int v19; // r6
  unsigned int v20; // r0
  char *v21; // r1
  int v22; // r2
  int v24; // [sp+4h] [bp-5Ch]
  int v25; // [sp+1Ch] [bp-44h] BYREF
  _BYTE v26[4]; // [sp+24h] [bp-3Ch] BYREF
  _DWORD v27[14]; // [sp+28h] [bp-38h] BYREF

  sub_F06B2((int)v26);
  v11 = sub_F0734();
  v12 = v11;
  if ( !(*(unsigned __int8 *)v11 << 31) )
  {
    *(_WORD *)v11 = 0;
LABEL_4:
    v15 = 9;
    goto LABEL_6;
  }
  *(_BYTE *)v11[2] = 0;
  v13 = *(unsigned __int8 *)v11;
  v14 = *v11;
  v11[1] = 0;
  if ( !(v13 << 31) )
    goto LABEL_4;
  v15 = (v14 - 2) & 0xFFFFFFFE;
LABEL_6:
  v16 = *a4;
  v17 = *a5;
  v18 = *a6;
  v19 = *a7;
  v27[7] = 0;
  v27[4] = v18;
  v27[5] = 0;
  v27[6] = v19;
  v27[2] = v17;
  v27[3] = 0;
  v27[0] = v16;
  v27[1] = 0;
  sub_DCA40(&v25, (int)v12, v15, a2, a3, v24, 8481, 0, (int)v27, 0);
  v20 = *(unsigned __int8 *)v12;
  v21 = (char *)v12[2];
  v22 = v12[1];
  if ( (v20 & 1) == 0 )
  {
    v21 = (char *)v12 + 1;
    v22 = v20 >> 1;
  }
  sub_ED4F8(a1, v21, v22);
  return sub_F0720((int)v26);
}


// ======================================================================
// ADDR: 0x2240f8
// SYMBOL: sub_2240F8
int __fastcall sub_2240F8(int (__fastcall *a1)(_BYTE *, int), int a2)
{
  int result; // r0
  _DWORD v5[3]; // [sp+0h] [bp-370h] BYREF
  int (__fastcall *v6)(int, char *, _BYTE *); // [sp+Ch] [bp-364h]
  int v7; // [sp+14h] [bp-35Ch]
  unsigned int v8; // [sp+20h] [bp-350h]
  char v9[8]; // [sp+28h] [bp-348h] BYREF
  __int64 v10; // [sp+30h] [bp-340h]
  __int64 v11; // [sp+38h] [bp-338h]
  __int64 v12; // [sp+40h] [bp-330h]
  __int64 v13; // [sp+48h] [bp-328h]
  __int64 v14; // [sp+50h] [bp-320h]
  __int64 v15; // [sp+58h] [bp-318h]
  __int64 v16; // [sp+60h] [bp-310h]
  __int64 v17; // [sp+68h] [bp-308h]
  unsigned __int64 v18; // [sp+70h] [bp-300h]
  __int64 v19; // [sp+78h] [bp-2F8h]
  __int64 v20[42]; // [sp+80h] [bp-2F0h] BYREF
  _BYTE v21[416]; // [sp+1D0h] [bp-1A0h] BYREF

  sub_224220(v20);
  sub_222BB0((int)v21, v20);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  strcpy(v9, "CLNGUNW");
  while ( !sub_222E9C((int)v21, (int)v5) )
  {
    v18 = __PAIR64__(v8, v5[0]);
    LODWORD(v19) = v7;
    if ( !v6 || v6(8, v9, v21) != 8 )
      break;
    result = a1(v21, a2);
    if ( result )
      return result;
  }
  return 5;
}


// ======================================================================
