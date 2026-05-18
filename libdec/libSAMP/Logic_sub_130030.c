// ADDR: 0x12ac34
// SYMBOL: sub_12AC34
int __fastcall sub_12AC34(int a1, int a2, int a3, int a4, int a5, int a6, float a7)
{
  int v7; // r4
  int v11; // r0

  v7 = *(_DWORD *)(a1 + 4);
  v11 = sub_165778(a5, a2);
  if ( a6 )
    return sub_17443A(v7, a2, a3, a4, v11);
  else
    return sub_1742E2(v7, a2, a3, a4, v11, a7);
}


// ======================================================================
// ADDR: 0x12ac7e
// SYMBOL: sub_12AC7E
int __fastcall sub_12AC7E(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v7; // r3

  v4 = *(_DWORD *)(a1 + 4);
  v7 = sub_165778(a4, a2);
  return sub_173720(v4, a2, a3, v7);
}


// ======================================================================
// ADDR: 0x130514
// SYMBOL: sub_130514
void __fastcall sub_130514(int a1, unsigned __int8 *a2)
{
  char *v3; // r2
  void *v4[5]; // [sp+4h] [bp-14h] BYREF

  v3 = (char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v3 = (char *)(a2 + 1);
  sub_DC6DC(v4, v3);
  sub_13D450(*(_DWORD *)(a1 + 84), v4);
  if ( LOBYTE(v4[0]) << 31 )
    operator delete(v4[2]);
}


// ======================================================================
// ADDR: 0x13055c
// SYMBOL: sub_13055C
int __fastcall sub_13055C(int a1, char *src)
{
  size_t v4; // r5
  char *v5; // r0
  void *v6; // r4

  if ( !*src )
  {
    v4 = 0;
    *(_BYTE *)a1 = 0;
    v6 = (void *)(a1 + 1);
    goto LABEL_11;
  }
  v4 = 0;
  do
    v5 = &src[v4++];
  while ( v5[1] );
  if ( v4 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  if ( v4 >= 0xB )
  {
    v6 = (void *)operator new((v4 + 16) & 0xFFFFFFF0);
    *(_DWORD *)a1 = ((v4 + 16) & 0xFFFFFFF0) + 1;
    *(_DWORD *)(a1 + 4) = v4;
    *(_DWORD *)(a1 + 8) = v6;
    goto LABEL_10;
  }
  *(_BYTE *)a1 = 2 * v4;
  v6 = (void *)(a1 + 1);
  if ( v4 )
  {
LABEL_10:
    j_memcpy(v6, src, v4);
    goto LABEL_11;
  }
  v4 = 0;
LABEL_11:
  *((_BYTE *)v6 + v4) = 0;
  return a1;
}


// ======================================================================
