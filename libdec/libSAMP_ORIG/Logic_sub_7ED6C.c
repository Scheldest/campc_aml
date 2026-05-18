// ADDR: 0x7fd38
// SYMBOL: sub_7FD38
_DWORD *__fastcall sub_7FD38(_DWORD *a1, const void **a2)
{
  _BYTE *v4; // r1
  _BYTE *v5; // r2
  int v6; // r8
  char *v7; // r0
  char *v8; // r6
  const void *v9; // r1
  signed int v10; // r5

  *a1 = 0;
  a1[1] = 0;
  v4 = *a2;
  v5 = a2[1];
  a1[2] = 0;
  v6 = v5 - v4;
  if ( v5 != v4 )
  {
    if ( v6 <= -1 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    v7 = (char *)operator new(v5 - v4);
    v8 = v7;
    a1[2] = &v7[v6];
    *a1 = v7;
    a1[1] = v7;
    v9 = *a2;
    v10 = (_BYTE *)a2[1] - (_BYTE *)*a2;
    if ( v10 >= 1 )
    {
      j_memcpy(v7, v9, v10);
      v8 += v10;
    }
    a1[1] = v8;
  }
  return a1;
}


// ======================================================================
// ADDR: 0x860c0
// SYMBOL: sub_860C0
bool __fastcall sub_860C0(_DWORD *a1)
{
  unsigned int v1; // r1
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r1
  unsigned int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r3
  unsigned int v10; // r1
  unsigned int v11; // r3

  v1 = -1;
  v2 = 4;
  do
  {
    v3 = *((unsigned __int8 *)a1 + v2++);
    v4 = v1 ^ v3;
    v5 = (v4 >> 1) ^ 0x82F63B78;
    if ( !(v4 << 31) )
      v5 = v4 >> 1;
    v6 = (v5 >> 1) ^ 0x82F63B78;
    if ( !(v5 << 31) )
      v6 = v5 >> 1;
    v7 = (v6 >> 1) ^ 0x82F63B78;
    if ( !(v6 << 31) )
      v7 = v6 >> 1;
    v8 = (v7 >> 1) ^ 0x82F63B78;
    if ( !(v7 << 31) )
      v8 = v7 >> 1;
    v9 = (v8 >> 1) ^ 0x82F63B78;
    if ( !(v8 << 31) )
      v9 = v8 >> 1;
    v10 = (v9 >> 1) ^ 0x82F63B78;
    if ( !(v9 << 31) )
      v10 = v9 >> 1;
    v11 = (v10 >> 1) ^ 0x82F63B78;
    if ( !(v10 << 31) )
      v11 = v10 >> 1;
    v1 = (v11 >> 1) ^ 0x82F63B78;
    if ( !(v11 << 31) )
      v1 = v11 >> 1;
  }
  while ( v2 != 24 );
  return *a1 + v1 == -1;
}


// ======================================================================
// ADDR: 0x86b00
// SYMBOL: sub_86B00
unsigned __int64 sub_86B00()
{
  unsigned __int64 result; // r0

  result = __ldrexd(&qword_1ABEA8);
  __clrex();
  return result;
}


// ======================================================================
