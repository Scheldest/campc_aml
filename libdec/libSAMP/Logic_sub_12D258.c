// ADDR: 0x12d67c
// SYMBOL: sub_12D67C
_DWORD *__fastcall sub_12D67C(_DWORD *a1)
{
  struct tm *v2; // r0
  char s[128]; // [sp+4h] [bp-8Ch] BYREF
  time_t timer; // [sp+84h] [bp-Ch] BYREF

  time(&timer);
  v2 = localtime(&timer);
  strftime(s, 0x80u, "[%H:%M:%S] ", v2);
  return sub_DC6DC(a1, s);
}


// ======================================================================
// ADDR: 0x12d6b4
// SYMBOL: sub_12D6B4
unsigned int __fastcall sub_12D6B4(_DWORD *a1, _DWORD *a2)
{
  __int64 *v3; // r6
  _DWORD *v4; // r4
  __int64 v5; // d16
  __int64 v6; // d17
  int v7; // r1
  __int64 v8; // d18
  __int64 v9; // d19
  unsigned int result; // r0

  v3 = (__int64 *)(a2 + 10);
  v4 = &a1[18 * a1[542]];
  *v4 = *a2;
  std::string::operator=(v4 + 1);
  std::string::operator=(v4 + 4);
  std::string::operator=(v4 + 7);
  v5 = *v3;
  v6 = v3[1];
  v3 += 2;
  v7 = a1[540];
  v8 = *v3;
  v9 = v3[1];
  *((_QWORD *)v4 + 5) = v5;
  *((_QWORD *)v4 + 6) = v6;
  *((_QWORD *)v4 + 7) = v8;
  *((_QWORD *)v4 + 8) = v9;
  if ( v7 == 30 )
    a1[541] = (a1[541] + 1) % 0x1Eu;
  else
    a1[540] = v7 + 1;
  result = (a1[542] + 1) % 0x1Eu;
  a1[542] = result;
  return result;
}


// ======================================================================
// ADDR: 0x12d75c
// SYMBOL: sub_12D75C
unsigned int __fastcall sub_12D75C(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r12
  unsigned int result; // r0
  _BYTE *v4; // r2

  v2 = *a2;
  v4 = (_BYTE *)*((_DWORD *)a2 + 2);
  result = *((_DWORD *)a2 + 1);
  if ( (v2 & 1) == 0 )
  {
    result = v2 >> 1;
    v4 = a2 + 1;
  }
  for ( ; result; ++v4 )
  {
    if ( (unsigned int)(unsigned __int8)*v4 - 1 <= 0x1E )
      *v4 = 32;
    --result;
  }
  return result;
}


// ======================================================================
