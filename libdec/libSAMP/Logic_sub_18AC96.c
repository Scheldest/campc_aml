// ADDR: 0x18ae22
// SYMBOL: sub_18AE22
bool __fastcall sub_18AE22(int a1, int a2, int a3, __int16 a4, int a5)
{
  int v8; // r9
  int v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // r1
  __int16 v14; // r0
  int v15; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r6
  int v22; // r2
  int v23; // r2
  bool v24; // cc
  int v25; // r0
  int v26; // r8
  int v27; // r0
  int v28; // r9
  int v29; // r2
  int v30; // r0
  int v31; // r6
  int v32; // r5
  int v33; // r0
  int v34; // r6
  int v35; // r2
  int v36; // r4
  int v37; // r6
  int v38; // r12
  int v39; // r2
  int i; // r0
  int v41; // r5
  int v42; // r4
  __int16 v43; // r1
  int v44; // r0
  int v45; // r1
  int v47; // r0
  __int16 v48; // r6
  int v49; // r2
  int v50; // r6
  int v51; // r5

  if ( a2 >= 1 )
  {
    v8 = a2 - 1;
    v9 = *(_DWORD *)(a3 + 4 * (a2 - 1) + 208);
    if ( *(int *)(v9 + 4) >= 17 )
    {
      v10 = *(_DWORD *)(a3 + 4 * a2 + 208);
      sub_18B064(a1, v10);
      v11 = *(_DWORD *)(v9 + 4);
      if ( *(_BYTE *)v10 )
      {
        v12 = v11 - 1;
        v13 = *(_DWORD *)(v9 + 4 * v12 + 72);
        v14 = *(_WORD *)(v9 + 2 * v12 + 8);
        *(_DWORD *)(v10 + 72) = v13;
      }
      else
      {
        *(_DWORD *)(v10 + 208) = *(_DWORD *)(v9 + 4 * v11 + 208);
        v14 = *(_WORD *)(a3 + 2 * v8 + 8);
      }
      *(_WORD *)(v10 + 8) = v14;
      v47 = *(_DWORD *)(v9 + 4) - 1;
      *(_DWORD *)(v9 + 4) = v47;
      *(_WORD *)(a3 + 2 * v8 + 8) = *(_WORD *)(v9 + 2 * v47 + 8);
      return 0;
    }
  }
  v15 = *(_DWORD *)(a3 + 4);
  if ( v15 > a2 )
  {
    v16 = a3 + 4 * a2;
    v17 = *(_DWORD *)(v16 + 212);
    if ( *(int *)(v17 + 4) >= 17 )
    {
      v18 = *(_DWORD *)(v16 + 208);
      if ( *(_BYTE *)v18 )
      {
        v19 = *(_DWORD *)(v18 + 4);
        v20 = *(_DWORD *)(v17 + 72);
        *(_WORD *)(v18 + 2 * v19 + 8) = *(_WORD *)(v17 + 8);
        v21 = v18 + 4 * v19;
        v22 = v19 + 1;
        *(_DWORD *)(v21 + 72) = v20;
        *(_WORD *)(a3 + 2 * a2 + 8) = *(_WORD *)(v17 + 10);
      }
      else
      {
        if ( !*(_DWORD *)(a5 + 4) )
        {
          v48 = *(_WORD *)(v18 + 8);
          *(_DWORD *)(a5 + 4) = 3;
          *(_WORD *)a5 = v48;
        }
        v49 = *(_DWORD *)(v18 + 4);
        v50 = *(_DWORD *)(v17 + 208);
        v51 = v18 + 2 * v49;
        v22 = v49 + 1;
        *(_WORD *)(v51 + 8) = a4;
        *(_DWORD *)(v18 + 4 * v22 + 208) = v50;
        *(_WORD *)(a3 + 2 * a2 + 8) = *(_WORD *)(v17 + 8);
      }
      *(_DWORD *)(v18 + 4) = v22;
      sub_18B0BA(a1);
      return 0;
    }
  }
  v23 = a3 + 208;
  v24 = v15 <= a2;
  v25 = a2 - 1;
  if ( !v24 )
    v25 = a2;
  v26 = *(_DWORD *)(v23 + 4 * v25);
  v27 = a2;
  if ( !v24 )
    v27 = a2 + 1;
  v28 = *(_DWORD *)(v23 + 4 * v27);
  if ( *(_BYTE *)v26 )
  {
    if ( *(int *)(v28 + 4) >= 1 )
    {
      v29 = *(_DWORD *)(v26 + 4);
      v30 = 0;
      do
      {
        *(_DWORD *)(v26 + 4) = v29 + 1;
        *(_WORD *)(v26 + 2 * v29 + 8) = *(_WORD *)(v28 + 2 * v30 + 8);
        v31 = v28 + 4 * v30;
        v32 = *(_DWORD *)(v28 + 4);
        ++v30;
        *(_DWORD *)(v26 + 4 * v29++ + 72) = *(_DWORD *)(v31 + 72);
      }
      while ( v30 < v32 );
    }
  }
  else
  {
    v33 = *(_DWORD *)(v26 + 4);
    v34 = *(_DWORD *)(v28 + 208);
    *(_DWORD *)(v26 + 4) = v33 + 1;
    v35 = v26 + 2 * v33;
    v36 = *(_DWORD *)(v28 + 4);
    *(_WORD *)(v35 + 8) = a4;
    *(_DWORD *)(v26 + 4 * (v33 + 1) + 208) = v34;
    if ( v36 >= 1 )
    {
      v37 = v33 + 2;
      v38 = v26 + 4 * v33 + 216;
      v39 = v35 + 10;
      for ( i = 0; i < v42; ++i )
      {
        v41 = *(_DWORD *)(v28 + 212 + 4 * i);
        *(_DWORD *)(v26 + 4) = v37 + i;
        *(_DWORD *)(v38 + 4 * i) = v41;
        v42 = *(_DWORD *)(v28 + 4);
        *(_WORD *)(v39 + 2 * i) = *(_WORD *)(v28 + 2 * i + 8);
      }
    }
  }
  if ( *(_DWORD *)(a3 + 4) > a2 )
  {
    sub_18AC28(a1, a2, (unsigned __int8 *)a3);
LABEL_25:
    if ( !a2 && *(_BYTE *)v26 )
    {
      v43 = *(_WORD *)(v26 + 8);
      *(_DWORD *)(a5 + 4) = 3;
      *(_WORD *)a5 = v43;
    }
    goto LABEL_28;
  }
  if ( a2 < 1 )
    goto LABEL_25;
  sub_18AC28(a1, a2 - 1, (unsigned __int8 *)a3);
LABEL_28:
  if ( v28 == *(_DWORD *)(a1 + 20) )
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(v28 + 200);
  if ( *(_BYTE *)v28 )
  {
    v44 = *(_DWORD *)(v28 + 204);
    if ( v44 )
      *(_DWORD *)(v44 + 200) = *(_DWORD *)(v28 + 200);
    v45 = *(_DWORD *)(v28 + 200);
    if ( v45 )
      *(_DWORD *)(v45 + 204) = v44;
  }
  sub_18A206(a1 + 4, v28);
  sub_22178C(v28, 0x154u);
  return *(_DWORD *)(a3 + 4) < 16;
}


// ======================================================================
