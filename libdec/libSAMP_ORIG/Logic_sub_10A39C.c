// ADDR: 0x10a3b4
// SYMBOL: sub_10A3B4
int __fastcall sub_10A3B4(int a1, int a2)
{
  char v4; // r8
  bool v5; // zf
  unsigned __int16 *v6; // r7
  int v7; // r6
  int result; // r0
  int v9; // r6
  int v10; // r8
  int v11; // r4
  _DWORD *v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r1
  int v15; // r4
  int v16; // r8
  unsigned int v17; // r1
  unsigned int v18; // r1
  unsigned int v19; // r1
  int v20; // r1
  _DWORD v21[17]; // [sp+4h] [bp-44h] BYREF

  v4 = *(_BYTE *)(*(_DWORD *)(a1 + 76) + 3);
  v5 = sub_10AD8C(a2, v21) == 0;
  v6 = (unsigned __int16 *)v21[2];
  if ( !v5 )
    v6 = 0;
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 || (v7 = *(_DWORD *)v6) == 0 )
  {
LABEL_26:
    v20 = sub_10AD74(a2);
    result = 9;
    if ( !v20 )
      result = 5;
    if ( v20 == 1 )
      return 8;
  }
  else
  {
    result = 9;
    if ( (v4 & 0xF) == 3 )
    {
      while ( 1 )
      {
        v21[0] = 0;
        v15 = *(_DWORD *)(a1 + 72);
        v16 = *((_DWORD *)v6 + 1);
        sub_10AB7C(a2, 15, v21);
        v12 = v6 + 4;
        v17 = v7 & 1 | (2 * (v16 & 1));
        if ( v17 < 2 )
        {
          v6 += 4;
        }
        else
        {
          if ( v17 != 2 )
          {
LABEL_31:
            fprintf(
              (FILE *)((char *)&_sF + 168),
              "libunwind: %s - %s\n",
              "ProcessDescriptors",
              "Invalid descriptor kind found.");
            fflush((FILE *)((char *)&_sF + 168));
            abort();
          }
          v18 = v15 + (v16 & 0xFFFFFFFE);
          v6 += 6;
          if ( v18 <= (v21[0] & 0xFFFFFFFE) && (v21[0] & 0xFFFFFFFE) < v18 + (v7 & 0xFFFFFFFE) )
          {
LABEL_22:
            v19 = (2 * *v12) & 0x80000000 | *v12 & 0x7FFFFFFF;
            result = 6;
            if ( v19 != -1 )
            {
              if ( v19 != -2 )
              {
                fprintf(
                  (FILE *)((char *)&_sF + 168),
                  "libunwind: %s - %s\n",
                  "ProcessDescriptors",
                  "Type matching not implemented");
                fflush((FILE *)((char *)&_sF + 168));
                abort();
              }
              return 9;
            }
            return result;
          }
        }
        v7 = *(_DWORD *)v6;
        if ( !*(_DWORD *)v6 )
          goto LABEL_26;
      }
    }
    if ( (v4 & 0xF) == 1 )
    {
      while ( 1 )
      {
        v9 = *v6;
        v10 = v6[1];
        v21[0] = 0;
        v11 = *(_DWORD *)(a1 + 72);
        sub_10AB7C(a2, 15, v21);
        v12 = v6 + 2;
        v13 = v9 & 1 | (2 * (v10 & 1));
        if ( v13 < 2 )
        {
          v6 += 2;
        }
        else
        {
          if ( v13 != 2 )
            goto LABEL_31;
          v14 = (v10 & 0xFFFFFFFE) + v11;
          v6 += 4;
          if ( v14 <= (v21[0] & 0xFFFFFFFE) && (v21[0] & 0xFFFFFFFE) < v14 + (v9 & 0xFFFFFFFE) )
            goto LABEL_22;
        }
        if ( !*(_DWORD *)v6 )
          goto LABEL_26;
      }
    }
  }
  return result;
}


// ======================================================================
