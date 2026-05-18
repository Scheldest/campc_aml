// ADDR: 0x10945c
// SYMBOL: sub_10945C
bool __fastcall sub_10945C(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10u) == 0;
}


// ======================================================================
// ADDR: 0x10a354
// SYMBOL: sub_10A354
int __fastcall sub_10A354(int a1, int a2)
{
  int v4; // r12
  int v5; // r3
  int *v6; // r0
  int *v7; // r2
  int *v8; // r0
  int v9; // r1
  int *v10; // r0
  int v11; // r1
  int *v12; // r0
  _BYTE *v13; // r4
  int result; // r0
  int v15; // r1
  int *v16; // r0
  int v17; // r2
  int v18; // r1
  int *v19; // r0
  char *v20; // r1
  int i; // r2
  int v22; // r3
  int v23; // r2
  int v24; // r3

  LOWORD(v4) = -1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( dword_23DEF4 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    if ( v5 )
    {
      v7 = *(int **)(v5 + 60004);
      v6 = *(int **)(v5 + 60000);
      if ( v6 != v7 )
      {
        while ( *(_DWORD *)(v5 + 4 * *v6) != a2 )
        {
          if ( ++v6 == v7 )
            goto LABEL_9;
        }
      }
      if ( v6 != v7 )
        v4 = *v6;
    }
  }
LABEL_9:
  v8 = *(int **)(a2 + 12);
  *(_WORD *)a1 = v4;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    goto LABEL_16;
  }
  v9 = sub_10837C(v8);
  v10 = *(int **)(a2 + 12);
  if ( v9 == 1 )
  {
    *(_DWORD *)(a1 + 4) = v10[370];
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 4) = 0;
  if ( !v10 )
  {
LABEL_16:
    *(_DWORD *)(a1 + 8) = 0;
    goto LABEL_17;
  }
LABEL_14:
  v11 = sub_10837C(v10);
  v12 = *(int **)(a2 + 12);
  if ( v11 == 1 )
  {
    *(_DWORD *)(a1 + 8) = *(int *)((char *)v12 + 1469);
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v12 )
  {
LABEL_17:
    *(_WORD *)(a1 + 12) = 0;
    v13 = (_BYTE *)(a1 + 13);
    goto LABEL_18;
  }
LABEL_20:
  v15 = sub_10837C(v12);
  v16 = *(int **)(a2 + 12);
  if ( v15 == 1 )
  {
    v17 = v16[369];
    *(_BYTE *)(a1 + 13) = 0;
    v13 = (_BYTE *)(a1 + 13);
    *(v13 - 1) = v17;
  }
  else
  {
    *(_WORD *)(a1 + 12) = 0;
    v13 = (_BYTE *)(a1 + 13);
    if ( !v16 )
      goto LABEL_18;
  }
  v18 = sub_10837C(v16);
  v19 = *(int **)(a2 + 12);
  if ( v18 != 1 )
  {
    if ( v19 && sub_10837C(v19) == 2 )
    {
      v23 = 0;
      result = (unsigned __int8)*v13;
      do
      {
        v24 = *(unsigned __int8 *)(*(_DWORD *)(a2 + 12) + 1648 + v23++);
        result = 2 * (result | (v24 != 0));
      }
      while ( v23 != 2 );
      goto LABEL_31;
    }
LABEL_18:
    result = (unsigned __int8)*v13;
    goto LABEL_32;
  }
  v20 = (char *)v19 + 1465;
  result = (unsigned __int8)*v13;
  for ( i = 0; i != 4; ++i )
  {
    v22 = (unsigned __int8)v20[i];
    result = 2 * (result | (v22 != 0));
  }
LABEL_31:
  *v13 = result;
LABEL_32:
  if ( result << 24 )
  {
    result = (unsigned __int8)result >> 1;
    *v13 = result;
  }
  return result;
}


// ======================================================================
