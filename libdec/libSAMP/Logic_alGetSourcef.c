// ADDR: 0x1cc7d8
// SYMBOL: sub_1CC7D8
int __fastcall sub_1CC7D8(int a1, int a2, int a3)
{
  double v3; // d0
  _DWORD *v6; // r1
  double v8; // d1
  unsigned int **v9; // r0
  unsigned int *v10; // r4
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r6
  int v14; // r3
  int result; // r0
  double v16; // d0
  unsigned int v17; // r7
  unsigned int v18; // r1
  unsigned int v19; // r10
  unsigned int v20; // r1
  double v21; // d1
  unsigned int v22; // s0
  unsigned int v23; // r6
  double v24; // d0
  int v25; // r5
  int v26; // r0
  int v27; // r1

  v6 = *(_DWORD **)(a1 + 108);
  v8 = 0.0;
  if ( v6 )
  {
    v9 = *(unsigned int ***)(a1 + 108);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 )
        break;
      v9 = (unsigned int **)v9[1];
      if ( !v9 )
        goto LABEL_5;
    }
    v8 = (double)v10[1];
  }
  else
  {
LABEL_5:
    v10 = 0;
  }
  if ( *(_DWORD *)(a1 + 92) == 4114 )
  {
    if ( !v10 )
    {
LABEL_20:
      result = 0;
      v16 = 0.0;
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      goto LABEL_39;
    }
  }
  else if ( !v10 || *(_DWORD *)(a1 + 92) != 4115 )
  {
    goto LABEL_20;
  }
  v11 = *(_DWORD *)(a1 + 100);
  if ( v6 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      if ( *v6 )
      {
        v14 = *(_DWORD *)(*v6 + 12);
        if ( v12 < *(_DWORD *)(a1 + 116) )
          v11 += v14;
        v13 += v14;
      }
      v6 = (_DWORD *)v6[1];
      ++v12;
    }
    while ( v6 );
  }
  else
  {
    v13 = 0;
  }
  v17 = v11;
  if ( *(_DWORD *)(a1 + 92) == 4114 )
    v17 = v11 + (unsigned int)(v8 * v3);
  if ( *(_BYTE *)(a1 + 77) )
  {
    sub_221798(v11, v13);
    v19 = v18;
    sub_221798(v17, v13);
    v17 = v20;
  }
  else
  {
    v19 = 0;
    if ( v17 >= v13 )
      v17 = 0;
    if ( v11 < v13 )
      v19 = v11;
  }
  result = a2 - 4132;
  switch ( a2 )
  {
    case 4132:
      v24 = (double)(int)v10[1];
      v21 = (double)v19 / v24;
      v16 = (double)v17 / v24;
      goto LABEL_38;
    case 4133:
    case 4146:
      v21 = (double)v19;
      v22 = v17;
      goto LABEL_37;
    case 4134:
    case 4145:
      v23 = v10[7];
      if ( v23 == 5132 )
      {
        result = 36 * j_ChannelsFromFmt(v10[4]);
        v16 = (double)(result * (v19 / 0x41));
        *(double *)a3 = v16;
        if ( *(_DWORD *)(a1 + 92) == 4114 )
        {
          result *= (v17 + 64) / 0x41;
          v16 = (double)(unsigned int)result;
        }
      }
      else
      {
        v25 = j_ChannelsFromUserFmt(v10[6]);
        v26 = j_BytesFromUserFmt(v23) * v25;
        v27 = v26 * v19;
        result = v26 * v17;
        v21 = (double)(unsigned int)v27;
        v22 = result;
LABEL_37:
        v16 = (double)v22;
LABEL_38:
        *(double *)a3 = v21;
      }
      break;
    default:
      return result;
  }
LABEL_39:
  *(double *)(a3 + 8) = v16;
  return result;
}


// ======================================================================
