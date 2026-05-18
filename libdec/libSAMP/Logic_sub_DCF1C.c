// ADDR: 0xdcf30
// SYMBOL: sub_DCF30
int __fastcall sub_DCF30(int result, char *a2, char *a3)
{
  int v3; // r6
  char *v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r2
  unsigned int v8; // r2
  _BYTE *v9; // r0
  char *v10; // r1
  char v11; // t1

  if ( a2 != a3 )
  {
    v3 = result;
    result = *(_DWORD *)(result + 8);
    v5 = a2;
    do
    {
      v6 = a3 - v5;
      v7 = *(_DWORD *)(v3 + 12);
      if ( v7 < result + a3 - v5 )
      {
        (**(void (__fastcall ***)(int))v3)(v3);
        v7 = *(_DWORD *)(v3 + 12);
        result = *(_DWORD *)(v3 + 8);
      }
      if ( v7 - result < v6 )
        v6 = v7 - result;
      if ( v6 )
      {
        v8 = v6;
        v9 = (_BYTE *)(result + *(_DWORD *)(v3 + 4));
        v10 = v5;
        do
        {
          v11 = *v10++;
          --v8;
          *v9++ = v11;
        }
        while ( v8 );
        result = *(_DWORD *)(v3 + 8);
      }
      result += v6;
      v5 += v6;
      *(_DWORD *)(v3 + 8) = result;
    }
    while ( v5 != a3 );
  }
  return result;
}


// ======================================================================
