// ADDR: 0x18702c
// SYMBOL: sub_18702C
unsigned int sub_18702C()
{
  int *v0; // r6
  int v1; // r0
  int v2; // r2
  int v3; // r10
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r2
  bool v7; // zf
  int v8; // r4
  unsigned int v9; // r3
  int v10; // r5
  int v11; // r2
  unsigned int v12; // r1
  int v13; // r3
  int v14; // r9
  int v15; // t1
  unsigned int v16; // r4
  bool v17; // cf
  unsigned int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r0

  v0 = dword_381D88;
  if ( dword_2390B4 <= -2 )
  {
    v1 = 4357;
    v2 = 1;
    dword_381D88[0] = 4357;
    do
    {
      v1 *= (_DWORD)&elf_gnu_hash_bucket[452] + 1;
      dword_381D88[v2++] = v1;
    }
    while ( v2 != 624 );
  }
  v3 = dword_381D8C;
  dword_38274C = (int)&dword_381D8C;
  dword_2390B4 = 623;
  v4 = 0;
  v5 = dword_381D88[0];
  do
  {
    v6 = (v5 & 0x80000000) + (v3 & 0x7FFFFFFE);
    v7 = v3 << 31 == 0;
    v8 = v3;
    v9 = (v6 >> 1) ^ 0x9908B0DF;
    v3 = dword_381D88[v4 + 2];
    if ( v7 )
      v9 = v6 >> 1;
    dword_381D88[v4] = v9 ^ dword_381D88[v4 + 397];
    ++v4;
    v5 = v8;
  }
  while ( v4 != 227 );
  v10 = -396;
  v11 = 0;
  do
  {
    v12 = (v3 & 0x7FFFFFFE) + (v8 & 0x80000000);
    v13 = v3;
    v15 = *v0++;
    v14 = v15;
    v3 = dword_382114[v11 + 2];
    v16 = (v12 >> 1) ^ 0x9908B0DF;
    if ( !(v13 << 31) )
      v16 = v12 >> 1;
    dword_382114[v11++] = v16 ^ v14;
    v17 = __CFADD__(v10++, 1);
    v8 = v13;
  }
  while ( !v17 );
  v18 = dword_381D88[0];
  v19 = *v0 ^ (((v13 & 0x80000000) + (dword_381D88[0] & 0x7FFFFFFE)) >> 1);
  if ( dword_381D88[0] << 31 )
    v19 ^= 0x9908B0DF;
  dword_382114[v11] = v19;
  v20 = v18 ^ (v18 >> 11) ^ ((v18 ^ (v18 >> 11)) << 7) & 0x9D2C5680;
  return v20 ^ (v20 << 15) & 0xEFC60000 ^ ((v20 ^ (v20 << 15) & 0xEFC60000) >> 18);
}


// ======================================================================
