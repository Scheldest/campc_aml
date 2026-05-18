// ADDR: 0x182fae
// SYMBOL: sub_182FAE
int __fastcall sub_182FAE(_DWORD *a1)
{
  int v1; // r1
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r2
  _DWORD *v6; // r6
  int result; // r0

  v1 = a1[2];
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 288);
  v5 = v1;
  a1[3] = v4;
  do
  {
    v5 = *(_DWORD *)(v5 + 288);
    ++v3;
  }
  while ( v5 != v1 );
  if ( (unsigned int)(v3 - 1) < 9 )
  {
    v6 = v4;
  }
  else
  {
    do
    {
      v6 = (_DWORD *)v4[72];
      operator delete(v4);
      --v3;
      v4 = v6;
      a1[3] = v6;
    }
    while ( v3 > 9 );
    v1 = a1[2];
  }
  result = 0;
  a1[3] = v1;
  *(_DWORD *)(v1 + 288) = v6;
  *a1 = v1;
  a1[1] = v1;
  a1[4] = 0;
  a1[5] = 0;
  return result;
}


// ======================================================================
