
// Address: 0x19bdf8
// Original: j__ZN15ButtonContainerILi16EE6UpdateEb
// Demangled: ButtonContainer<16>::Update(bool)
// attributes: thunk
int ButtonContainer<16>::Update()
{
  return _ZN15ButtonContainerILi16EE6UpdateEb();
}


// ============================================================

// Address: 0x27d0b0
// Original: _ZN15ButtonContainerILi16EE6UpdateEb
// Demangled: ButtonContainer<16>::Update(bool)
int __fastcall ButtonContainer<16>::Update(int a1, int a2)
{
  int v3; // r2
  int i; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r3
  unsigned int v8; // r11
  int v9; // r2
  unsigned int v10; // r10
  char *v11; // r0
  char *v12; // r1
  int v13; // r9
  int v14; // r6
  int v15; // r5
  bool v16; // zf
  double *v17; // r11
  double v18; // d16
  float v19; // s0
  int v20; // r1
  _DWORD *v21; // r1
  int v22; // t1
  int v23; // r6
  int v24; // r0
  int v25; // r6
  int v26; // r5
  int v27; // r0
  int v28; // r1
  int v29; // r2

  v3 = *(_DWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 380) = v3;
  for ( i = 0; i != 16; ++i )
  {
    v5 = *(_DWORD *)(a1 + 4 * i);
    if ( (unsigned int)(v5 + 1) >= 2 )
    {
      if ( v5 != 2 )
        goto LABEL_7;
      v6 = 3;
    }
    else
    {
      v6 = 1;
    }
    *(_DWORD *)(a1 + 4 * i) = v6;
LABEL_7:
    v7 = a1 + i;
    if ( *(_BYTE *)(v7 + 104) )
      *(_BYTE *)(v7 + 104) = 0;
  }
  if ( a2 )
  {
    *(_BYTE *)(a1 + 104) = 0;
    *(_DWORD *)(a1 + 92) = 0;
    *(_BYTE *)(a1 + 107) = 0;
    *(_WORD *)(a1 + 105) = 0;
    *(_BYTE *)(a1 + 108) = 0;
    *(_QWORD *)a1 = 0x100000001LL;
    *(_QWORD *)(a1 + 8) = 0x100000001LL;
    *(_BYTE *)(a1 + 109) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 28) = 0x100000001LL;
    *(_QWORD *)(a1 + 36) = 0x100000001LL;
    *(_QWORD *)(a1 + 44) = 0x100000001LL;
    *(_QWORD *)(a1 + 52) = 0x100000001LL;
    *(_BYTE *)(a1 + 110) = 0;
    *(_DWORD *)(a1 + 111) = 0;
    *(_DWORD *)(a1 + 20) = 1;
    *(_DWORD *)(a1 + 24) = 1;
    *(_DWORD *)(a1 + 115) = 0;
    *(_BYTE *)(a1 + 119) = 0;
    *(_DWORD *)(a1 + 60) = 1;
LABEL_35:
    v27 = *(_DWORD *)(a1 + 76);
    v28 = *(_DWORD *)(a1 + 80);
    v29 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a1 + 92) = 0;
    *(_DWORD *)(a1 + 64) = v27;
    *(_DWORD *)(a1 + 68) = v28;
    *(_DWORD *)(a1 + 72) = v29;
    return 1;
  }
  v8 = *(_DWORD *)(a1 + 92);
  if ( !v8 )
    goto LABEL_35;
  v9 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = *(char **)(a1 + 96);
    v12 = &v11[v9];
    v13 = *(_DWORD *)&v11[v9];
    v14 = *(_DWORD *)&v11[v9 + 4];
    v15 = *(_DWORD *)(a1 + 4 * v13);
    if ( v15 == v14 )
      goto LABEL_34;
    v16 = v15 == 1;
    if ( v15 == 1 )
      v16 = v14 == 0;
    if ( v16 )
    {
LABEL_34:
      v8 = *(_DWORD *)(a1 + 92);
      ++v10;
      v9 += 32;
      if ( v10 >= v8 )
        goto LABEL_35;
      continue;
    }
    break;
  }
  if ( v15 == 3 )
  {
    if ( v14 == 2 )
      goto LABEL_34;
    goto LABEL_23;
  }
  if ( (unsigned int)(v15 + 1) >= 2 && v15 != 2 )
  {
LABEL_23:
    *(_DWORD *)(a1 + 4 * v13) = v14;
    if ( !v14 )
    {
      v17 = (double *)(a1 + 8 * v13 + 120);
      v18 = *(double *)(*(_DWORD *)(a1 + 96) + v9 + 16);
      v19 = v18 - *v17;
      if ( *(float *)(a1 + 100) <= v19 )
      {
        v21 = (_DWORD *)(a1 + 4 * v13 + 248);
      }
      else
      {
        v20 = a1 + 4 * v13;
        v22 = *(_DWORD *)(v20 + 248);
        v21 = (_DWORD *)(v20 + 248);
        v23 = *(_DWORD *)(a1 + 64) - v22;
        if ( v23 < 0 )
          v23 = -v23;
        if ( v23 < (int)windowSize / 10 )
        {
          v24 = *(_DWORD *)(a1 + 68);
          v25 = *(_DWORD *)(a1 + 4 * v13 + 312);
          v26 = v24 - v25;
          if ( v24 - v25 < 0 )
            v26 = v25 - v24;
          if ( v26 < (int)windowSize / 10 )
          {
            *(_BYTE *)(a1 + v13 + 104) = 1;
            v18 = *(double *)(*(_DWORD *)(a1 + 96) + v9 + 16);
          }
        }
      }
      *v17 = v18;
      *v21 = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 4 * v13 + 312) = *(_DWORD *)(a1 + 68);
    }
    goto LABEL_34;
  }
  *(_DWORD *)(a1 + 64) = *((_DWORD *)v12 - 6);
  *(_DWORD *)(a1 + 68) = *((_DWORD *)v12 - 5);
  *(_DWORD *)(a1 + 72) = *((_DWORD *)v12 - 2);
  memmove(v11, v12, 32 * (v8 - v10));
  *(_DWORD *)(a1 + 92) -= v10;
  return 0;
}


// ============================================================
