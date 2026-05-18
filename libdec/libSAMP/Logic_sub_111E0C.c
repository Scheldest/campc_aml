// ADDR: 0x111e56
// SYMBOL: sub_111E56
_DWORD *__fastcall sub_111E56(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5

  v4 = (_DWORD *)operator new(0x10u);
  *v4 = 1;
  sub_111EC2(v4 + 1, a2);
  *a1 = v4;
  return a1;
}


// ======================================================================
// ADDR: 0x111e8a
// SYMBOL: sub_111E8A
unsigned int **__fastcall sub_111E8A(unsigned int **a1)
{
  unsigned int *v2; // r0
  unsigned int v3; // r1
  unsigned int *v4; // r5

  v2 = *a1;
  if ( v2 )
  {
    __dmb(0xBu);
    do
      v3 = __ldrex(v2);
    while ( __strex(v3 - 1, v2) );
    __dmb(0xBu);
    if ( v3 == 1 )
    {
      v4 = *a1;
      if ( *a1 )
      {
        sub_111F4A(v4 + 1);
        operator delete(v4);
      }
    }
  }
  return a1;
}


// ======================================================================
