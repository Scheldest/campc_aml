// ADDR: 0x17e100
// SYMBOL: sub_17E100
unsigned int __fastcall sub_17E100(int a1, unsigned __int8 *a2, size_t a3, unsigned __int8 *a4, _DWORD *a5)
{
  int v9; // r6
  size_t v10; // r10
  _BYTE *v11; // r5
  unsigned int result; // r0
  unsigned __int8 *v13; // r5
  unsigned int v14; // r1
  unsigned int v15; // r6
  unsigned __int8 *v16; // r0
  int i; // r1
  int v18; // [sp+4h] [bp-2Ch] BYREF
  __int16 v19; // [sp+8h] [bp-28h]
  int v20; // [sp+Ch] [bp-24h]
  unsigned __int8 v21; // [sp+12h] [bp-1Eh]
  unsigned __int8 v22; // [sp+13h] [bp-1Dh]

  v19 = 22719;
  v18 = -831661711;
  v20 = 0;
  v21 = sub_187150();
  v9 = ~(a3 + 5) & 0xF;
  v10 = v9 + a3;
  v22 = v9 | (16 * sub_187150());
  *a5 = v9 + a3 + 6;
  if ( a2 == a4 )
    j_memmove(&a2[v9 + 6], a2, a3);
  else
    j_memcpy(&a4[v9 + 6], a2, a3);
  a4[4] = v21;
  a4[5] = v22;
  if ( v9 )
  {
    v11 = a4 + 6;
    do
    {
      *v11++ = sub_187150();
      --v9;
    }
    while ( v9 );
  }
  sub_17DAA2((unsigned __int16 *)&v18, a4 + 4, v10 + 2);
  *(_DWORD *)a4 = v20;
  sub_18DE38(a1 + 576, a1, a4, 16, a4);
  result = *a5 - 16;
  if ( result >= 0x10 )
  {
    v13 = &a4[result];
    v14 = 0;
    do
    {
      v15 = result;
      v16 = &a4[v14];
      for ( i = 0; i != 16; ++i )
        v13[i] ^= v16[i];
      sub_18DE38(a1 + 576, a1, &a4[v15], 16, &a4[v15]);
      result = v15 - 16;
      v13 -= 16;
      v14 = v15;
    }
    while ( v15 - 16 > 0xF );
  }
  return result;
}


// ======================================================================
// ADDR: 0x1871a0
// SYMBOL: sub_1871A0
int sub_1871A0()
{
  float v0; // s0

  v0 = (double)sub_187150() * 2.32830644e-10;
  return LODWORD(v0);
}


// ======================================================================
