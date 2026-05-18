// ADDR: 0x17e50e
// SYMBOL: sub_17E50E
int __fastcall sub_17E50E(int *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // lr
  unsigned int v4; // r3
  int v5; // r12
  int result; // r0
  unsigned int v7; // r2
  int v8; // r0
  unsigned int v9; // r2
  void *v10; // r0

  v2 = a1[2];
  v1 = a1[1];
  v4 = a1[3];
  v5 = 0;
  result = v2 - v1;
  if ( v2 < v1 )
    v5 = -v4;
  if ( result != v5 )
  {
    do
    {
      v7 = v1 + 1;
      v8 = *a1;
      v1 = v1 + 1 - v4;
      if ( v1 )
        v1 = v7;
      v9 = v1;
      a1[1] = v1;
      if ( !v1 )
        v9 = v4;
      v10 = *(void **)(v8 + 4 * v9 - 4);
      if ( v10 )
      {
        operator delete(v10);
        v2 = a1[2];
        v1 = a1[1];
        v4 = a1[3];
      }
      result = 0;
      if ( v2 < v1 )
        result = -v4;
    }
    while ( v2 - v1 != result );
  }
  return result;
}


// ======================================================================
