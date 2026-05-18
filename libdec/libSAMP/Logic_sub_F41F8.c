// ADDR: 0xf41b8
// SYMBOL: sub_F41B8
int __fastcall sub_F41B8(_DWORD *a1)
{
  int v1; // r8
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int *v7; // r0
  int v8; // r5
  int *v9; // r4
  int v10; // t1
  int v11; // [sp+0h] [bp-E8h] BYREF

  v1 = *a1;
  result = sub_F5428(*a1);
  if ( !result )
  {
    v4 = *a1;
    v5 = a1[1];
    v6 = a1[2];
    v7 = a1 + 3;
    v8 = 212;
    v9 = &v11;
    do
    {
      v10 = *v7++;
      v8 -= 4;
      *v9++ = v10;
    }
    while ( v8 );
    return sub_F53E0(v1, v4, v5, v6);
  }
  return result;
}


// ======================================================================
