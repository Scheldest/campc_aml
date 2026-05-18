// ADDR: 0x18ba18
// SYMBOL: sub_18BA18
int __fastcall sub_18BA18(int result)
{
  *(_DWORD *)result = &off_22FFF0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_QWORD *)(result + 4) = 0xEFCDAB8967452301LL;
  *(_QWORD *)(result + 12) = 0x1032547698BADCFELL;
  *(_DWORD *)(result + 20) = -1009589776;
  return result;
}


// ======================================================================
// ADDR: 0x18ba58
// SYMBOL: sub_18BA58
_DWORD *__fastcall sub_18BA58(int a1)
{
  _QWORD *v1; // r0
  _DWORD *result; // r0

  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v1 = (_QWORD *)(a1 + 4);
  *v1 = 0xEFCDAB8967452301LL;
  v1[1] = 0x1032547698BADCFELL;
  result = v1 + 2;
  *result = -1009589776;
  return result;
}


// ======================================================================
// ADDR: 0x18ba88
// SYMBOL: sub_18BA88
int __fastcall sub_18BA88(int result)
{
  *(_DWORD *)result = &off_22FFF0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_QWORD *)(result + 4) = 0xEFCDAB8967452301LL;
  *(_QWORD *)(result + 12) = 0x1032547698BADCFELL;
  *(_DWORD *)(result + 20) = -1009589776;
  return result;
}


// ======================================================================
// ADDR: 0x18c9ec
// SYMBOL: sub_18C9EC
int __fastcall sub_18C9EC(int a1, char *src, unsigned int a3)
{
  __int64 v5; // r0
  unsigned int v7; // r11
  unsigned int v8; // r6
  unsigned int v9; // r0

  v5 = *(_QWORD *)(a1 + 24);
  v7 = ((unsigned int)v5 >> 3) & 0x3F;
  *(_QWORD *)(a1 + 24) = v5 + __PAIR64__(a3 >> 29, 8 * a3);
  if ( v7 + a3 < 0x40 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 64 - v7;
    j_memcpy((void *)(a1 + 32 + v7), src, 64 - v7);
    sub_18BAC8((_DWORD *)a1, (int *)(a1 + 4), (void *)(a1 + 32));
    v9 = v7 ^ 0x7F;
    while ( v9 < a3 )
    {
      sub_18BAC8((_DWORD *)a1, (int *)(a1 + 4), &src[v8]);
      v9 = v8 + 127;
      v8 += 64;
    }
    v7 = 0;
  }
  return sub_2242EC(a1 + v7 + 32, &src[v8], a3 - v8);
}


// ======================================================================
// ADDR: 0x18ca7c
// SYMBOL: sub_18CA7C
int __fastcall sub_18CA7C(int a1)
{
  int v2; // r0
  unsigned int v3; // r3
  char v4; // r1
  int v5; // r0
  int i; // r2
  char v7; // r5
  int v8; // r3
  int v9; // r5
  _DWORD v11[4]; // [sp+0h] [bp-10h] BYREF

  v2 = 0;
  v3 = 0;
  v11[0] = 0;
  v11[1] = 0;
  do
  {
    v4 = ~(_BYTE)v2 & 0x18;
    v2 += 8;
    *((_BYTE *)v11 + v3) = *(_DWORD *)(a1 + 4 * (v3 < 4) + 24) >> v4;
    ++v3;
  }
  while ( v3 != 8 );
  sub_18C9EC(a1, byte_8F5EB, 1u);
  while ( (*(_DWORD *)(a1 + 24) & 0x1F8) != 0x1C0 )
    sub_18C9EC(a1, byte_BEB4C, 1u);
  sub_18C9EC(a1, (char *)v11, 8u);
  v5 = 0;
  for ( i = 0; i != 20; ++i )
  {
    v7 = ~(_BYTE)v5 & 0x18;
    v5 += 8;
    v8 = *(_DWORD *)((i & 0xFFFFFFFC) + a1 + 4) >> v7;
    v9 = a1 + i;
    *(_BYTE *)(v9 + 96) = v8;
  }
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return sub_18BAC8((_DWORD *)a1, (int *)(a1 + 4), (void *)(a1 + 32));
}


// ======================================================================
// ADDR: 0x18cb50
// SYMBOL: sub_18CB50
int __fastcall sub_18CB50(int a1)
{
  return a1 + 96;
}


// ======================================================================
