
// Address: 0x1976f8
// Original: j__ZN15ButtonContainerILi3EE6UpdateEb
// Demangled: ButtonContainer<3>::Update(bool)
// attributes: thunk
int ButtonContainer<3>::Update()
{
  return _ZN15ButtonContainerILi3EE6UpdateEb();
}


// ============================================================

// Address: 0x27cb5c
// Original: _ZN15ButtonContainerILi3EE6UpdateEb
// Demangled: ButtonContainer<3>::Update(bool)
int __fastcall ButtonContainer<3>::Update(int *a1, int a2)
{
  int v3; // r2
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r3
  int v11; // r2
  unsigned int v12; // r11
  char *v13; // r0
  char *v14; // r1
  int v15; // r9
  int v16; // r6
  int v17; // r4
  bool v18; // zf
  double v19; // d16
  double *v20; // r0
  float v21; // s0
  int *v22; // r1
  int *v23; // r1
  int v24; // t1
  int v25; // r6
  int v26; // r6
  int v27; // r5
  int v28; // r4
  int v29; // r0
  int v30; // r1
  int v31; // r2

  v3 = a1[26];
  v4 = *a1;
  a1[26] = 0;
  a1[27] = v3;
  if ( (unsigned int)(v4 + 1) >= 2 )
  {
    if ( v4 != 2 )
      goto LABEL_6;
    v5 = 3;
  }
  else
  {
    v5 = 1;
  }
  *a1 = v5;
LABEL_6:
  if ( *((_BYTE *)a1 + 52) )
    *((_BYTE *)a1 + 52) = 0;
  v6 = a1[1];
  if ( (unsigned int)(v6 + 1) >= 2 )
  {
    if ( v6 != 2 )
      goto LABEL_13;
    v7 = 3;
  }
  else
  {
    v7 = 1;
  }
  a1[1] = v7;
LABEL_13:
  if ( *((_BYTE *)a1 + 53) )
    *((_BYTE *)a1 + 53) = 0;
  v8 = a1[2];
  if ( (unsigned int)(v8 + 1) < 2 )
  {
    v9 = 1;
LABEL_19:
    a1[2] = v9;
    goto LABEL_20;
  }
  if ( v8 == 2 )
  {
    v9 = 3;
    goto LABEL_19;
  }
LABEL_20:
  if ( *((_BYTE *)a1 + 54) )
    *((_BYTE *)a1 + 54) = 0;
  if ( a2 )
  {
    a1[10] = 0;
    *((_WORD *)a1 + 26) = 0;
    *((_BYTE *)a1 + 54) = 0;
    *a1 = 1;
    a1[1] = 1;
    a1[2] = 1;
LABEL_47:
    v29 = a1[6];
    v30 = a1[7];
    v31 = a1[8];
    a1[10] = 0;
    a1[3] = v29;
    a1[4] = v30;
    a1[5] = v31;
    return 1;
  }
  v10 = a1[10];
  if ( !v10 )
    goto LABEL_47;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = (char *)a1[11];
    v14 = &v13[v11];
    v15 = *(_DWORD *)&v13[v11];
    v16 = *(_DWORD *)&v13[v11 + 4];
    v17 = a1[v15];
    if ( v17 == v16 )
      goto LABEL_46;
    v18 = v17 == 1;
    if ( v17 == 1 )
      v18 = v16 == 0;
    if ( v18 )
      goto LABEL_46;
    if ( v17 != 3 )
      break;
    if ( v16 != 2 )
      goto LABEL_35;
LABEL_46:
    v10 = a1[10];
    ++v12;
    v11 += 32;
    if ( v12 >= v10 )
      goto LABEL_47;
  }
  if ( (unsigned int)(v17 + 1) >= 2 && v17 != 2 )
  {
LABEL_35:
    a1[v15] = v16;
    if ( !v16 )
    {
      v19 = *(double *)(a1[11] + v11 + 16);
      v20 = (double *)&a1[2 * v15 + 14];
      v21 = v19 - *v20;
      if ( *((float *)a1 + 12) <= v21 )
      {
        v23 = &a1[v15 + 20];
      }
      else
      {
        v22 = &a1[v15];
        v24 = v22[20];
        v23 = v22 + 20;
        v25 = a1[3] - v24;
        if ( v25 < 0 )
          v25 = -v25;
        if ( v25 < (int)windowSize / 10 )
        {
          v26 = a1[4];
          v27 = a1[v15 + 23];
          v28 = v26 - v27;
          if ( v26 - v27 < 0 )
            v28 = v27 - v26;
          if ( v28 < (int)windowSize / 10 )
          {
            *((_BYTE *)a1 + v15 + 52) = 1;
            v19 = *(double *)(a1[11] + v11 + 16);
          }
        }
      }
      *v20 = v19;
      *v23 = a1[3];
      a1[v15 + 23] = a1[4];
    }
    goto LABEL_46;
  }
  a1[3] = *((_DWORD *)v14 - 6);
  a1[4] = *((_DWORD *)v14 - 5);
  a1[5] = *((_DWORD *)v14 - 2);
  memmove(v13, v14, 32 * (v10 - v12));
  a1[10] -= v12;
  return 0;
}


// ============================================================
