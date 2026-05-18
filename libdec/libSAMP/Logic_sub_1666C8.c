// ADDR: 0x165460
// SYMBOL: sub_165460
void *__fastcall sub_165460(const char *a1)
{
  size_t v2; // r5
  void *v3; // r6

  v2 = strlen(a1) + 1;
  if ( dword_381B58 )
    ++*(_DWORD *)(dword_381B58 + 880);
  v3 = (void *)off_2390AC(v2, dword_381B60);
  j_memcpy(v3, a1, v2);
  return v3;
}


// ======================================================================
// ADDR: 0x16560c
// SYMBOL: sub_16560C
int __fastcall sub_16560C(_BYTE *a1, int a2, int a3)
{
  int v3; // r12
  _BYTE *v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r0
  int v7; // r2
  int v8; // r4
  unsigned __int8 *v9; // r1
  int v10; // r2
  bool v11; // zf

  v3 = ~a3;
  if ( a2 )
  {
    v4 = a1 + 1;
    v5 = a2 - 1;
    v6 = ~a3;
    do
    {
      v7 = (unsigned __int8)*(v4 - 1);
      if ( v7 == 35 && v5 >= 2 && *v4 == 35 && v4[1] == 35 )
        v6 = v3;
      ++v4;
      --v5;
      v6 = dword_BAF58[v7 ^ (unsigned __int8)v6] ^ (v6 >> 8);
    }
    while ( v5 != -1 );
  }
  else
  {
    v8 = (unsigned __int8)*a1;
    if ( *a1 )
    {
      v9 = a1 + 1;
      v6 = ~a3;
      do
      {
        v10 = v8;
        v8 = *v9;
        v11 = v10 == 35;
        if ( v10 == 35 )
          v11 = v8 == 35;
        if ( v11 )
        {
          v8 = 35;
          if ( v9[1] == 35 )
            v6 = v3;
        }
        ++v9;
        v6 = dword_BAF58[v10 ^ (unsigned __int8)v6] ^ (v6 >> 8);
      }
      while ( v8 );
    }
    else
    {
      v6 = ~a3;
    }
  }
  return ~v6;
}


// ======================================================================
// ADDR: 0x166998
// SYMBOL: sub_166998
int __fastcall sub_166998(int a1)
{
  __int64 v2; // d20
  __int64 v3; // d21
  int result; // r0

  sub_22178C(a1, 0x48u);
  *(_QWORD *)(a1 + 88) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(a1 + 96) = 0xFF7FFFFFFF7FFFFFLL;
  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = -1082130432;
  *(_QWORD *)(a1 + 148) = 0x100000001LL;
  *(_QWORD *)(a1 + 156) = -1LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 72) = v2;
  *(_QWORD *)(a1 + 80) = v3;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 104) = 0x100000000LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 122) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_WORD *)(a1 + 120) = 0;
  result = a1;
  *(_QWORD *)(a1 + 236) = 0LL;
  *(_QWORD *)(a1 + 244) = 0LL;
  return result;
}


// ======================================================================
// ADDR: 0x166a58
// SYMBOL: sub_166A58
int __fastcall sub_166A58(int a1, int a2)
{
  *(_DWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  sub_172794(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x166ad4
// SYMBOL: sub_166AD4
int __fastcall sub_166AD4(int a1, _BYTE *a2, int a3)
{
  int v3; // r3
  int result; // r0
  int v5; // r1

  v3 = a3;
  if ( a3 )
    v3 = a3 - (_DWORD)a2;
  result = sub_16560C(a2, v3, *(_DWORD *)(*(_DWORD *)(a1 + 460) + 4 * *(_DWORD *)(a1 + 452) - 4));
  v5 = dword_381B58 + 6608;
  if ( *(_DWORD *)(dword_381B58 + 6608) == result )
    *(_DWORD *)(dword_381B58 + 6612) = result;
  if ( *(_DWORD *)(v5 + 44) == result )
    *(_BYTE *)(v5 + 48) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x17bda0
// SYMBOL: sub_17BDA0
_DWORD *__fastcall sub_17BDA0(_DWORD *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  result[8] = 0;
  return result;
}


// ======================================================================
