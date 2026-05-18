// ADDR: 0xea2d2
// SYMBOL: sub_EA2D2
int *__fastcall sub_EA2D2(int *result, int *a2)
{
  int v2; // r3
  int *v3; // lr
  int *v4; // r2
  _BYTE *v5; // r2
  int v6; // t1
  int v7; // r2
  int v8; // t1
  int *v9; // r1
  int v10; // r0
  int *v11; // r2
  _DWORD *v12; // r2
  int v13; // t1
  int v14; // r0
  int *v15; // r2
  int **v16; // r2
  int v17; // t1
  int v18; // r1
  int **v19; // r1
  int **v20; // r3
  int **v21; // r3
  int *v22; // t1
  int v23; // r1
  int **v24; // r3
  int **v25; // r3
  int *v26; // t1

  *((_BYTE *)a2 + 12) = a2 == result;
  if ( a2 != result )
  {
    do
    {
      v2 = a2[2];
      if ( *(_BYTE *)(v2 + 12) )
        return result;
      v3 = *(int **)(v2 + 8);
      v4 = (int *)*v3;
      if ( *v3 == v2 )
      {
        v7 = v3[1];
        if ( !v7 || (v8 = *(unsigned __int8 *)(v7 + 12), v5 = (_BYTE *)(v7 + 12), v8) )
        {
          if ( *(int **)v2 == a2 )
          {
            v9 = (int *)a2[2];
          }
          else
          {
            v9 = *(int **)(v2 + 4);
            v10 = *v9;
            *(_DWORD *)(v2 + 4) = *v9;
            if ( v10 )
            {
              *(_DWORD *)(v10 + 8) = v2;
              v3 = *(int **)(v2 + 8);
            }
            v9[2] = (int)v3;
            v11 = *(int **)(v2 + 8);
            v13 = *v11;
            v12 = v11 + 1;
            if ( v13 == v2 )
              v12 = *(_DWORD **)(v2 + 8);
            *v12 = v9;
            *(_DWORD *)(v2 + 8) = v9;
            v3 = (int *)v9[2];
            *v9 = v2;
          }
          result = (int *)*v3;
          *((_BYTE *)v9 + 12) = 1;
          *((_BYTE *)v3 + 12) = 0;
          v23 = result[1];
          *v3 = v23;
          if ( v23 )
            *(_DWORD *)(v23 + 8) = v3;
          v19 = (int **)(v3 + 2);
          result[2] = v3[2];
          v24 = (int **)v3[2];
          v26 = *v24;
          v25 = v24 + 1;
          if ( v26 == v3 )
            v25 = (int **)v3[2];
          *v25 = result;
          result[1] = (int)v3;
          goto LABEL_35;
        }
      }
      else if ( !v4 || (v6 = *((unsigned __int8 *)v4 + 12), v5 = v4 + 3, v6) )
      {
        if ( *(int **)v2 == a2 )
        {
          v14 = a2[1];
          *(_DWORD *)v2 = v14;
          if ( v14 )
          {
            *(_DWORD *)(v14 + 8) = v2;
            v3 = *(int **)(v2 + 8);
          }
          a2[2] = (int)v3;
          v15 = *(int **)(v2 + 8);
          v17 = *v15;
          v16 = (int **)(v15 + 1);
          if ( v17 == v2 )
            v16 = *(int ***)(v2 + 8);
          *v16 = a2;
          *(_DWORD *)(v2 + 8) = a2;
          v3 = (int *)a2[2];
          a2[1] = v2;
        }
        else
        {
          a2 = (int *)a2[2];
        }
        result = (int *)v3[1];
        *((_BYTE *)a2 + 12) = 1;
        *((_BYTE *)v3 + 12) = 0;
        v18 = *result;
        v3[1] = *result;
        if ( v18 )
          *(_DWORD *)(v18 + 8) = v3;
        v19 = (int **)(v3 + 2);
        result[2] = v3[2];
        v20 = (int **)v3[2];
        v22 = *v20;
        v21 = v20 + 1;
        if ( v22 == v3 )
          v21 = (int **)v3[2];
        *v21 = result;
        *result = (int)v3;
LABEL_35:
        *v19 = result;
        return result;
      }
      *(_BYTE *)(v2 + 12) = 1;
      *((_BYTE *)v3 + 12) = v3 == result;
      a2 = v3;
      *v5 = 1;
    }
    while ( v3 != result );
  }
  return result;
}


// ======================================================================
