// ADDR: 0x14f20c
// SYMBOL: sub_14F20C
int __fastcall sub_14F20C(int a1)
{
  unsigned __int16 **v2; // r8
  unsigned __int16 *v3; // r5
  unsigned __int16 *v4; // r6
  int v5; // t1

  v2 = (unsigned __int16 **)(a1 + 9216);
  v3 = *(unsigned __int16 **)(a1 + 9216);
  v4 = *(unsigned __int16 **)(a1 + 9220);
  if ( v3 != v4 )
  {
    do
    {
      v5 = *v3++;
      sub_14F250(a1, v5, 0);
    }
    while ( v3 != v4 );
    v3 = *v2;
  }
  if ( v3 )
  {
    *(_DWORD *)(a1 + 9220) = v3;
    operator delete(v3);
  }
  return a1;
}


// ======================================================================
