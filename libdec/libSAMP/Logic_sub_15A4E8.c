// ADDR: 0x15b1dc
// SYMBOL: sub_15B1DC
int __fastcall sub_15B1DC(int a1, int a2, int a3)
{
  int v5; // r6
  int v7; // [sp+0h] [bp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 1065353216;
  if ( a3 )
  {
    v5 = 8 * a3;
    do
    {
      sub_15B79A(&v7, a1, a2, a2);
      v5 -= 8;
      a2 += 8;
    }
    while ( v5 );
  }
  return a1;
}


// ======================================================================
// ADDR: 0x15bb58
// SYMBOL: sub_15BB58
int **__fastcall sub_15BB58(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  int ***v9; // r0
  int **i; // r6
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v4 = *a2;
    v5 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v6 = (16843009 * ((v5 + (v5 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v6 > 1 )
    {
      if ( v2 <= v4 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
      else
      {
        v7 = *a2;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(int ****)(*a1 + 4 * v7);
    if ( v9 )
    {
      for ( i = *v9; i; i = (int **)*i )
      {
        v11 = (unsigned int)i[1];
        if ( v11 == v4 )
        {
          if ( *((unsigned __int8 *)i + 8) == v4 )
            return i;
        }
        else
        {
          if ( v6 > 1 )
          {
            if ( v11 >= v2 )
            {
              sub_221798(v11, v2);
              v11 = v12;
            }
          }
          else
          {
            v11 &= v2 - 1;
          }
          if ( v11 != v7 )
            return 0;
        }
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x17e596
// SYMBOL: sub_17E596
bool __fastcall sub_17E596(int a1, int a2)
{
  return (*(_DWORD *)a1 ^ *(_DWORD *)a2 | *(unsigned __int16 *)(a2 + 4) ^ *(unsigned __int16 *)(a1 + 4)) != 0;
}


// ======================================================================
