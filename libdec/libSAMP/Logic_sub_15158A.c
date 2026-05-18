// ADDR: 0x158db0
// SYMBOL: sub_158DB0
int __fastcall sub_158DB0(int result)
{
  int *v1; // r5
  int *v2; // r6
  _DWORD *v3; // r4
  int v4; // t1

  v2 = *(int **)(result + 16);
  v1 = *(int **)(result + 12);
  v3 = (_DWORD *)result;
  if ( v1 != v2 )
  {
    do
    {
      v4 = *v1++;
      result = sub_164CC8(v3[2], v4);
    }
    while ( v1 != v2 );
    v1 = (int *)v3[3];
  }
  v3[4] = v1;
  return result;
}


// ======================================================================
