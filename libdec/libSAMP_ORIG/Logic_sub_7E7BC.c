// ADDR: 0x860ba
// SYMBOL: sub_860BA
int __fastcall sub_860BA(int a1)
{
  return *(unsigned __int16 *)(a1 + 18) + 24;
}


// ======================================================================
// ADDR: 0x8613e
// SYMBOL: sub_8613E
unsigned int *__fastcall sub_8613E(unsigned int *result)
{
  unsigned int v1; // r3
  int v2; // lr
  int v3; // r2
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r2

  v1 = -1;
  v2 = 4;
  do
  {
    v3 = *((unsigned __int8 *)result + v2++);
    v4 = v3 ^ v1;
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
  *result = ~v1;
  return result;
}


// ======================================================================
