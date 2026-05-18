// ADDR: 0x17fe12
// SYMBOL: sub_17FE12
int __fastcall sub_17FE12(_DWORD *a1)
{
  int v1; // r1
  _DWORD *v2; // r5
  int i; // r2
  void *v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0

  v1 = a1[495];
  v2 = a1 + 495;
  for ( i = a1[498]; v1 != i; a1[497] = v8 )
  {
    if ( !*(_BYTE *)(v1 + 56) )
      break;
    v5 = *(void **)(v1 + 48);
    v1 = *(_DWORD *)(v1 + 60);
    *v2 = v1;
    if ( v5 )
    {
      operator delete[](v5);
      v1 = a1[495];
      i = a1[498];
    }
    v6 = a1[497];
    v7 = a1[499];
    *(_BYTE *)(v6 + 56) = 0;
    v8 = *(_DWORD *)(v6 + 60);
    a1[499] = v7 + 1;
  }
  return sub_182F62(v2);
}


// ======================================================================
// ADDR: 0x186fec
// SYMBOL: sub_186FEC
int __fastcall sub_186FEC(int a1)
{
  return usleep(1000 * a1);
}


// ======================================================================
// ADDR: 0x1871d0
// SYMBOL: sub_1871D0
int __fastcall sub_1871D0(int a1)
{
  int v2; // r0
  int v3; // r5
  _DWORD *v4; // r4

  *(_DWORD *)(a1 + 24) = 16;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v2 = operator new[](0x40u);
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 12) = v2;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 100) = 16;
  *(_DWORD *)(a1 + 84) = 0;
  v3 = 0;
  *(_DWORD *)(a1 + 88) = operator new[](0x40u);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  do
  {
    v4 = (_DWORD *)(a1 + v3);
    *(_DWORD *)(a1 + v3 + 116) = 16;
    v3 += 16;
    v4[26] = operator new[](0x40u);
    v4[27] = 0;
    v4[28] = 0;
  }
  while ( v3 != 64 );
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  sub_17D4C0(a1 + 192, 560);
  *(_DWORD *)(a1 + 956) = 16;
  *(_DWORD *)(a1 + 944) = operator new[](0x80u);
  *(_DWORD *)(a1 + 948) = 0;
  *(_DWORD *)(a1 + 952) = 0;
  sub_17E0B0(a1 + 1044);
  *(_DWORD *)(a1 + 1668) = 0;
  *(_DWORD *)(a1 + 1672) = 0;
  *(_DWORD *)(a1 + 1676) = 0;
  sub_17E3A0(a1 + 1696);
  *(_DWORD *)(a1 + 736) = 10000;
  *(_BYTE *)(a1 + 1664) = 0;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  sub_187396(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x189d3c
// SYMBOL: sub_189D3C
_DWORD *__fastcall sub_189D3C(_DWORD *result, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // r2

  result[420] = a3;
  result[423] = a6;
  v6 = result[182];
  result[421] = a4;
  result[422] = a5;
  if ( v6 < 2 * (a6 + a5) )
    result[182] = 2 * (a6 + a5);
  return result;
}


// ======================================================================
// ADDR: 0x18cb94
// SYMBOL: sub_18CB94
int __fastcall sub_18CB94(int a1, unsigned int a2, int a3, const char *a4)
{
  int v6; // r4
  bool v7; // zf
  in_addr_t v8; // r0
  int optval; // [sp+4h] [bp-2Ch] BYREF
  sockaddr addr; // [sp+8h] [bp-28h] BYREF

  v6 = socket(2, 2, 0);
  if ( v6 == -1 )
    return -1;
  optval = 1;
  setsockopt(v6, 1, 2, &optval, 4);
  optval = 0x40000;
  setsockopt(v6, 1, 8, &optval, 4);
  optval = 0x4000;
  setsockopt(v6, 1, 7, &optval, 4);
  if ( fcntl(v6, 4, 2048) )
    return -1;
  setsockopt(v6, 1, 6, &optval, 4);
  *(_WORD *)addr.sa_data = __rev16(a2);
  addr.sa_family = 2;
  v7 = a4 == 0;
  if ( a4 )
    v7 = *a4 == 0;
  if ( v7 )
    v8 = 0;
  else
    v8 = inet_addr(a4);
  *(_DWORD *)&addr.sa_data[2] = v8;
  if ( bind(v6, &addr, 16) == -1 )
    return -1;
  return v6;
}


// ======================================================================
// ADDR: 0x18cdae
// SYMBOL: sub_18CDAE
struct hostent *__fastcall sub_18CDAE(int a1, char *a2)
{
  struct hostent *result; // r0
  struct hostent *v4; // r5
  unsigned int v5; // r6
  char *v6; // r0
  char v8[96]; // [sp+0h] [bp-60h] BYREF

  result = (struct hostent *)(gethostname(v8, 0x50u) + 1);
  if ( result )
  {
    result = gethostbyname(v8);
    if ( result )
    {
      v4 = result;
      result = (struct hostent *)*result->h_addr_list;
      if ( result )
      {
        v5 = 0;
        do
        {
          v6 = inet_ntoa((struct in_addr)result->h_name);
          strcpy(a2, v6);
          result = (struct hostent *)v4->h_addr_list[v5 + 1];
          if ( !result )
            break;
          a2 += 16;
        }
        while ( v5++ < 9 );
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x18ce02
// SYMBOL: sub_18CE02
unsigned int __fastcall sub_18CE02(int a1, int fd)
{
  int v2; // r0
  unsigned int v3; // r2
  int v4; // r1
  socklen_t len; // [sp+4h] [bp-1Ch] BYREF
  struct sockaddr addr; // [sp+8h] [bp-18h] BYREF

  len = 16;
  v2 = getsockname(fd, &addr, &len);
  v3 = bswap32(*(unsigned __int16 *)addr.sa_data);
  v4 = 0;
  if ( !v2 )
    return HIWORD(v3);
  return v4;
}


// ======================================================================
