// ADDR: 0x18a604
// SYMBOL: sub_18A604
int __fastcall sub_18A604(int a1, unsigned int a2, _DWORD *a3, int a4, unsigned __int16 *a5, _BYTE *a6)
{
  int v7; // r1
  int v10; // r0
  int v12; // r6
  int v13; // r3
  unsigned int v14; // r2
  int v16; // r8
  int v17; // r3
  int *v18; // r11
  int v19; // r0
  int v20; // r2
  unsigned int v21; // r1
  int v22; // r12
  int v23; // r3
  int v24; // r1
  int v25; // r0
  unsigned int v26; // r6
  int v27; // r0
  int *v28; // r8
  int v29; // t1
  unsigned int v30; // r2
  int v31; // r12
  _DWORD *v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // lr
  unsigned int v36; // r0
  int v37; // r0
  int v38; // r1
  _WORD *v39; // r1
  int v40; // t1
  int v41; // r1
  int v42; // r1
  int v43; // r1
  int v44; // r0
  int v45; // r1
  int v46; // [sp+10h] [bp-20h]

  v7 = *(_DWORD *)(a4 + 4);
  v10 = v7 - 1;
  v12 = 0;
  v13 = v7 / 2;
  do
  {
    v14 = *(unsigned __int16 *)(a4 + 2 * v13 + 8);
    if ( v14 == a2 )
    {
      if ( !*(_BYTE *)a4 )
      {
        v12 = v13 + 1;
        goto LABEL_12;
      }
      goto LABEL_10;
    }
    if ( v14 <= a2 )
      v12 = v13 + 1;
    else
      v10 = v13 - 1;
    v13 = v12 + (v10 - v12) / 2;
  }
  while ( v10 >= v12 );
  if ( *(_BYTE *)a4 )
    return sub_18A8B6(a1, a2, a3, v12, 0, a4, a5);
LABEL_12:
  v16 = a4 + 4 * v12;
  v18 = (int *)(v16 + 208);
  v17 = *(_DWORD *)(v16 + 208);
  if ( !*(_BYTE *)v17 || *(_DWORD *)(v17 + 4) != 32 )
    goto LABEL_35;
  if ( v14 == a2 )
  {
LABEL_10:
    *a6 = 0;
    return 0;
  }
  if ( v12 >= 1 )
  {
    v46 = v12 - 1;
    v19 = *(_DWORD *)(a4 + 4 * (v12 - 1) + 208);
    v20 = *(_DWORD *)(v19 + 4);
    if ( v20 <= 31 )
    {
      v21 = *(unsigned __int16 *)(v17 + 8);
      *((_DWORD *)a5 + 1) = 1;
      if ( v21 >= a2 )
      {
        *a5 = v21;
        v42 = *(_DWORD *)(v17 + 72);
        a5[1] = a2;
        *(_DWORD *)(v19 + 4 * v20 + 72) = v42;
        *(_WORD *)(v19 + 2 * v20 + 8) = *(_WORD *)(v17 + 8);
        v43 = *a3;
        *(_DWORD *)(v19 + 4) = v20 + 1;
        *(_WORD *)(v17 + 8) = a2;
        *(_DWORD *)(v17 + 72) = v43;
      }
      else
      {
        sub_18A83A(a1, a4, v12, a5);
        v22 = *v18;
        v23 = 0;
        v24 = *(_DWORD *)(*v18 + 4) - 1;
        v25 = *(_DWORD *)(*v18 + 4) / 2;
        while ( 1 )
        {
          v26 = *(unsigned __int16 *)(v22 + 2 * v25 + 8);
          if ( v26 == a2 )
            break;
          if ( v26 <= a2 )
            v23 = v25 + 1;
          else
            v24 = v25 - 1;
          v25 = v23 + (v24 - v23) / 2;
          if ( v24 < v23 )
            goto LABEL_47;
        }
        v23 = v25;
LABEL_47:
        sub_18A8B6(a1, a2, a3, v23, 0, v22, 0);
      }
      v44 = *v18;
      v45 = a4 + 2 * v46;
      goto LABEL_52;
    }
  }
  if ( v7 > v12 )
  {
    v29 = *(_DWORD *)(v16 + 212);
    v28 = (int *)(v16 + 212);
    v27 = v29;
    if ( *(int *)(v29 + 4) <= 31 )
    {
      v30 = *(unsigned __int16 *)(v17 + 70);
      *((_DWORD *)a5 + 1) = 1;
      if ( v30 <= a2 )
      {
        *a5 = *(_WORD *)(v27 + 8);
        sub_18A8B6(a1, a2, a3, 0, 0, v27, 0);
        a5[1] = a2;
      }
      else
      {
        sub_18ABAE(a1, a4, v12, a5);
        v31 = *v18;
        v32 = a3;
        v33 = 0;
        v34 = *(_DWORD *)(*v18 + 4) - 1;
        v35 = *(_DWORD *)(*v18 + 4) / 2;
        while ( 1 )
        {
          v36 = *(unsigned __int16 *)(v31 + 2 * v35 + 8);
          if ( v36 == a2 )
            break;
          if ( v36 <= a2 )
            v33 = v35 + 1;
          else
            v34 = v35 - 1;
          v35 = v33 + (v34 - v33) / 2;
          if ( v34 < v33 )
            goto LABEL_50;
        }
        v33 = v35;
LABEL_50:
        sub_18A8B6(a1, a2, v32, v33, 0, v31, 0);
      }
      v44 = *v28;
      v45 = a4 + 2 * v12;
LABEL_52:
      *(_WORD *)(v45 + 8) = *(_WORD *)(v44 + 8);
      return 0;
    }
  }
LABEL_35:
  v37 = sub_18A604(a1, a2, a3, v17, a5, a6);
  if ( *((_DWORD *)a5 + 1) == 1 && v12 >= 1 )
  {
    v38 = a4 + 2 * v12;
    v40 = *(unsigned __int16 *)(v38 + 6);
    v39 = (_WORD *)(v38 + 6);
    if ( v40 == *a5 )
      *v39 = a5[1];
  }
  if ( !v37 )
    return 0;
  if ( *(_BYTE *)v37 )
  {
    v41 = *(unsigned __int16 *)(v37 + 8);
  }
  else
  {
    v41 = *a5;
    --*(_DWORD *)(v37 + 4);
  }
  return sub_18A8B6(a1, v41, a3, v12, v37, a4, a5);
}


// ======================================================================
