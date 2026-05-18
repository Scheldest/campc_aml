// ADDR: 0x14b6a0
// SYMBOL: sub_14B6A0
int __fastcall sub_14B6A0(int result, int a2, int a3)
{
  bool v3; // zf
  int v4; // r5
  int v5; // r4
  int v6; // r6
  int v7; // r0
  int v8; // r12
  __int64 v9; // r2
  _DWORD v10[20]; // [sp+0h] [bp-50h] BYREF

  v3 = a2 == 19;
  if ( a2 == 19 )
    v3 = a3 == 17;
  if ( v3 )
  {
    v4 = result;
    result = sub_E35A0(dword_23DEF0);
    if ( result )
    {
      v5 = result;
      result = sub_104108(result);
      if ( result )
      {
        result = sub_10411A(v5);
        if ( !result )
        {
          v6 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
          v7 = sub_104326(v5);
          v8 = 0xFFFF;
          if ( v7 )
          {
            v9 = *(_QWORD *)(v6 + 60000);
            if ( (_DWORD)v9 != HIDWORD(v9) )
            {
              while ( *(_DWORD *)(v6 + 4 * *(_DWORD *)v9 + 8000) != v7 )
              {
                LODWORD(v9) = v9 + 4;
                if ( (_DWORD)v9 == HIDWORD(v9) )
                  goto LABEL_15;
              }
            }
            if ( (_DWORD)v9 != HIDWORD(v9) )
              v8 = *(unsigned __int16 *)v9;
          }
LABEL_15:
          result = *(unsigned __int16 *)(v4 + 22);
          if ( v8 == result )
          {
            sub_F8910(v5, v10);
            sub_104098(v5, *(float *)&v10[12], *(float *)&v10[13], *(float *)&v10[14] + 1.0);
            return sub_FA2C0(dword_23DEF0, "~r~Car Jacked~w~!", 1000, 5);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
