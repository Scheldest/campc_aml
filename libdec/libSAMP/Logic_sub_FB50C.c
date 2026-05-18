// ADDR: 0x148f74
// SYMBOL: sub_148F74
int __fastcall sub_148F74(int a1, int a2, int a3)
{
  _DWORD *v3; // r2
  _DWORD *v4; // r12
  unsigned int v5; // lr
  int *v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int *v11; // r3
  int v12; // r3
  int v13; // lr
  bool v14; // zf
  int result; // r0

  if ( a2 && a3 )
  {
    v4 = *(_DWORD **)(a1 + 6072);
    v3 = *(_DWORD **)(a1 + 6068);
    if ( v3 != v4 )
    {
      while ( 1 )
      {
        v5 = *(unsigned __int16 *)v3;
        if ( v5 <= 0x3EC )
        {
          if ( *(_BYTE *)(a1 + v5 + 4020) )
          {
            v6 = *(int **)(a1 + 4 * v5 + 4);
            if ( v6 )
            {
              v7 = *v6;
              if ( v7 )
              {
                v8 = *(_DWORD *)(v7 + 296);
                if ( v8 )
                {
                  if ( *(_DWORD *)(v8 + 92) == a2 )
                    break;
                }
              }
            }
          }
        }
        if ( ++v3 == v4 )
          goto LABEL_26;
      }
    }
    if ( v3 == v4 )
LABEL_26:
      LOWORD(result) = -1;
    else
      return (unsigned __int16)*v3;
  }
  else
  {
    v9 = a1 + 4020;
    v10 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v9 + v10) )
      {
        v11 = *(int **)(v9 + 4 * v10 - 4016);
        if ( v11 )
        {
          v12 = *v11;
          if ( v12 )
          {
            v13 = *(_DWORD *)(v12 + 296);
            v14 = v13 == 0;
            if ( v13 )
            {
              v13 = *(_DWORD *)(v13 + 92);
              v14 = v13 == 0;
            }
            if ( !v14 && v13 == a2 )
              break;
          }
        }
      }
      if ( ++v10 == 1004 )
        goto LABEL_26;
    }
    LOWORD(result) = *(_WORD *)(v12 + 20);
  }
  return (unsigned __int16)result;
}


// ======================================================================
