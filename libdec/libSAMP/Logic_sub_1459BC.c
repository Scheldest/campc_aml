// ADDR: 0xf9184
// SYMBOL: sub_F9184
unsigned int __fastcall sub_F9184(unsigned int a1, int a2, unsigned __int16 a3, int a4, int a5)
{
  unsigned int result; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r5
  int v11; // r5
  int v12; // r0
  int v13; // r5
  int v14; // r10
  int v15; // r9
  int *v16; // r1
  int v17; // r6
  int v18; // r5
  int v19; // r9
  int v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r1

  result = dword_23DEF4;
  if ( dword_23DEF4 && !byte_239030 )
  {
    result = *(_DWORD *)(dword_23DEF4 + 944);
    v8 = *(_DWORD *)(result + 4);
    switch ( a2 )
    {
      case 1:
        v9 = a3;
        result = a3 >> 4;
        if ( result <= 0x7C )
        {
          result = sub_F2396(v8, a3);
          if ( result )
          {
            result = *(_DWORD *)(v8 + 4 * v9);
            if ( result )
              result = sub_109B90(result, (unsigned __int8)a4);
          }
        }
        break;
      case 2:
        v10 = a3;
        result = a3 >> 4;
        if ( result <= 0x7C )
        {
          result = sub_F2396(v8, a3);
          if ( result )
          {
            v11 = *(_DWORD *)(v8 + 4 * v10);
            if ( v11 )
            {
              if ( sub_F74A4() || sub_F541C() || sub_F4270() )
              {
                v12 = sub_F61A4();
                sub_15E858(v12, *(_DWORD *)(v11 + 12));
                sub_109ADC(v11, a4);
                result = sub_F7290(*(_DWORD *)(v11 + 12));
              }
              else
              {
                result = sub_109ADC(v11, a4);
              }
            }
          }
        }
        break;
      case 3:
        v13 = a3;
        result = a3 >> 4;
        if ( result <= 0x7C )
        {
          result = sub_F2396(v8, a3);
          if ( result )
          {
            result = *(_DWORD *)(v8 + 4 * v13);
            if ( result )
              result = sub_109BC8(result, (unsigned __int8)a4, (unsigned __int8)a5);
          }
        }
        break;
      case 4:
        if ( a1 <= 0x3EC )
        {
          v14 = *(_DWORD *)result;
          v15 = a3;
          if ( a3 >> 4 <= 0x7Cu && sub_F2396(v8, a3) )
            result = *(_DWORD *)(v8 + 4 * v15);
          else
            result = 0;
          if ( *(_BYTE *)(v14 + a1 + 4020) )
          {
            v16 = *(int **)(v14 + 4 * a1 + 4);
            if ( v16 )
            {
              if ( result )
              {
                v17 = *v16;
                if ( *v16 )
                {
                  v18 = *(_DWORD *)(v17 + 296);
                  if ( v18 )
                  {
                    result = *(_DWORD *)(v14 + 5052);
                    v19 = *(_DWORD *)(result + 28);
                    if ( v19 )
                    {
                      result = sub_104108(*(_DWORD *)(v17 + 296));
                      if ( result )
                      {
                        result = sub_104108(v19);
                        if ( result )
                        {
                          result = sub_10411A(v18);
                          if ( !result )
                          {
                            result = sub_10411A(v19);
                            if ( result )
                            {
                              v20 = (unsigned __int16)sub_105464(v18);
                              result = sub_105464(v19);
                              if ( v20 == result )
                              {
                                v21 = *(_DWORD *)(v17 + 4);
                                if ( a4 )
                                {
                                  if ( v21 )
                                    sub_109C04(v21, a5);
                                  sub_105034(v19, (unsigned __int8)a5, 0);
                                  v22 = v19;
                                  v23 = 0;
                                }
                                else
                                {
                                  if ( v21 )
                                    sub_109C04(v21, 0);
                                  sub_105034(v19, 0, 0);
                                  v22 = v19;
                                  v23 = 1;
                                }
                                result = sub_10421C(v22, v23);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;
}


// ======================================================================
