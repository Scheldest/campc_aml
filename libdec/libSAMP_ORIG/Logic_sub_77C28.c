// ADDR: 0x77ccc
// SYMBOL: sub_77CCC
int *__fastcall sub_77CCC(int a1, _DWORD *a2, unsigned __int8 *a3)
{
  int *v3; // r5
  int *v4; // r10
  unsigned int v5; // r1
  const void *v6; // r9
  size_t v7; // r11
  int *v8; // r0
  size_t v9; // r4
  unsigned int v10; // r2
  size_t v11; // r8
  const void *v12; // r6
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0

  v3 = (int *)(a1 + 4);
  v4 = *(int **)(a1 + 4);
  if ( !v4 )
  {
    *a2 = v3;
    return v3;
  }
  v3 = (int *)(a1 + 4);
  v5 = *a3;
  v6 = (const void *)*((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 1);
  if ( (v5 & 1) == 0 )
  {
    v6 = a3 + 1;
    v7 = v5 >> 1;
  }
  while ( 1 )
  {
    v9 = v7;
    v10 = *((unsigned __int8 *)v4 + 16);
    v11 = v4[5];
    if ( (v10 & 1) == 0 )
      v11 = v10 >> 1;
    if ( v11 < v7 )
      v9 = v11;
    if ( !v9 )
    {
      if ( v7 < v11 )
        goto LABEL_5;
LABEL_23:
      if ( v11 >= v7 )
        goto LABEL_26;
      goto LABEL_24;
    }
    v12 = (const void *)v4[6];
    if ( (v10 & 1) == 0 )
      v12 = (char *)v4 + 17;
    v13 = memcmp(v6, v12, v9);
    if ( !v13 )
      break;
    if ( v13 <= -1 )
      goto LABEL_5;
LABEL_20:
    v14 = memcmp(v12, v6, v9);
    if ( !v14 )
      goto LABEL_23;
    if ( v14 > -1 )
      goto LABEL_26;
LABEL_24:
    v3 = v4 + 1;
    v8 = (int *)v4[1];
    if ( !v8 )
    {
LABEL_26:
      v15 = a2;
      goto LABEL_29;
    }
    ++v4;
LABEL_6:
    v3 = v4;
    v4 = v8;
  }
  if ( v7 >= v11 )
    goto LABEL_20;
LABEL_5:
  v8 = (int *)*v4;
  if ( *v4 )
    goto LABEL_6;
  v15 = a2;
  v3 = v4;
LABEL_29:
  *v15 = v4;
  return v3;
}


// ======================================================================
