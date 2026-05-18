// ADDR: 0x179dc0
// SYMBOL: sub_179DC0
int __fastcall sub_179DC0(unsigned __int16 *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r9
  int v5; // r10
  int v6; // r5
  int v7; // lr
  int v8; // r12
  int v9; // r6
  int v10; // r8
  int v11; // r4
  int v12; // r6

  v4 = *a1;
  if ( a3 + a2 <= v4 )
  {
    v7 = 0;
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = a1[1];
      if ( v7 >= v8 )
      {
        a1 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
        v12 = *a1 - v4;
        v4 = *a1;
        if ( v12 + v6 > a3 )
          v12 = a3 - v6;
        v10 = v12 * (v7 - v8);
      }
      else
      {
        a1 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
        v9 = v8 - v7;
        v7 = v8;
        v10 = v9 * v6;
        v11 = *a1;
        if ( v4 >= a2 )
          v12 = v11 - v4;
        else
          v12 = v11 - a2;
        v4 = *a1;
      }
      v6 += v12;
      v5 += v10;
    }
    while ( a3 + a2 > v4 );
  }
  *a4 = v5;
  return v7;
}


// ======================================================================
// ADDR: 0x2243ac
// SYMBOL: sub_2243AC
void __fastcall sub_2243AC(void *base, size_t nmemb, size_t size, __compar_fn_t compar)
{
  qsort(base, nmemb, size, compar);
}


// ======================================================================
