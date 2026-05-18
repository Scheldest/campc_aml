// ADDR: 0x109d28
// SYMBOL: sub_109D28
int __fastcall sub_109D28(int a1, char *s)
{
  _QWORD *v3; // r0
  int result; // r0
  int v6; // r10
  int v7; // r8
  int v8; // r6
  int v9; // r11
  int v10; // r2
  int v11; // r2
  __int64 v12; // r0
  int v13; // r3

  v3 = (_QWORD *)(a1 + 41);
  *v3 = 0LL;
  v3[1] = 0LL;
  v3 += 2;
  *v3 = 0LL;
  v3[1] = 0LL;
  result = strlen(s);
  if ( result >= 1 )
  {
    v6 = result - 7;
    v7 = result;
    result = 0;
    v8 = 0;
    do
    {
      if ( result <= v6 && s[result] == 123 && (v9 = result + 7, s[result + 7] == 125) )
      {
        if ( result == v6 )
        {
          v9 = v6;
        }
        else
        {
          v11 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 60000);
            if ( (_DWORD)v12 != HIDWORD(v12) )
            {
              while ( *(_DWORD *)(v11 + 4 * *(_DWORD *)v12) != a1 )
              {
                LODWORD(v12) = v12 + 4;
                if ( (_DWORD)v12 == HIDWORD(v12) )
                  goto LABEL_19;
              }
            }
            if ( (_DWORD)v12 == HIDWORD(v12) )
LABEL_19:
              v13 = 0xFFFF;
            else
              v13 = *(unsigned __int16 *)v12;
            _android_log_print(5, "AXL", "Skip colortag in numberplate for vehicle %d", v13);
          }
        }
      }
      else
      {
        if ( v8 == 31 )
        {
          result = 0;
          *(_BYTE *)(a1 + 72) = 0;
          return result;
        }
        v10 = a1 + v8++;
        v9 = result;
        *(_BYTE *)(v10 + 41) = s[result];
      }
      result = v9 + 1;
    }
    while ( v9 + 1 < v7 );
  }
  return result;
}


// ======================================================================
