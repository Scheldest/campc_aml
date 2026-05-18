// ADDR: 0x1626e4
// SYMBOL: sub_1626E4
int __fastcall sub_1626E4(int a1, int a2)
{
  int v2; // r12
  int v3; // lr
  unsigned __int8 *v4; // r1
  int v5; // r0
  int v6; // r3
  unsigned int v7; // t1
  int v9; // [sp+8h] [bp-10h] BYREF
  int v10; // [sp+Ch] [bp-Ch] BYREF

  v10 = a2;
  v2 = a1 + 8;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(unsigned __int8 **)(a1 + 4);
    v5 = 0;
    v6 = v3;
    do
    {
      v7 = *v4++;
      --v6;
      v5 += v7 >> 7;
    }
    while ( v6 );
  }
  else
  {
    v5 = 0;
  }
  v9 = v3 - v5;
  return ((int (__fastcall *)(int, const char *, int, int *, int *, int))sub_162730)(3, "{}: {}/{}", 9, &v10, &v9, v2);
}


// ======================================================================
