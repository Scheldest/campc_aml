// ADDR: 0x148db0
// SYMBOL: sub_148DB0
int __fastcall sub_148DB0(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  int *v8; // r4
  int result; // r0
  int v10; // r0
  int v11; // r2
  int i; // r1

  v8 = (int *)operator new(0x28u);
  sub_13DED4((int)v8, a3, a4);
  if ( a2 > 0x3EC )
    return 0;
  v10 = *v8;
  v11 = 0;
  a1[a2 + 1] = v8;
  *(_WORD *)(v10 + 20) = a2;
  if ( a4 )
    *(_BYTE *)(v10 + 24) = 1;
  *((_BYTE *)a1 + a2 + 4020) = 1;
  for ( i = 0; i != 1004; ++i )
  {
    if ( *((_BYTE *)a1 + i + 4020) )
      v11 = i;
  }
  result = 1;
  *a1 = v11;
  return result;
}


// ======================================================================
// ADDR: 0x14a3fc
// SYMBOL: sub_14A3FC
unsigned int __fastcall sub_14A3FC(int a1, int a2)
{
  return sub_107120(*(unsigned __int16 *)(a1 + 20), a2);
}


// ======================================================================
