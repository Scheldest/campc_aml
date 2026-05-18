// ADDR: 0x159a70
// SYMBOL: sub_159A70
_DWORD *__fastcall sub_159A70(_DWORD *a1, int *a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r9
  int v7; // r8
  int v8; // r1
  _DWORD *v9; // r0
  _DWORD *v10; // r6
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
      v7 = *a2;
      if ( v4 >= v2 )
      {
        sub_221798(v4, v2);
        v7 = v8;
      }
    }
    else
    {
      v7 = (v2 - 1) & v4;
    }
    v9 = *(_DWORD **)(*a1 + 4 * v7);
    if ( v9 )
    {
      v10 = (_DWORD *)*v9;
      if ( *v9 )
      {
        do
        {
          v11 = v10[1];
          if ( v4 == v11 )
          {
            if ( v10[2] == v4 )
              return v10;
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
          v10 = (_DWORD *)*v10;
        }
        while ( v10 );
      }
    }
  }
  return 0;
}


// ======================================================================
