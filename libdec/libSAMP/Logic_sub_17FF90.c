// ADDR: 0x184910
// SYMBOL: sub_184910
int __fastcall sub_184910(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r1

  v1 = (_DWORD *)result;
  v2 = 0;
  do
  {
    do
    {
      result = sub_187150(result);
      v1[v2++] = result;
    }
    while ( v2 != 4 );
    v3 = v1[3];
    *v1 |= 1u;
    v1[3] = v3 | 0x80000000;
    result = sub_184948(v1, 5);
    v2 = 0;
  }
  while ( !result );
  return result;
}


// ======================================================================
