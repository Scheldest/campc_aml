// ADDR: 0x15fae4
// SYMBOL: sub_15FAE4
_DWORD *__fastcall sub_15FAE4(_DWORD *a1, int *a2)
{
  unsigned int v2; // r4
  int v3; // r9
  unsigned int v5; // r1
  unsigned int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r10
  unsigned int v9; // r8
  unsigned int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r1

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a2;
    v5 = (1540483477 * ((1540483477 * *a2) ^ ((unsigned int)(1540483477 * *a2) >> 24))) ^ 0x6F47A654;
    v6 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
    v7 = ((v2 - ((v2 >> 1) & 0x55555555)) & 0x33333333) + (((v2 - ((v2 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v8 = (16843009 * ((v7 + (v7 >> 4)) & 0xF0F0F0F)) >> 24;
    if ( v8 > 1 )
    {
      if ( v6 >= v2 )
      {
        sub_221798(v6, v2);
        v9 = v10;
      }
      else
      {
        v9 = (1540483477 * (v5 ^ (v5 >> 13))) ^ ((1540483477 * (v5 ^ (v5 >> 13))) >> 15);
      }
    }
    else
    {
      v9 = v6 & (v2 - 1);
    }
    v11 = *(_DWORD **)(*a1 + 4 * v9);
    if ( v11 )
    {
      v12 = (_DWORD *)*v11;
      if ( *v11 )
      {
        do
        {
          v13 = v12[1];
          if ( v6 == v13 )
          {
            if ( v12[2] == v3 )
              return v12;
          }
          else
          {
            if ( v8 > 1 )
            {
              if ( v13 >= v2 )
              {
                sub_221798(v13, v2);
                v13 = v14;
              }
            }
            else
            {
              v13 &= v2 - 1;
            }
            if ( v13 != v9 )
              return 0;
          }
          v12 = (_DWORD *)*v12;
        }
        while ( v12 );
      }
    }
  }
  return 0;
}


// ======================================================================
