// ADDR: 0x223500
// SYMBOL: sub_223500
bool __fastcall sub_223500(_DWORD *a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r7
  int v4; // r3
  int v5; // r8
  unsigned int v6; // lr
  int v7; // r7
  unsigned int v8; // r3
  int v9; // r5
  unsigned int v10; // r6
  int v11; // r1
  int v12; // r12
  int v13; // r1
  int v14; // r4
  int v15; // t1
  int *v16; // r2
  int v17; // r3
  int v18; // r6
  char *v19; // r6
  unsigned int v20; // r7
  int v21; // t1
  int (__fastcall *v22)(int, int, int); // r8
  unsigned int v23; // lr
  int v24; // r2
  int v25; // r5
  int v26; // r2
  int v27; // r7
  int v28; // r7

  v3 = a3[1];
  v4 = 0;
  if ( v3 >> 3 )
  {
    v5 = *a3;
    v6 = v3 >> 3;
    v7 = 0;
    v8 = v6;
    do
    {
      v9 = v7 + (v8 >> 1);
      v10 = v8 + ~(v8 >> 1);
      if ( (*(_DWORD *)(v5 + 8 * v9) | (2 * (*(_DWORD *)(v5 + 8 * v9) & 0x40000000u))) + v5 + 8 * v9 <= a2 )
        v7 = v9 + 1;
      else
        v10 = v8 >> 1;
      v8 = v10;
    }
    while ( v10 );
    v4 = 0;
    if ( v7 )
    {
      v11 = v5 + 8 * v7;
      v12 = -1;
      if ( v7 != v6 )
        v12 = (*(_DWORD *)(v5 + 8 * v7) | (2 * (*(_DWORD *)(v5 + 8 * v7) & 0x40000000))) + v5 + 8 * v7;
      v15 = *(_DWORD *)(v11 - 8);
      v13 = v11 - 8;
      v14 = v15;
      v16 = (int *)(v13 + 4);
      if ( v13 != -4 )
      {
        v17 = *v16;
        if ( *v16 == 1 )
          return v17 != 1;
        if ( v17 < 0 )
        {
          v19 = (char *)(v13 + 4);
          v20 = *v16;
        }
        else
        {
          v18 = v17 | (2 * (v17 & 0x40000000));
          v21 = *(int *)((char *)v16 + v18);
          v19 = (char *)v16 + v18;
          v20 = v21;
          if ( v21 > -1 )
          {
            v22 = (int (__fastcall *)(int, int, int))&v19[v20 | (2 * (v20 & 0x40000000))];
            v23 = 0;
            v24 = (int)&v19[4 * HIBYTE(*((_DWORD *)v19 + 1)) + 4];
            v25 = 0;
LABEL_27:
            v27 = v24 + 4;
LABEL_28:
            a1[94] = v19;
            a1[87] = v12;
            a1[88] = v27;
            a1[91] = v25 | v23;
            a1[86] = (v14 | (2 * (v14 & 0x40000000))) + v13;
            a1[89] = v22;
            return v17 != 1;
          }
        }
        v26 = HIBYTE(v20) & 0xF;
        v23 = (unsigned int)v17 >> 31;
        if ( v26 == 2 )
        {
          v25 = 2;
          v22 = sub_222724;
          v28 = BYTE2(v20);
          if ( v17 > -1 )
          {
LABEL_26:
            v24 = (int)&v19[4 * v28];
            goto LABEL_27;
          }
        }
        else
        {
          if ( v26 != 1 )
          {
            if ( v26 )
            {
              fprintf(
                (FILE *)((char *)&_sF + 168),
                "libunwind: %s - %s\n",
                "getInfoFromEHABISection",
                "unknown personality routine");
              fflush((FILE *)((char *)&_sF + 168));
              abort();
            }
            v27 = 0;
            v25 = 0;
            if ( v17 > -1 )
              v27 = (int)(v19 + 4);
            v22 = sub_2224AC;
            goto LABEL_28;
          }
          v25 = 0;
          v22 = sub_22270C;
          v28 = BYTE2(v20);
          if ( v17 > -1 )
            goto LABEL_26;
        }
        if ( v28 )
        {
          fprintf(
            (FILE *)((char *)&_sF + 168),
            "libunwind: %s - %s\n",
            "getInfoFromEHABISection",
            "index inlined table detected but pr function requires extra words");
          fflush((FILE *)((char *)&_sF + 168));
          abort();
        }
        goto LABEL_26;
      }
    }
  }
  return v4;
}


// ======================================================================
