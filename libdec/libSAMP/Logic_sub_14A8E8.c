// ADDR: 0x14aa0c
// SYMBOL: sub_14AA0C
int __fastcall sub_14AA0C(int a1)
{
  int result; // r0
  int v3; // r5
  unsigned int v4; // r6
  unsigned __int8 *v5; // r1
  int v6; // r1
  int v7; // r6
  int v8; // r1
  int v9; // r1

  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    result = sub_104108(result);
    if ( !result )
    {
      v4 = *(unsigned __int16 *)(a1 + 22);
      result = v4 >> 4;
      if ( v4 >> 4 <= 0x7C )
      {
        result = sub_F2396(v3, *(unsigned __int16 *)(a1 + 22));
        if ( result )
        {
          result = *(_DWORD *)(v3 + 4 * v4);
          if ( result )
          {
            v5 = (unsigned __int8 *)(a1 + 251);
            if ( !*(_BYTE *)(a1 + 36) )
              v5 = (unsigned __int8 *)(a1 + 238);
            v6 = *v5;
            v7 = v6 & 0x3F;
            if ( sub_104648(*(_DWORD *)(a1 + 296), v6) != v7 )
            {
              sub_10479C(*(_DWORD *)(a1 + 296), v7, 0);
              if ( sub_104648(*(_DWORD *)(a1 + 296), v8) != v7 )
              {
                sub_104950(*(_DWORD *)(a1 + 296), v7, 9999);
                sub_10479C(*(_DWORD *)(a1 + 296), v7, 0);
              }
            }
            if ( *(_DWORD *)(v3 + 4 * *(unsigned __int16 *)(a1 + 22) + 8000) )
              v9 = sub_10833C();
            else
              v9 = 0xFFFF;
            return sub_105204(*(_DWORD *)(a1 + 296), v9, *(unsigned __int8 *)(a1 + 36));
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
