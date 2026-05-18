// ADDR: 0x14b530
// SYMBOL: sub_14B530
int __fastcall sub_14B530(int a1, unsigned int a2, int a3)
{
  int result; // r0
  int v7; // r4
  int v8; // r4

  result = a2 >> 4;
  if ( a2 >> 4 <= 0x7C )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    result = sub_F2396(v7, a2);
    if ( result )
    {
      result = *(_DWORD *)(v7 + 4 * a2);
      if ( result )
      {
        result = *(_DWORD *)(a1 + 296);
        if ( result )
        {
          result = sub_104108(result);
          if ( !result )
          {
            result = *(_DWORD *)(v7 + 4 * a2 + 8000);
            if ( result )
            {
              result = sub_10833C();
              if ( result )
              {
                v8 = result;
                result = 0xFFFF;
                if ( v8 != 0xFFFF )
                {
                  sub_104B1C(*(_DWORD *)(a1 + 296), 0, 0, 0);
                  return sub_105378(*(_DWORD *)(a1 + 296), v8, a3);
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
